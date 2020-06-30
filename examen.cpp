#include <iostream>
#include <math.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int MenuPrincipal();
bool Seguir();
void Temperatura();
void NumeroFeliz();
void NumeroPerfecto();
void Calculadora();
void MenuCalculadora();
void SumaCalculadora();
void RestaCalculadora();
void MultiplicacionCalculadora();
void DivisionCalculadora();
void PotenciaCalculadora();
void ArregloDeMatrices();
void MenuMatrices();
void IngresarMatrices();
void MostrarMatrices();
void SumarMatrices();
void RestarMatrices();
void RegistroDeTrabajadores();

int matriz[3][3];
int matriz2[3][3];
int filas=0, columnas=0, opcion;

int main()
{
	bool seguir;
	int opcion;
	do
	{
		system("cls");
		opcion = MenuPrincipal();
		system("cls");
		switch (opcion)
		{
		case 1:
			Temperatura();
			break;
		case 2:
			NumeroFeliz();
			break;
		case 3:
			NumeroPerfecto();
			break;
		case 4:
			Calculadora();
			break;
		case 5:
			ArregloDeMatrices();
			break;
		case 6:
			RegistroDeTrabajadores();
			break;
		case 7:
			return 0;
			break;
		default:
			cout << "Opcion invalida";
			break;
		}
		
		seguir = Seguir();
	} while (seguir);
	return 0;
}

int MenuPrincipal()
{
	int op;
	cout << "MENU\n\n";
	cout << "1)Temperaturas\n";
	cout << "2)Numero feliz\n";
	cout << "3)Numero perfecto\n";
	cout << "4)Calculadora\n";
	cout << "5)Arreglo de matrices\n";
	cout << "6)Registro de trabajadores\n";
	cout << "7)Salir\n";
	cout << "\n\nElige una opcion: ";
	cin >> op;
	return op;
}

bool Seguir()
{
	int op = 0;
	system("cls");
	do
	{
		cout << "Desea regresar al menu principal?" << endl;
		cout << "1) Si" << endl;
		cout << "2) No" << endl;
		cin >> op;
	} while (op < 1 || op > 2);
	if (op == 1)
		return true;
	else
		return false;
}

void Temperatura()
{
	float num;
	int opt;
	cout << "1. Centigrados/Celsius a Farenheit\n2. Farenheit a Centigrados/Celsius\n3. Farenheit a Kelvin\n4. Kelvin a Farenheit\n5. Kelvin a Centigrados/Celsius\n6. Centigrados/Celsius a Kelvin\n0. Salir\n\nOpcion: ";
	cin >> opt;
	if (opt == 1)
	{
		cout << "Escribe los Grados Centigrados/Celsius: ";
		cin >> num;
		cout << "\n " << num << " Grados Centigrados/Celsius son " << (num + 32) * 1.8 << " Grados Farenheit." << endl;
		system("pause");
	}
	if (opt == 2)
	{
		cout << "Escribe los Grados Farenheit: ";
		cin >> num;
		cout << "\n " << num << " Grados Farenheit son " << (num - 32) / 1.8 << " Grados Centigrados/Celsius." << endl;
		system("pause");
	}
	if (opt == 3)
	{
		cout << "Escribe los Grados Farenheit: ";
		cin >> num;
		cout << "\n " << num << " Grados Farenheit son " << (num + 459.67) / 1.8 << " Grados Kelvin." << endl;
		system("pause");
	}
	if (opt == 4)
	{
		cout << "Escribe los Grados Kelvin: ";
		cin >> num;
		cout << "\n " << num << " Grados Kelvin son " << (num - 459.67) << " Grados Farenheit." << endl;
		system("pause");
	}
	if (opt == 5)
	{
		cout << "Escribe los Grados Kelvin: ";
		cin >> num;
		cout << "\n " << num << " Grados Kelvin son " << (num - 273.16) << " Grados Centigrados." << endl;
		system("pause");
	}
	if (opt == 6)
	{
		cout << "Escribe los Grados Centigrados/Celsius: ";
		cin >> num;
		cout << "\n " << num << " Grados Centigrados/Celsius son " << num + 273.16 << " Grados Kelvin." << endl;
		system("pause");
	}
	if (opt == 0)
	{
		cout << "Hasta la proxima." << endl;
		system("pause");
	}
}

void NumeroFeliz()
{
	char ape[50];
	cout << "Ingrese su apellido: " << endl;
	cin >> ape;
	while (10)
	{
		int n, sum = 0, term;
		cout << ape << " digite un numero: " << endl;
		cin >> n;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == n)
		{
			cout << ape << " el numero es feliz" << endl;
			cout << ape << " desea continuar con el programa (1=Si;0=No): ";
			cin >> term;
			if (term != 1)
			{
				break;
			}
		}
		else
		{
			cout << ape << " el numero no es feliz" << endl;
			cout << ape << " desea continuar con el programa (1=Si;0=No): ";
			cin >> term;
			if (term != 1)
			{
				break;
			}
		}
	}
	cout << "Hasta pronto";
}

void NumeroPerfecto()
{
	char ape[50];
	cout << "Ingrese su apellido: " << endl;
	cin >> ape;
	while (10)
	{
		int n, sum = 0, term;
		cout << ape << " digite un numero: " << endl;
		cin >> n;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == n)
		{
			cout << ape << " el numero es perfecto" << endl;
			cout << ape << " desea continuar con el programa (1=Si;0=No): ";
			cin >> term;
			if (term != 1)
			{
				break;
			}
		}
		else
		{
			cout << ape << " el numero perfecto" << endl;
			cout << ape << " desea continuar con el programa (1=Si;0=No): ";
			cin >> term;
			if (term != 1)
			{
				break;
			}
		}
	}
	cout << "Hasta pronto";
}

void Calculadora()
{
	MenuCalculadora();
}

void MenuCalculadora()
{
	int opcion;
	cout << "MENU\n\n";
	cout << "1)suma\n";
	cout << "2)resta\n";
	cout << "3)multiplicacion\n";
	cout << "4)division\n";
	cout << "5)potencia\n";
	cout << "6)Salir\n";
	cout << "\n\nElige una opcion: ";
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		SumaCalculadora();
		break;
	case 2:
		RestaCalculadora();
		break;
	case 3:
		MultiplicacionCalculadora();
		break;
	case 4:
		DivisionCalculadora();
		break;
	case 5:
		PotenciaCalculadora();
		break;
	case 6:
		cout << "Usted salio del programa";
		break;
	}
	system("pause");
}

void SumaCalculadora()
{
	float numero, numero2, resultado;
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero + numero2;
	cout << "\nEl resultado de la suma es: " << resultado << endl;
}

void RestaCalculadora()
{
	float numero, numero2, resultado;
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero - numero2;
	cout << "\nEl resultado de la resta es: " << resultado << endl;
}

void MultiplicacionCalculadora()
{
	float numero, numero2, resultado;
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero * numero2;
	cout << "\nEl resultado de la multiplicacion es: " << resultado << endl;
}

void DivisionCalculadora()
{
	float numero, numero2, resultado;
	cout << "\nIngrese el primer numero: ";
	cin >> numero;
	cout << "\nIngrese el segundo numero: ";
	cin >> numero2;
	resultado = numero / numero2;
	cout << "\nEl resultado de la division es: " << resultado << endl;
}

void PotenciaCalculadora()
{
	float numero, numero2, resultado;
	cout << "\nIngrese la base: ";
	cin >> numero;
	cout << "\nIngrese el exponente : ";
	cin >> numero2;
	resultado = pow(numero, numero2);
	cout << "\nEl resultado de la potencia es: " << resultado << endl;
}

void ArregloDeMatrices()
{
	MenuMatrices();
}

void MenuMatrices()
{
	system("cls");
	int opcion;
	cout << "MENU\n\n";
	cout << "1) Insertar\n";
	cout << "2) Mostrar\n";
	cout << "3) Sumar\n";
	cout << "4) Restar\n";
	cout << "5) Salir\n";
	cout << "Ingresa tu opcion: ";
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		IngresarMatrices();
		break;
	case 2:
		MostrarMatrices();
		break;
	case 3:
		SumarMatrices();
		break;
	case 4:
		RestarMatrices();
		break;
	case 5:
		cout << " Usted ha salido del programa";
		break;
	}
}

void IngresarMatrices()
{
	cout << "\n Ingrese los numeros de la primera matriz: " << endl;

	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << "\n Ingrese fila " << filas << " y columna " << columnas << " : ";
			cin >> matriz[filas][columnas];
		}
	}
	cout << "\n Ingrese los numeros de la segunda matriz: " << endl;
	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << "\n Ingrese fila " << filas << " y columna " << columnas << " : ";
			cin >> matriz2[filas][columnas];
		}
	}
	system("pause");
	MenuMatrices();
}

void MostrarMatrices()
{
	cout << " Matriz 1: " << endl;
	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << matriz[filas][columnas] << " ";
		}
		cout << "\n";
	}

	cout << " Matriz 2: " << endl;
	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << matriz2[filas][columnas] << " ";
		}
		cout << "\n";
	}
	system("pause");
	MenuMatrices();
}

void SumarMatrices()
{
	cout << " Suma de matrices\n"
		 << endl;
	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << matriz[filas][columnas] + matriz2[filas][columnas] << " ";
		}
		cout << "\n";
	}
	system("pause");
	MenuMatrices();
}

void RestarMatrices()
{
	cout << " Resta de matrices\n"
		 << endl;
	for (int filas = 0; filas < 3; filas++)
	{
		for (int columnas = 0; columnas < 3; columnas++)
		{
			cout << matriz[filas][columnas] - matriz2[filas][columnas] << " ";
		}
		cout << "\n";
	}
	system("pause");
	MenuMatrices();
}

void RegistroDeTrabajadores()
{
	struct trabajadores
	{
		char nombre[40];
		int edad;
		float sueldo;
		char estudios[50];
	} trabajador[100];

	int n_trabajadores;
	cout << "Digite el numero de trabajadores: ";
	cin >> n_trabajadores;

	int mayor = 0, posicion = 0;

	for (int i = 0; i < n_trabajadores; i++)
	{
		fflush(stdin);
		cout << "Nombre: ";
		cin.getline(trabajador[i].nombre, 40, '\n');
		cout << "Edad: ";
		cin >> trabajador[i].edad;
		cout << "Sueldo: ";
		cin >> trabajador[i].sueldo;
		fflush(stdin);
		cout << "Grado maximo de estudios: ";
		cin.getline(trabajador[i].estudios, 50, '\n');

		if (trabajador[i].sueldo > mayor)
		{
			mayor = trabajador[i].sueldo;
			posicion = i;
		}

		cout << "\n";
	}
	for (int j = 0; j < n_trabajadores; j++)
	{

		cout << "\n";

		if (trabajador[j].sueldo <= 8000)
		{
			cout << "Trabajador categoria A" << endl;
		}

		else if (trabajador[j].sueldo <= 12000)
		{
			cout << "Trabajador categoria B" << endl;
		}

		else if (trabajador[j].sueldo <= 15000)
		{
			cout << "Trabajador categoria C" << endl;
		}

		else if (trabajador[j].sueldo >= 20000)
		{
			cout << "Trabajador categoria D" << endl;
		}

		cout << "Nombre: " << trabajador[j].nombre << endl;
		cout << "Edad: " << trabajador[j].edad << endl;
		cout << "Sueldo: " << trabajador[j].sueldo << endl;
		cout << "Grado maximo de estudios: " << trabajador[j].estudios << endl;
	}

	system("pause");
}
