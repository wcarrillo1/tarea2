#include<iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,fechaNacimiento;
				int telefono;
 	//constructor
 	protected :
 		Persona(){
 			
		 }
		Persona(string nom, string ape, string dir, string fecha_nacimiento, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			fechaNacimiento = fecha_nacimiento;
			telefono = tel;
		 }
	//set (Modificar)
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fecha_nacimiento){fecha_nacimiento = fecha_nacimiento;}
	void setTelefono(int tel){telefono = tel;}
	//get (Mostrar)
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha(){return fechaNacimiento;}
	int getTelefono(){return telefono;}
 	
};
