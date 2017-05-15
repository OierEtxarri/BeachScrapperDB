/*
 * Playa.cpp
 *
 *  Created on: 14 may. 2017
 *      Author: leyre
 */

#include "Playa.h"

Playa::Playa(char *c, char *n, char *l, char *pro, char *pa, char *coor) {
	// TODO Auto-generated constructor stub
	this->nombre=new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	codigo++;

}

Playa::Playa(const Playa &p){

}



Playa::~Playa() {
	// TODO Auto-generated destructor stub
	delete [] codigo;
	delete [] nombre;
	delete [] localizacion;
	delete [] provincia;
	delete [] pais;
	delete [] coordenadas;
}

