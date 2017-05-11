/*
 * database.cpp
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */
#include <iostream>
#include "database.h"

using namespace std;

int database::openDataBase()
{
	int result = sqlite3_open("beachScraper.db", &db);
		if(result != SQLITE_OK)
		{
			cout<< "Error al abrir la Base de Datos" << endl;
			return result;
		}
		cout<< "Base de Datos abierta"<< endl;
	}
int database::closeDataBase()// No se si va bien
{
	int result = sqlite3_close(db);
		if (result != SQLITE_OK) {
			cout <<"Error opening database"<<endl;
			cout << "%s"<< sqlite3_errmsg(db) <<endl;
			return result;
		}

		printf("Database closed\n") ;

		return 0;
	}



