/*
 * Playa.cpp
 *
 *  Created on: 14 may. 2017
 *      Author: leyre
 */

#include "Playa.h"

Playa::Playa(){
	codigo = new char[1];
	codigo[0] = '\0';
	nombre = new char[1];
	nombre[0] = '\0';
	localizacion = new char[1];
	localizacion[0] = '\0';
	provincia = new char[1];
	provincia[0] = '\0';
	pais = new char[1];
	pais[0] = '\0';
	coordenadas = new char[1];
	coordenadas[0] = '\0';
}
Playa::Playa(char *c, char *n, char *l, char *pro, char *pa, char *coor) {
	// TODO Auto-generated constructor stub
	this->codigo = new char[strlen(c)+1];
	strcpy(this->codigo,c);
	this->nombre=new char[strlen(n)+1];
	strcpy(this->nombre, nombre);
	this->localizacion=new char[strlen(l)+1];
	strcpy(this->localizacion, localizacion);
	this->provincia=new char[strlen(pro)+1];
	strcpy(this->provincia, provincia);
	this->pais=new char[strlen(pa)+1];
	strcpy(this->pais, pais);
	this->coordenadas=new char[strlen(coor)+1];
	strcpy(this->coordenadas, coordenadas);

}

Playa::Playa(const Playa &p){
	this->codigo = new char[strlen(p.codigo)+1];
	strcpy(this->codigo,p.codigo);
	this->nombre=new char[strlen(p.nombre)+1];
	strcpy(this->nombre, p.nombre);
	this->localizacion=new char[strlen(p.localizacion)+1];
	strcpy(this->localizacion, p.localizacion);
	this->provincia=new char[strlen(p.provincia)+1];
	strcpy(this->provincia, p.provincia);
	this->pais=new char[strlen(p.pais)+1];
	strcpy(this->pais, p.pais);
	this->coordenadas=new char[strlen(p.coordenadas)+1];
	strcpy(this->coordenadas, p.coordenadas);
}

char * Playa::getCodigo(){
	return codigo;
}
char * Playa::getNombre(){
	return nombre;
}
char * Playa::getLocalizacion(){
	return localizacion;
}
char * Playa::getProvincia(){
	return provincia;
}
char * Playa::getPais(){
	return pais;
}
char *Playa::getCoordenadas(){
	return coordenadas;
}
void Playa::setCodigo(char *c){
	codigo = new char[strlen(c)+1];
	strcpy(codigo,c);
}
void Playa::setNombre(char *n){
	nombre= new char[strlen(n)+1];
	strcpy(nombre, n);
}
void Playa::setLocalizacion(char *l){
	localizacion= new char[strlen(l)+1];
	strcpy(localizacion, l);
}
void Playa::setProvincia(char *pro){
	provincia = new char[strlen(pro)+1];
	strcpy(provincia,pro);
}
void Playa::setPais(char *pa){
	pais = new char[strlen(pa)+1];
	strcpy(pais, pa);
}
void Playa::setCoordenadas(char *coor){
	coordenadas = new char[strlen(coor)+1];
	strcpy(coordenadas,coor);
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

