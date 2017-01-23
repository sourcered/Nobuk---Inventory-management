#ifndef DATABASE_H
#define DATABASE_H

#include "querys.h"

namespace nobuk
{
    struct Product
    {
        int code;
        float quantity;
        bool isDecimal;
        std::string name;
        float total;
    };

    class O_database
    {
    public:
        std::list<Product> get_Products();
        Product get_Product();
        std::list<float> get_Quantitys();           //Returns quantity product
        float get_Quantity(int);                    //Returns quantity product
    };

    class I_database
    {
    public:
        bool add_product(Product *);
        bool delete_product(int);
        bool update_product(Product *);
        bool update_quantity(int, float);           //Add and Remove quantity
    };

    class IO_database : public I_database, public O_database
    {};
}

#endif