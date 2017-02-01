#include "../include/console-log.h"

namespace nobuk
{
    void Log::printList(const std::list<float> & l)
    {
        for_iterator(it, l) std::cout << *it << std::endl;
    }

    void Log::printProducts(const std::list<Product> & p)
    {
        for_iterator(it, p)
        {
          std::cout << "ID: " << (*it).id << std::endl;
          std::cout << "Code: " << (*it).code << std::endl;
          std::cout << "Name: " << (*it).name << std::endl;
          std::cout << "Quantity: " << (*it).quantity << std::endl;
          std::cout << "Price: " << (*it).price << std::endl << std::endl;
        }
    }
}
