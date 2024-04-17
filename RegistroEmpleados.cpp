#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Empleados{
private:
    string nombre;//atributos (caracteristicas)
    string apellido;
    int edad;
	string salario;
public:
    Persona(string nomb, string ape,string sal, int edad) {
        nombre = nomb;
		apellido= ape;
        this ->edad = edad;
     	this ->salario = sal;
    }
    void nombreP(){ //metodos (acciones)
    	cout << "Ingresa tu nombre: ";
    	cin >> nombre;
	}
	void apellidoP(){ //metodos
		cout << "Ingresa tu apellido: ";
		cin >> apellido;
	}
	void edadP(){ //metodos
		cout << "Ingresa tu edad: ";
		cin >> edad;
	}
	void salarioP(){ //metodos
		cout << "Ingresa tu salario: ";
		cin >> salario;
	}
	
    void mostrarInfo() { //metodos
    	cout <<"Nombre: "<< nombre <<endl;
    	cout <<"Apellido: "<< apellido <<endl;
    	cout <<"Edad: "<< edad <<endl;
    	cout <<"Salario: "<< salario <<endl;
        }
    
};
int main() {
	string nombre;
    string apellido;
    string salario;
   	int edad;
   	
   	
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu apellido: ";
    cin >> apellido;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu salario: ";
    cin >> salario;

    Empleados datos(nombre, apellido, edad, salario);
    cout << "\nInformacion de la persona: " << endl;
    datos.mostrarInfo();
    return 0;
}









