/*
 * database.h
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */

#ifndef DATABASE_H_
#define DATABASE_H_
#include "sqlite3.h"

class database{
	sqlite3 *db;
public:
	int openDataBase();
	int closeDataBase();

};





#endif /* DATABASE_H_ */
