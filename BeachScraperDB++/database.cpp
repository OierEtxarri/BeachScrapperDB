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

void database::volcarPlayasABD(){
	char query[100]="SELECT COUNT(*) FROM Playa"; //sentencia para no insertar datos repetidos en la bd
	sqlite3_prepare_v2(db,query,strlen(query),&stmt,NULL); //preparo la sentencia
	sqlite3_step(stmt); //ejecuto la sentencia
	int num = sqlite3_column_int(stmt,0);
	sqlite3_finalize(stmt); //finalizo la sentencia
	if(num==0){ //si todavia no hay datos en la bd
		ifstream ifs("playa.txt");
		Playa p;
		while(!ifs.eof()){ //mientras siga habiendo datos en el fichero
			ifs>>p;
			char query[100];
			sprintf(query,"INSERT INTO playa(codigo,nombre) VALUES('%s','%s')",p.getCodigo(),p.getNombre()); //sentencia para pasar los datos de los ficheros a la bd
			sqlite3_prepare_v2(db,query,strlen(query),&stmt,NULL); //preparo la sentencia
			sqlite3_step(stmt); //ejecuto la sentencia
			sqlite3_finalize(stmt); //finalizo la sentencia
		}
		ifs.close();
	}
}

/**
 * he metido dos consultas de ejemplo(visualizarPlayas y playasQueEmpiezanPorS).
 * Tenemos que hacer un menú dandole al usuario opcion de elegir que consulta quiere realizar.
 * Lo que tenemos que hacer es ir haciendo mas consultas de estas e ir metiendolas en el menú.
 * */
void database::visualizarPlayas(){
	char query[100] ="SELECT * FROM playa";
	sqlite3_prepare_v2(db,query,strlen(query),&stmt,NULL);
	int resul = sqlite3_step(stmt);
	while(resul==SQLITE_ROW){
		char * codigo = (char*) sqlite3_column_text(stmt,0);
		char * nombre = (char*) sqlite3_column_text(stmt,1);
		cout<<codigo<<" "<<nombre<<endl;
		resul = sqlite3_step(stmt);
	}
	sqlite3_finalize(stmt);
}


/**
 * void database::visualizarPlayasQueEmpiezanPorS(){
	char query[100] ="SELECT * FROM playa";
	sqlite3_prepare_v2(db,query,strlen(query),&stmt,NULL);
	int resul = sqlite3_step(stmt);
	while(resul==SQLITE_ROW){
		char * codigo = (char*) sqlite3_column_text(stmt,0);
		char * nombre = (char*) sqlite3_column_text(stmt,1);
		if (nombre[0]=='s' || nombre[0]=='S')
				cout<<codigo<<" "<<nombre<<endl;
		resul = sqlite3_step(stmt);
	}
	sqlite3_finalize(stmt);
}
 * */

void database::visualizarPlayasQueEmpiezanPor(char letra){
char query[100] ="SELECT * FROM playa";
sqlite3_prepare_v2(db,query,strlen(query),&stmt,NULL);
int resul = sqlite3_step(stmt);
while(resul==SQLITE_ROW){
char * codigo = (char*) sqlite3_column_text(stmt,0);
char * nombre = (char*) sqlite3_column_text(stmt,1);
if (nombre[0]==toupper(letra) || nombre[0]==tolower(letra) )
cout<<codigo<<" "<<nombre<<endl;
resul = sqlite3_step(stmt);
}
sqlite3_finalize(stmt);
}




