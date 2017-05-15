/*
 * menu.cpp
 *
 *  Created on: 15 may. 2017
 *      Author: leyre
 */

#include "menu.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int menu::mostrarMenu(){
database * DB = new database("DB.db");

    bool boolean=false;
    char tecla;
    char tecla2;
    cout << ":::::::::::::::::::BEACHSCRAPPER DATABASE ACCESS::::::::::::::::::::" <<endl<<endl;
    do
    {
        system("cls");
        cin.clear();
        cout << "¿Qué desea visualizar? :" << endl;
        cout << "------------------------" << endl << endl;
        cout << "1 - Todas las playas" << endl;
        cout << "2 - Buscar playas por inicial " << endl;
        cout << "Escoge una opcion: ";
        cin >> tecla;


switch(tecla)
{
	case '1':
	system("cls");
	DB->visualizarPlayas();//Visualizamos todas las playas de la BD
	break;

	case '2':
	system("cls");
	//Pedimos al usuario que introduzca la letra por la que quiere que las playas empiecen
	cout << "Introduzca la letra por la que desea que las playas empiecen: "<<endl;
	cin.clear();
	cin >> tecla2;
	//cin.get(tecla2);//leemos letra de teclado
	DB->visualizarPlayasQueEmpiezanPor(char letra);//pasamos el char como parámetro
	break;

	default:
	system("cls");
	cout << "Opcion no valida." <<endl;
	break;
}
    }while(boolean!=true);

    return 0;
}


