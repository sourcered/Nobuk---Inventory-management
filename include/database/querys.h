#ifndef QUERYS_H
#define QUERYS_H

#include "../preprocessor.h"

#if 1

#ifndef PRE_LOG
#define PRE_LOG
const std::string DATABASE_NAME = "dbnobuk";
const std::string TABLE_NAME = "inventory";
const std::string USER = "root";
const std::string PASSWORD = "friday19";
const std::string DRIVER_URL = "tcp://127.0.0.1:3306";
#endif

const std::string SQL_CREATE_DATABASE = "CREATE DATABASE IF NOT EXISTS " + DATABASE_NAME;
const std::string SQL_CREATE_TABLE =    "CREATE TABLE IF NOT EXISTS " + TABLE_NAME + " (id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, code INT NOT NULL UNIQUE, name VARCHAR(60) NOT NULL DEFAULT \'No name\', quantity FLOAT NOT NULL DEFAULT 0, price FLOAT NOT NULL DEFAULT 0, total FLOAT NOT NULL DEFAULT 0, isdec TINYINT(1) NOT NULL DEFAULT 0)";
const std::string SQL_DROP_DATABASE =   "DROP DATABASE " + DATABASE_NAME;
const std::string SQL_DROP_TABLE =      "DROP TABLE " + TABLE_NAME;
const std::string SQL_GET_PRODUCTS =    "SELECT * FROM " + TABLE_NAME;
const std::string SQL_GET_PRODUCT =     "SELECT * FROM " + TABLE_NAME + " WHERE id=? LIMIT 1";
const std::string SQL_GET_QUANTITYS =   "SELECT quantity FROM " + TABLE_NAME;
const std::string SQL_GET_QUANTITY =    "SELECT quantity FROM " + TABLE_NAME + " WHERE id=? LIMIT 1";
const std::string SQL_GET_PRICE =       "SELECT price FROM " + TABLE_NAME + " WHERE id=? LIMIT 1";
const std::string SQL_GET_TOTAL =       "SELECT total FROM " + TABLE_NAME + " WHERE id=? LIMIT 1";
const std::string SQL_GET_TOTAL1 =      "SELECT (quantity*price) FROM " + TABLE_NAME + " WHERE id=? LIMIT 1";
const std::string SQL_GET_TOTALs =      "SELECT (quantity*price) FROM " + TABLE_NAME;
const std::string SQL_ADD_PRODUCT =     "INSERT INTO " + TABLE_NAME + "(code, name, quantity, price, isdec) VALUES(?, ?, ?, ?, ?)";
const std::string SQL_DELETE_PRODUCT =  "DELETE FROM " + TABLE_NAME + " WHERE id=?";
const std::string SQL_UPDATE_NAME =     "UPDATE " + TABLE_NAME + " SET name=? WHERE id=?";
const std::string SQL_UPDATE_CODE =     "UPDATE " + TABLE_NAME + " SET code=? WHERE id=?";
const std::string SQL_UPDATE_QUANTITY = "UPDATE " + TABLE_NAME + " SET quantity=? WHERE id=?";
const std::string SQL_UPDATE_PRICE =    "UPDATE " + TABLE_NAME + " SET price=? WHERE id=?";
const std::string SQL_UPDATE_TOTAL =    "UPDATE " + TABLE_NAME + " SET total=? WHERE id=?";
const std::string SQL_UPDATE_IDS =      "";
const std::string SQL_UPDATE_PRODUCT =  "UPDATE " + TABLE_NAME + " SET code=?, name=?, quantity=?, price=?, isdec=? WHERE id=?";
const std::string SQL_DROP_ID =         "ALTER TABLE " + TABLE_NAME + " DROP id";
const std::string SQL_AUTOINCREMENT_1 = "ALTER TABLE " + TABLE_NAME + " AUTO_INCREMENT = 1";
const std::string SQL_ADD_ID_COLUMN =   "ALTER TABLE " + TABLE_NAME + " ADD id INT NOT NULL PRIMARY KEY AUTO_INCREMENT FIRST";
const std::string SQL_DP_DATABASE =     "DROP DATABASE " + DATABASE_NAME;
const std::string SQL_DP_TABLE =        "DROP TABLE " + TABLE_NAME;

#else
constexp std::string SQL_CREATE_DATABASE = "";
#endif

#endif
