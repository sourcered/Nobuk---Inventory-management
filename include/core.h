#ifndef CORE_H
#define CORE_H

#include "database/database.h"

namespace nobuk
{
    class Core
    {
    private:
        IO_database * ioDatabase;
    public:
        Core() : ioDatabase(new IO_database()) {}
        bool add_product(Product *);
        bool delete_product(int);
        bool add_quantity(int, float);
        bool remove_quantity(int, float);
        bool update_product(Product *);
    };
}

#endif
