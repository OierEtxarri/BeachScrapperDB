/*
 * database.cpp
 *
 *  Created on: 11 may. 2017
 *      Author: iMac
 */
#include "database.h"


using namespace std;

database::database (char *nombre){

	this->nombre=new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);


}

database::~database(){
	delete [] db;
}

int database::open()
{
	int result = sqlite3_open(this->nombre, &db);
		if(result != SQLITE_OK)
		{
			cout<< "Error al abrir la Base de Datos" << endl;

		}
		else{
			cout<< "Base de Datos abierta"<< endl;
		}
		return result;
}
int database::close()// No se si va bien
{
	int result = sqlite3_close(db);
		if (result != SQLITE_OK) {
			cout <<"Error opening database" <<endl;
			//cout << sqlite3_errmsg(db) <<endl;
		}else{
			cout <<"Base de datos cerrada"<<endl;

		}
		return result;


		return 0;
	}



