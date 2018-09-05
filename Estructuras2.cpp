#include<iostream>
#include<conio.h>

using namespace std;

struct Animal{
	char nombre[20];
	int edad;
	struct Animal *ptr;
	
}animal1, animal2, *inicio;

int main(int argc, char** argv){
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout<<"edad del animal 1";
	cin>>inicio->edad;
	cout<<"nombre del animal 1";
	fflush(stdin);
	cin.getline(inicio->nombre,20);
	
	cout<<"edad del aniumal 2"; 
	cin>>inicio->ptr->edad;
	cout<<"nombre del animal 2";
	fflush(stdin);
	cin.getline(inicio->ptr->nombre,20);
	
	int totaldeanimales=10;
	
	struct Animal animal3;
	inicio->ptr->ptr=&animal3;
	cout<<"edad del animal 3 ";
	cin>>(inicio+2)->edad;
	cout<<"nombre del animal 3";
	fflush(stdin);
	cin.getline((inicio+2)->nombre,20);
	
	cout<<"direccion inicio"<<&inicio<<endl;
	cout<<"direccion animal1 "<<&animal1<<endl;
	cout<<"direccion animal2 "<<&animal2<<endl;
	cout<<"edad que se guardo 1: "<<inicio->edad<<endl;
	cout<<"nombre que se guardo 2 "<<(inicio+1)->edad<<endl;
	cout<<"nombre que se guardo 2: "<<(inicio+1)->nombre<<endl;
	
	cin.get();
	return 0;
}
# Estructuras2
