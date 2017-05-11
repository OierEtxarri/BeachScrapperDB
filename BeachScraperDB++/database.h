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
	//Lo que guardemos en la bd como atributo
public:
	int openDataBase();
	int closeDataBase();

};





#endif /* DATABASE_H_ */
