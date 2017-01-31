#include "../../include/database/database.h"

namespace nobuk
{
    std::list<Product> O_database::get_Products()
    {
        std::list<Product> list;
        return list;
    }

    Product O_database::get_Product()
    {
        Product product;
        return product;
    }

    std::list<float> O_database::get_Quantitys()
    {
        std::list<float> list;
        return list;
    }    
        
    float O_database::get_Quantity(int code)
    {
        return 0.0f;
    }            

    bool I_database::add_product(Product * product)
    {
        return false;
    }

    bool I_database::delete_product(int code)
    {
        return false;
    }

    bool I_database::update_product(Product * product)
    {
        return false;
    }

    bool I_database::update_quantity(int code, float quantity)
    {
        return false;
    }       
}