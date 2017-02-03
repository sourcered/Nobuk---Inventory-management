#include "../../include/database/database.h"

namespace nobuk
{
    Factory::Factory()
    {
        init();
    }

    Factory::~Factory()
    {
        con = nullptr;

        delete pstm;
        pstm = nullptr;

        delete stm;
        stm = nullptr;

        delete rs;
        rs = nullptr;
    }

    void Factory::init()
    {
        sql::Driver * driver;
        driver = get_driver_instance();
        std::shared_ptr<sql::Connection> tmp(driver->connect(DRIVER_URL, USER, PASSWORD));
        con = tmp;

        stm = con->createStatement();
        stm->executeUpdate(SQL_CREATE_DATABASE);
        con->setSchema(DATABASE_NAME);
        stm->executeUpdate(SQL_CREATE_TABLE);
    }

    std::list<Product> O_database::get_Products()
    {
        std::list<Product> listProducts;
        Product product;
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_GET_PRODUCTS);
            factory.rs = factory.pstm->executeQuery();
            factory.rs->first();
            do
            {
                product.id = factory.rs->getInt("id");
                product.name = factory.rs->getString("name");
                product.code = factory.rs->getInt("code");
                product.quantity =factory.rs->getDouble("quantity");
                product.price = static_cast<float>(factory.rs->getDouble("price"));
                // product.total = ;
                listProducts.push_back(product);
            }
            while(factory.rs->next());
        }
        catch(sql::SQLException & ex) { std::cout << "Error: get_Products" << std::endl; }

        return listProducts;
    }

    Product O_database::get_Product(int id)
    {
        Product product;
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_GET_PRODUCT);
            factory.pstm->setInt(1, id);
            factory.rs = factory.pstm->executeQuery();
            factory.rs->first();

            product.id = factory.rs->getInt("id");
            product.code = factory.rs->getInt("code");
            product.name = factory.rs->getString("name");
            product.quantity = static_cast<float>(factory.rs->getDouble("quantity"));
            product.price = static_cast<float>(factory.rs->getDouble("price"));
            // product.total = ;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: get_Product" << std::endl; }
        return product;
    }

    std::list<float> O_database::get_Quantitys()
    {
        std::list<float> list;
        try
        {
            factory.stm = factory.con->createStatement();
            factory.rs = factory.stm->executeQuery(SQL_GET_QUANTITYS);
            factory.rs->first();
            do
            {
              list.push_back(static_cast<float>(factory.rs->getDouble("quantity")));
            }
            while(factory.rs->next());
        }
        catch(sql::SQLException & ex) { std::cout << "Error: get_Quantitys" << std::endl; }

        return list;
    }

    float O_database::get_Quantity(int id)
    {
        float quantity = -1.0f;
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_GET_QUANTITY);
            factory.pstm->setInt(1, id);
            factory.rs = factory.pstm->executeQuery();
            factory.rs->first();
            quantity = static_cast<float>(factory.rs->getDouble("quantity"));
        }
        catch(sql::SQLException & ex) { std::cout << "Error: get_Quantity" << std::endl; }
        return quantity;
    }

    float O_database::get_Total(int id)
    {
      float quantity = 0.0f;
      try
      {
          factory.pstm = factory.con->prepareStatement(SQL_GET_TOTAL);
          factory.pstm->setInt(1, id);
          factory.rs = factory.pstm->executeQuery();
          factory.rs->first();
          quantity = static_cast<float>(factory.rs->getDouble("total"));
      }
      catch(sql::SQLException & ex) { std::cout << "Error: get_Total" << std::endl; }
      return quantity;
    }

    bool I_database::add_product(Product * product)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_ADD_PRODUCT);
            factory.pstm->setInt(1, product->code);
            factory.pstm->setString(2, product->name);
            factory.pstm->setDouble(3, product->quantity);
            factory.pstm->setDouble(4, product->price);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: add_product" << std::endl; }
        return false;
    }

    bool I_database::delete_product(int id)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_DELETE_PRODUCT);
            factory.pstm->setInt(1, id);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: delete_product" << std::endl; }
        return false;
    }

    bool I_database::update_product(Product * product)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_UPDATE_PRODUCT);
            factory.pstm->setInt(1, product->code);
            factory.pstm->setString(2, product->name);
            factory.pstm->setDouble(3, product->quantity);
            factory.pstm->setDouble(4, product->price);
            factory.pstm->setInt(5, product->id);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: update_product" << std::endl; }
        return false;
    }

    bool I_database::update_quantity(int id, float quantity)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_UPDATE_QUANTITY);
            factory.pstm->setDouble(1, quantity);
            factory.pstm->setInt(2, id);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: update_quantity" << std::endl; }
        return false;
    }

    bool I_database::update_price(int id, float price)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_UPDATE_PRICE);
            factory.pstm->setDouble(1, price);
            factory.pstm->setInt(2, id);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: update_quantity" << std::endl; }
        return false;
    }

    bool I_database::adjust_totals()
    {
        try
        {
            factory.stm = factory.con->createStatement();
            factory.rs = factory.stm->executeQuery(SQL_GET_TOTALs);
            factory.rs->first();

            factory.pstm = factory.con->prepareStatement(SQL_UPDATE_TOTAL);
            float total;
            int i = 1;
            do
            {
              total = factory.rs->getDouble(1);
              factory.pstm->setInt(1,total);
              factory.pstm->setInt(2,i);
              factory.pstm->executeUpdate();
              i++;
            }
            while(factory.rs->next());
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: adjust_total" << std::endl; }
        return false;
    }

    bool I_database::adjust_total(int id)
    {
        try
        {
            factory.pstm = factory.con->prepareStatement(SQL_GET_TOTAL1);
            factory.pstm->setInt(1,id);
            factory.rs = factory.pstm->executeQuery();
            factory.rs->first();
            float total = static_cast<float>(factory.rs->getDouble(1));

            factory.pstm = factory.con->prepareStatement(SQL_UPDATE_TOTAL);
            factory.pstm->setInt(1,total);
            factory.pstm->setInt(2,id);
            factory.pstm->executeUpdate();
            return true;
        }
        catch(sql::SQLException & ex) { std::cout << "Error: adjust_total" << std::endl; }
        return false;
    }

    bool I_database::update_ids()
    {
      try
      {
          factory.stm = factory.con->createStatement();
          factory.stm->executeUpdate(SQL_DROP_ID);
          factory.stm->executeUpdate(SQL_AUTOINCREMENT_1);
          factory.stm->executeUpdate(SQL_ADD_ID_COLUMN);
          return true;
      }
      catch(sql::SQLException & ex) { std::cout << "Error: update_ids" << std::endl; }

      return false;
    }

    IO_database::IO_database()
    {
    }

    bool IO_database::drop_database()
    {
      try
      {
          factory.stm = factory.con->createStatement();
          factory.stm->executeUpdate(SQL_DP_DATABASE);
          return true;
      }
      catch(sql::SQLException & ex) { std::cout << "Error: drop_database" << std::endl; }
      return false;
    }

    bool IO_database::drop_table()
    {
      try
      {
          factory.stm = factory.con->createStatement();
          factory.stm->executeUpdate(SQL_DP_TABLE);
          return true;
      }
      catch(sql::SQLException & ex) { std::cout << "Error: drop_table" << std::endl; }
      return false;
    }

}
