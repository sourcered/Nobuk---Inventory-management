#include "../include/core.h"

namespace nobuk
{
    bool Core::add_product(Product * product)
    {
        return ioDatabase->add_product(product);
    }

    bool Core::delete_product(int id)
    {
        return ioDatabase->delete_product(id);
    }

    bool Core::add_quantity(int id, float quantity)
    {
        float qtd = ioDatabase->get_Quantity(id);
        return ioDatabase->update_quantity(id, (qtd + quantity));
    }

    bool Core::remove_quantity(int id, float quantity)
    {
        float qtd = ioDatabase->get_Quantity(id);
        if(qtd - quantity < 0) return false;
        return ioDatabase->update_quantity(id, (qtd - quantity));
    }

    bool Core::update_product(Product * product)
    {
        return ioDatabase->update_product(product);
    }

    bool Core::delete_database(int key)
    {
        return (key == Key ? ioDatabase->drop_database() : false);
    }
}
