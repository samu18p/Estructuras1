#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
	float estatura;
	
};
int main (int argc, char** argv){
	struct persona P1,P2;
	cout<<"nombre: ";
	cin.getline(P1.nombre,20);
	cout<<"Edad: ";
	cin>>P1.edad;
	cout<<"Estatura: ";
	cin>>P1.estatura;
	
	cout<<endl<<"nombre guardado: "<<P1.nombre;
	cout<<endl<<"edad guardada: "<<P1.edad;
	cout<<endl<<"estatura guardada: "<<P1.estatura;
	
	getch();
	return 0;
	
}
# Estructuras1
