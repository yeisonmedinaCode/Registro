#include <iostream>
#include <String>
#include "Seccion.h"
using namespace std;

void Seccion::setNombre(string Nombre) {
	this->Nombre = Nombre;
};
string Seccion::getNombre() {
	return Nombre;
};

void  Seccion::setAula(string Aula) {
	this->Aula = Aula;
};
		
string  Seccion::getAula() {
	return Aula;
};

void  Seccion::setHora(string Hora) {
	this->Hora = Hora;
};

string  Seccion::getHora() {
	return Hora;
};
		
		
void  Seccion::setSeccion(string Seccion) {
	this->Seccion = Seccion;
};

string  Seccion::getSeccion() {
	return Seccion;
};

void Seccion::setUV(string UV) {
	this->UV = UV;
};

string Seccion::getUV() {
	return UV;
};

void Seccion::setCupos(int Cupos) {
	this->Cupos = Cupos;
};

int Seccion::getCupos() {
	return Cupos;
};