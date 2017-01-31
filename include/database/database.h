#ifndef DATABASE_H
#define DATABASE_H

#include "querys.h"

#ifndef MYSQL_INCLUDES
#define MYSQL_INCLUDES
#include "mysql_connection.h"                   //Improve build time
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#endif

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

    class Factory
    {
    public:
        std::shared_ptr<sql::Connection> con;
        std::shared_ptr<sql::PreparedStatement> pstm;
        std::shared_ptr<sql::Statement> stm;
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
    };

    class I_database
    {
    private:
        Factory factory;
    public:
        bool add_product(Product *);
        bool delete_product(int);
        bool update_product(Product *);
        bool update_quantity(int, float);           //Add and Remove quantity

    };
    class IO_database : public I_database, public O_database
    {
    public:
        IO_database();
    };
}

#endif
