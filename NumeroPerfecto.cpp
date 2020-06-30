#include <iostream>
 
using namespace std;
int main (){
	char ape [50];
	cout <<"Ingrese su apellido: "<<endl; 
	cin >>ape;
	while (10)
	{int n,sum=0,term;
	cout <<ape<<" digite un numero: "<<endl; 
	cin >>n;
	for (int i=1;i<n;i++){
		if (n%i==0){sum=sum+i;}}
	 if (sum==n){cout <<ape<<" el numero es perfecto"<<endl;
		cout <<ape<<" desea continuar con el programa (1=Si;0=No): "; cin >>term;
		if (term!=1){break;}}
	else {cout <<ape<<" el numero perfecto"<<endl;
		cout <<ape<<" desea continuar con el programa (1=Si;0=No): "; cin >>term;
		if (term!=1){break;}}}
	cout <<"Hasta pronto";
	return 0;
	
	}
