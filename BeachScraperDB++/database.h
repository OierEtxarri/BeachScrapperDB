/*
 * database.h
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */

#ifndef DATABASE_H_
#define DATABASE_H_
#include "sqlite3.h"
#include "Playa.h"
#include <fstream>
#include <iostream>
#include <string.h>


namespace std{

class database{
	sqlite3 *db;
	char *nombre;
	sqlite3_stmt *stmt;
	//Lo que guardemos en la bd como atributo
public:
	database(char *nombre);
	virtual~database();

	int open();
	int close();

	int createTable();
	int deleteTable();

	void volcarPlayasABD(); //volcar de fichero a bd
	void visualizarPlayas();
	//void visualizarPlayasQueEmpiezanPorS();
	void visualizarPlayasQueEmpiezanPor(char letra);

};


}


#endif /* DATABASE_H_ */
