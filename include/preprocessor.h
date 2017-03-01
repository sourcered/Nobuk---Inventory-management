#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <iostream>
#include <memory>
#include <list>
#include <stdlib.h>

//FILE SYSTEM
#if 1
#include <fstream>
#endif

#ifndef MYSQL_INCLUDES
#define MYSQL_INCLUDES
#include "mysql_connection.h"                   //Improve build time
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#endif

#define for_iterator(it, STL) for(auto it = STL.begin(); it != STL.end(); it++)
#define f(i, count) for(size_t i = 0; i < count; i++)

#ifndef CONSTANTS
#define CONSTANTS
const int Key = 1977;
#endif

#endif
