#include<iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
int dato;
nodo* siguiente;	
}*primero, * ultimo;

void insertarNodo();
void buscar();
void actualizar();
void desplegarLis();
void borrar();
int main(){
int opc_menu = 0;
do{
	cout << "\n|-------------------------------|";
	cout << "\n|       *LISTAS SIMPLES*        |";
	cout << "\n|-------------------------------|";
	cout << "\n|1 Insertar      |4 Borrar      |";
	cout << "\n|2 Buscar        |5 Actualizar  |";
	cout << "\n|3 Ver Lista     |6 Salir       |";
	cout << "\n|-------------------------------|";
	cout << "\n Seleccione una opcion:  ";
	cin >> 	opc_menu ;
	switch(opc_menu){
		case 1:
		cout << "\n Insertar elementos en la lista \n\n ";
		insertarNodo();
		break;
	    case 2:
		cout << "\n Buscar elementos en la lista \n\n ";
		buscar();
		break;
	    case 3:
		cout << "\n Observar elementos en la lista \n\n ";
		desplegarLis();
		break;
	    case 4:
		cout << "\n Borrar elementos en la lista \n\n ";
		borrar();
		break;
		case 5:
		cout << "\n Actualizar elementos nodos en la lista \n\n ";
		actualizar();
		break;
	    case 6:
		cout << "\n Listas finalizada \n\n ";
		break;
		default: 
		cout <<"\n\nSeñor usuario esa opcion no esta disponible";
		
	}

	}while(opc_menu != 6);
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
	
}

void buscar(){

 nodo* actual= new nodo();
actual = primero;
bool datos = false;
int buscarnodo= 0; 
 cout << "Ingrese el dato que desea buscar:";
 cin>> buscarnodo;
if (primero != NULL){
    while(actual != NULL && datos != true){
		
	if(actual->dato == buscarnodo){
		
		cout << endl<< "Dato  "<< buscarnodo<< "encontrado\n\n" ;
		datos = true;
		
	}
	
		actual = actual->siguiente;
	
	}if(!datos){
		cout << "\n No se encontro ese dato en la lista\n\n";
	}	
}
}

void actualizar(){
nodo* actual= new nodo();
actual = primero;
bool datos = false;
int buscarnodo= 0; 
 cout << "Ingrese el dato que desea actualizar:";
 cin>> buscarnodo;
if (primero != NULL){
    while(actual != NULL && datos != true){
		
	if(actual->dato == buscarnodo){
		
		cout << endl<< "Dato  "<< buscarnodo<< "encontrado\n\n" ;
		cout << "Ingrese un nuevo dato para actualizar: \n";
		cin>> actual->dato;
	
		cout<<"\n Dato actualizado";
		datos = true;
	}
	    
		actual = actual->siguiente;
	
	}if(!datos){
		cout << "\n No se encontro ese dato en la lista\n\n";
	}	
}
}

void borrar(){

 nodo* actual= new nodo();
actual = primero;
nodo* anterior = new nodo();
anterior = NULL;
bool datos = false;
int buscarnodo= 0; 
if (primero != NULL){

 cout << "Ingrese el dato que desea eliminar:";
 cin>> buscarnodo;

    while(actual != NULL && datos != true){
		
	if(actual->dato == buscarnodo){
		
		cout << endl<< "Dato "<<buscarnodo << "encontrado\n\n";
          if(actual == primero){
          	primero = primero->siguiente;
		  } else if (actual == ultimo){
		  	anterior->siguiente = NULL;
		  	ultimo = anterior;
		  	
		  }	else{
		  	anterior->siguiente = actual->siguiente;
		  }
		  
	    cout<<" \n Dato eliminado con exito";
		datos = true;
		
	}
	    anterior = actual;
		actual = actual->siguiente;
	
	}if(!datos){
		cout << "\n No se encontro ese dato en la lista\n\n";
	}
}	
}

void desplegarLis(){
  nodo* actual= new nodo();
   actual = primero;

    if(actual != NULL){
	
	while(actual != NULL){
		cout <<"  " << actual->dato << endl;
		actual = actual->siguiente;
}

}else{
	cout <<"\n No encontramos datos en la lista, intenta nuevamente por favor\n\n";
}
}