#include <iostream>
#include "Seccion.h"
#include <string>
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
		}
		
		
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
		}

		void Seccion::setCupos(int Cupos) {
			this->Cupos = Cupos;
		};

		int Seccion::getCupos() {
			return Cupos;
		}

		void Seccion::setAlumnos(string Alumnos) {
			this->Alumnos->append(Alumnos);
		};

		string  Seccion::getAlumnos() {
			for (int i = 1; i < Alumnos->size(); i++) {
				return Alumnos[i];
			};
		};