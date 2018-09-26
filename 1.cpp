#include <iostream>
#include <conio.h>

using namespace std;

struct nodo{
	int Val;
		struct nodo *ptr;
};
int main(){
struct nodo *inicio; 
struct nodo *nodo;

nodo=new struct nodo;
inicio=nodo;
inicio->ptr=NULL;
inicio->Val=10;

nodo=new struct nodo;
inicio->ptr=nodo;
inicio->ptr->ptr=NULL;
inicio->ptr->Val=20;

cout<<inicio->Val;
cout<<inicio->ptr->Val;

return 0;
}


# Nodo
