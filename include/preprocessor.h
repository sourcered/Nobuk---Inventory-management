#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <iostream>
#include <memory>
#include <list>

//FILE SYSTEM
#if 0
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


#endif
