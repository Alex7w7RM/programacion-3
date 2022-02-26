#include "iostream"
#include "string"


using namespace std;

int main()
{
	cout<< "Ingresar dos numeros" << "\n" ; 
	float var1,var2; 
	
	
	cout<< "Ingresar el primer numero" << "\n";
	cin>> var1; 
	
	
	cout<< "Ingresar el segundo numero"<< "\n"; 
	cin>> var2; 
	
	
	cout<< "Que tipo de operacion desea hacer?" << "\n"; 
	cout<< " opcion 1: Suma" << "\n"; 
	cout<< " Opcion 2: Resta" << "\n";
		
	int opc1 ;
	cout<< "ingrese un numero para seleccionar la opcion que usted desee ejecutar" << "\n"; 
	cin>> opc1;
	switch(opc1){ 
		case 1: cout << var1 << " + " << var2 << " = " << var1 + var2; break;
		case 2: cout << var1 << " - " << var2 << " = " << var1 - var2; break; 
		
	}

}