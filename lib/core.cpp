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
        if(qtd == -1.0f) return false;
        return ioDatabase->update_quantity(id, (qtd + quantity));
    }

    bool Core::remove_quantity(int id, float quantity)
    {
        float qtd = ioDatabase->get_Quantity(id);
        if(qtd - quantity < 0 || qtd == -1.0f) return false;
        return ioDatabase->update_quantity(id, (qtd - quantity));
    }

    bool Core::update_product(Product * product)
    {
        return ioDatabase->update_product(product);
    }

    bool Core::delete_database(int key)
    {
        int filekey;
        std::string str_filekey;
        std::fstream infile;
        infile.open("../other/delete-key.txt");
        std::getline(infile, str_filekey);
        infile.close();
        std::string::size_type sz = str_filekey.size();
        filekey = std::stoi(str_filekey, &sz);
        return (filekey == Key ? ioDatabase->drop_database() : false);
    }
}
