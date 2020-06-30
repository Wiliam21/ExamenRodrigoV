
// Arreglo 4 categorias trabajadores

#include<iostream>
#include<conio.h>

using namespace std;

struct trabajadores{
	char nombre[40];
	int edad;
	float sueldo; 
	char estudios[50];
} trabajador[100];

int main(){
	
	int n_trabajadores; 
	cout<<"Digite el numero de trabajadores: ";
	cin>>n_trabajadores;
	
	int mayor=0, posicion=0;
	
	for(int i=0;i<n_trabajadores;i++){
		fflush(stdin);
		cout<<"Nombre: "; 
		cin.getline(trabajador[i].nombre,40,'\n');
		cout<<"Edad: "; 
		cin>>trabajador[i].edad;
		cout<<"Sueldo: "; 
		cin>>trabajador[i].sueldo;
		fflush(stdin);
		cout<<"Grado maximo de estudios: ";
		cin.getline(trabajador[i].estudios,50,'\n'); 
		
		if (trabajador[i].sueldo>mayor){
			mayor = trabajador[i].sueldo;
			posicion = i;
		}
		
		cout<<"\n";
	}
	for (int j=0;j<n_trabajadores;j++){
		
		cout<<"\n";
		
		if (trabajador[j].sueldo<=8000){
			cout<<"Trabajador categoria A"<<endl;
		}
		
		else if (trabajador[j].sueldo<=12000) {
			cout<<"Trabajador categoria B"<<endl;
		}
		
		else if (trabajador[j].sueldo<=15000){
			cout<<"Trabajador categoria C"<<endl;
		}
		
		else if (trabajador[j].sueldo>=20000){
			cout<<"Trabajador categoria D"<<endl;
		}
		
		cout<<"Nombre: "<<trabajador[j].nombre<<endl;
		cout<<"Edad: "<<trabajador[j].edad<<endl;
		cout<<"Sueldo: "<<trabajador[j].sueldo<<endl;
		cout<<"Grado maximo de estudios: "<<trabajador[j].estudios<<endl;
	}
	getch();
	return 0;
		
	} 




