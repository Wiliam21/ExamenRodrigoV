//Suma de matrices
//Vieyra Mejia Rodrigo
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
char nombre[40];
int matriz[3][3];
int matriz2[3][3];
int filas = 0, columnas = 0, opcion;
void menu();
void ingresar();
void mostrar();
void sumar();
void restar();

void menu()
{
	int opcion;
	cout << "MENU\n\n";
	cout << "1)Insertar\n";
	cout << "2)Mostrar\n";
	cout << "3)sumar\n";
	cout << "4)restar\n";
	cout << "5)Salir\n";
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		ingresar();
		break;
	case 2:
		mostrar();
		break;
	case 3:
		sumar();
		break;
	case 4:
		restar();
		break;
	case 5:
		cout << " Usted ha salido del programa";
		break;
	}
}

void ingresar()
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

	getch();
	menu();
}

void mostrar()
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
	getch();
	menu();
}

void sumar()
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
	getch();
	menu();
}
void restar()
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
	getch();
	menu();
}

int main()
{
	cout << " Cual es tu nombre? " << endl;
	cin >> nombre;
	menu();
}
