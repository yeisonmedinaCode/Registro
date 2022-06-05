#ifndef SECCION_H_INCLUDED
#define SECCION_H_INCLUDED

class Seccion {
private:
	string Nombre;
	string Aula;
	string Hora;
	string Seccion;
	string UV;
	int Cupos;
	string Alumnos[];
public:
	void setNombre(string Nombre);
	string getNombre();
}; 

#endif //SECCION_H_INCLUDED