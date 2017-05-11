/*
 * database.cpp
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */
#include <iostream>
#include "database.h"
#include "sqlite3.h"

using namespace std;

int database::openDataBase()
{
	int result = sqlite3_open("beachScraper.sqlite", &db);
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
			cout <<"Error opening database" <<endl;
			cout << sqlite3_errmsg(db) <<endl;
			return result;
		}

		cout <<"Base de datos cerrada"<<endl;

		return 0;
	}



