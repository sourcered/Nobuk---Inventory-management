#ifndef QUERYS_H
#define QUERYS_H

#include "../preprocessor.h"

#if 1

#ifndef PRE_LOG
#define PRE_LOG
const std::string DATABASE_NAME = "dbnobuk";
const std::string TABLE_NAME = "inventory";
const std::string PASSWORD = "friday19";
#endif

const std::string SQL_CREATE_DATABASE = "CREATE DATABASE IF NOT EXISTS " + DATABASE_NAME;
const std::string SQL_CREATE_TABLE =    "CREATE TABLE IF NOT EXISTS " + TABLE_NAME + "(id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, name VARCHAR(60) NOT NULL DEFAULT \'No name\', code INT NOT NULL UNIQUE, quantity DEC(7,3) NOT NULL DEFAULT 0, price DEC(6,2) NOT NULL DEFAULT 0, total DEC(8,2) NOT NULL DEFAULT 0)";
const std::string SQL_DROP_DATABASE =   "DROP DATABASE " + DATABASE_NAME;
const std::string SQL_DROP_TABLE =      "DROP TABLE " + TABLE_NAME;
const std::string SQL_GET_PRODUCTS =    "SELECT * FROM " + TABLE_NAME;
const std::string SQL_GET_PRODUCT =     "SELECT * FROM " + TABLE_NAME + " WHERE id=?";
const std::string SQL_GET_QUANTITYS =   "SELECT quantity FROM " + TABLE_NAME;
const std::string SQL_GET_QUANTITY =    "SELECT quantity FROM " + TABLE_NAME + " WHERE id=?";
const std::string SQL_ADD_PRODUCT =     "INSERT INTO " + TABLE_NAME + "(name, code, quantity, price) VALUES(?, ?, ?, ?)";
const std::string SQL_DELETE_PRODUCT =  "DELETE FROM " + TABLE_NAME + " WHERE id=?";
const std::string SQL_UPDATE_NAME =     "UPDATE " + TABLE_NAME + " SET name=? WHERE id=?";
const std::string SQL_UPDATE_CODE =     "UPDATE " + TABLE_NAME + " SET code=? WHERE id=?";
const std::string SQL_UPDATE_QUANTITY = "UPDATE " + TABLE_NAME + " SET quantity=? WHERE id=?";
const std::string SQL_UPDATE_PRICE =    "UPDATE " + TABLE_NAME + " SET price=? WHERE id=?";
const std::string SQL_UPDATE_IDS =      "";
const std::string SQL_UPDATE_PRODUCT =  "UPDATE " + TABLE_NAME + " SET name=?, code=?, quantity=?, price=? WHERE id=?";

#else
constexp std::string SQL_CREATE_DATABASE = "";
#endif

#endif
