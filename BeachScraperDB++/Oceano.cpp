/*
 * Oceano.cpp
 *
 *  Created on: 14 may. 2017
 *      Author: leyre
 */

#include "Oceano.h"


Oceano::Oceano() {
	// TODO Auto-generated constructor stub
	codigo= new char[1];
	codigo[0]= '\0';
	tiempoActual= new char[1];
	tiempoActual[0]= '\0';
	temperatura= new char[1];
	temperatura[0]= '\0';
	velocidadViento= new char[1];
	velocidadViento[0]='\0';
	direccionViento= new char[1];
	direccionViento[0]= '\0';
	tamanioOlas= new char[1];
	tamanioOlas[0]= '\0';
	periodoOlas= new char[1];
	periodoOlas[0]= '\0';



}

Oceano::Oceano(const Oceano &o){
	this->codigo= new char[strlen(o.codigo)+1];
	strcpy(this->codigo, o.codigo);
	this->tiempoActual= new char[strlen(o.tiempoActual)+1];
	strcpy(this->tiempoActual, o.tiempoActual);
	this->temperatura= new char[strlen(o.temperatura)+1];
	strcpy(this->temperatura, o.temperatura);
	this->velocidadViento= new char[strlen(o.velocidadViento)+1];
	strcpy(this->velocidadViento, o.velocidadViento);
	this->direccionViento= new char[strlen(o.direccionViento)+1];
	strcpy(this->direccionViento, o.direccionViento);
	this->tamanioOlas= new char[strlen(o.tamanioOlas)+1];
	strcpy(this->tamanioOlas, o.tamanioOlas);
	this->periodoOlas= new char[strlen(o.periodoOlas)+1];
	strcpy(this->periodoOlas, o.periodoOlas);
}


Oceano::Oceano(char *c, char *ta, char *temp, char *vv, char *dv, char *to, char *po){
	this->codigo= new char[strlen(c)+1];
	strcpy(this->codigo, c);
	this->tiempoActual= new char[strlen(ta)+1];
	strcpy(this->tiempoActual, ta);
	this->temperatura= new char[strlen(temp)+1];
	strcpy(this->temperatura, temp);
	this->velocidadViento= new char[strlen(vv)+1];
	strcpy(this->velocidadViento, vv);
	this->direccionViento= new char[strlen(dv)+1];
	strcpy(this->direccionViento, dv);
	this->tamanioOlas= new char[strlen(to)+1];
	strcpy(this->tamanioOlas, to);
	this->periodoOlas= new char[strlen(po)+1];
	strcpy(this->periodoOlas, po);
}


char * Oceano::getCodigo(){
	return codigo;
}
char * Oceano::getTiempoActual(){
	return tiempoActual;
}
char * Oceano::getTemperatura(){
	return temperatura;
}
char * Oceano::getVelocidadViento(){
	return velocidadViento;
}
char * Oceano::getDieccionViento(){
	return direccionViento;
}
char * Oceano::getTamanioOlas(){
	return tamanioOlas;
}
char * Oceano::getPeriodoOlas(){
	return periodoOlas;
}
void Oceano::setCodigo(char *c){
	codigo= new char[strlen(c)+1];
	strcpy(codigo,c);
}
void Oceano::setTiempoActual(char *ta){
	tiempoActual = new char[strlen(ta)+1];
	strcpy(tiempoActual,ta);
}
void Oceano::setTemperatura(char *temp){
	temperatura= new char[strlen(temp)+1];
	strcpy(temperatura, temp);
}
void Oceano::setVelocidadViento(char *vv){
	velocidadViento= new char[strlen(vv)+1];
	strcpy(velocidadViento, vv);
}
void Oceano::setDireccionViento(char *dv){
	direccionViento= new char[strlen(dv)+1];
	strcpy(direccionViento, dv);
}
void Oceano::setTamanioOlas(char *to){
	tamanioOlas = new char[strlen(to)+1];
	strcpy(tamanioOlas, to);
}
void Oceano::setPeriodoOlas(char *po){
	periodoOlas= new char[strlen(po)+1];
	strcpy(periodoOlas, po);
}

Oceano::~Oceano() {
	// TODO Auto-generated destructor stub
	delete [] codigo;
	delete [] tiempoActual;
	delete [] temperatura;
	delete [] velocidadViento;
	delete [] direccionViento;
	delete [] tamanioOlas;
	delete [] periodoOlas;
}

