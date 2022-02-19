#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : string nit;
			  double cui;
	
	//constructor 
	public :
		Propietario (){
		}
		Propietario(string nom, string ape, string dir, string fecha_nacimiento, int tel, string n, double c) : Persona(nom,ape,dir,fecha_nacimiento,tel){
			nit = n;
			cui = c;
		}
	//metodos
	string getNit(){return nit;}
	double getCui(){return cui;}
	

};
