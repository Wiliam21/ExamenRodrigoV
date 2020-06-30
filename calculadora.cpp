//calculadora
#include <iostream>
#include <math.h>
using namespace std;
char nombre[40];
int opcion;
int numero, numero2;
float resultado;
void menu();
void suma();
void resta();
void multiplicacion();
void division();
void potencia();

void menu()
{
	cout << "MENU\n\n";
	cout << "1)suma\n";
	cout << "2)resta\n";
	cout << "3)multiplicacion\n";
	cout << "4)division\n";
	cout << "5)potencia\n";
	cout << "6)Salir\n";
	cout << "\n\nElige una opcion";
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		suma();
		break;
	case 2:
		resta();
		break;
	case 3:
		multiplicacion();
		break;
	case 4:
		division();
		break;
	case 5:
		potencia();
		break;
	case 6:
		cout << "Usted salio del programa";
		break;
	}
}
void suma()
{
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero + numero2;
	cout << "\nEl resultado de la suma es: " << resultado << endl;
}
void resta()
{
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero - numero2;
	cout << "\nEl resultado de la resta es: " << resultado << endl;
}
void multiplicacion()
{
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero * numero2;
	cout << "\nEl resultado de la multiplicacion es: " << resultado << endl;
}
void division()
{
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero / numero2;
	cout << "\nEl resultado de la division es: " << resultado << endl;
}
void potencia()
{
	cout << "\nIngrese la base: ";
	cin >> numero;
	cout << "\nIngrese el exponente : ";
	cin >> numero2;
	resultado = pow(numero, numero2);
	cout << "\nEl resultado de la potencia es: " << resultado << endl;
}

int main()
{
	cout << " Cual es tu nombre?\n ";
	cin >> nombre;
	menu();
}
