#include "../include/console-log.h"

namespace nobuk
{
    void Log::printList(const std::list<float> & l)
    {
        for_iterator(it, l) std::cout << *it << std::endl;
    }

    void Log::printProduct(const std::list<Product> & p)
    {
        for_iterator(it, p)
        {
          // std::cout << (*it).name << std::endl;
        }
    }
}
