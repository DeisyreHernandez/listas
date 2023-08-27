#include<iostream>

using namespace::std;

struct nodo{
int dato;
nodo* siguiente;	
}*primero, * ultimo;

void insertarNodo();
void desplegarLis();

int main(){
insertarNodo();
insertarNodo();
insertarNodo();
cout << "\n\nDatos ingresados a la Lista\n";
desplegarLis();
  return 0;
}

void insertarNodo(){
	
	nodo* nuevo = new nodo();
	cout <<" Estimado usuario por favor ingrese un dato: ";
	cin >> nuevo->dato;
	
	if(primero == NULL){
	    primero = nuevo;
	    primero->siguiente = NULL;
	    ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
	    nuevo->siguiente = NULL;
	    ultimo = nuevo;
	}
	
	cout << "\nDato Ingresado satisfactoriamente\n\n";
}

void desplegarLis(){
nodo* segundario = new nodo();
segundario = primero;

if(primero != NULL){
	
	while(segundario != NULL){
		cout <<"  " << segundario->dato << endl;
		segundario = segundario->siguiente;
	}
	
}else{
	cout <<"\n No encontramos datos en la lista, intenta nuevamente por favor\n\n";
}

}