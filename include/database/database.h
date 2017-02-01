#ifndef DATABASE_H
#define DATABASE_H

#include "querys.h"

namespace nobuk
{
    struct Product
    {
        int id;
        int code;
        std::string name;
        float quantity;
        float price;
        float total;
        bool isDecimal;
    };

    class Factory
    {
    public:
        std::shared_ptr<sql::Connection> con;
        sql::PreparedStatement * pstm;
        sql::Statement * stm;
        sql::ResultSet * rs;
        Factory();
        ~Factory();
        void init();
    };

    class O_database
    {
    private:
        Factory factory;
    public:
        std::list<Product> get_Products();
        Product get_Product(int);
        std::list<float> get_Quantitys();           //Returns quantity product
        float get_Quantity(int);                    //Returns quantity product
        float get_Total(int);
    };

    class I_database
    {
    private:
        //Duplicated, Yeah i know :(
        Factory factory;
    public:
        bool add_product(Product *);
        bool delete_product(int);
        bool update_product(Product *);
        bool update_quantity(int, float);           //Add and Remove quantity
        bool update_ids();
    };

    class IO_database : public I_database, public O_database
    {
    public:
        IO_database();
    // protected:
        bool drop_database();
        bool drop_table();
    };
}

#endif
