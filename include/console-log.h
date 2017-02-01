#ifndef CONSOLE_LOG_H
#define CONSOLE_LOG_H

#include "core.h"

namespace nobuk
{
    class Log
    {
    public:
        void printList(const std::list<float> &);
        void printProduct(const std::list<Product> &);
    };
}

#endif
