/*
 * main.cpp
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */

#include "sqlite3.h"
#include "database.h"
#include <string.h>
#include <iostream>
using namespace std;

int main(){

	database * DB = new database("DB.db"); //así he llamado a la base de datos(DB.db)
	DB->open();
	DB->volcarPlayasABD();
	cout<<"Todas las playas..."<<endl;
	DB->visualizarPlayas();
	cout<<"Playas cuyo nombre empieza por S..."<<endl;
	DB->visualizarPlayasQueEmpiezanPorS();
	cout << "Funciona" << endl;
	DB->close();
}

