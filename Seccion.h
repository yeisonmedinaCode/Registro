
#ifndef SECCION_H
#define SECCION_H
#include <string>

class Seccion {
private:
	std::string Nombre;
	std::string Aula;
	std::string Hora;
	std::string Seccion;
	std::string UV;
	int Cupos;
public:
	void setNombre(std::string Nombre);
	std::string getNombre();

	//
	void setAula(std::string Aula);
	std::string getAula();

	//dsfd
	void setHora(std::string Hora);
	std::string getHora();

	//
	void setSeccion(std::string Seccion);
	std::string getSeccion();

	//
	void setUV(std::string UV);
	std::string getUV();

	//
	void setCupos(int Cupos);
	int getCupos();

}; 

#endif //SECCION_H