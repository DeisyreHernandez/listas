#include<iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
}*primero,* ultimo;

void insertardatos();
void buscar();
void actualizar();
void borrar();
void desplegarLis();
int main(){
 
 int opc_menu = 0;
do{
	cout << "\n|-------------------------------|";
	cout << "\n|       *LISTAS CIRCULAR*       |";
	cout << "\n|-------------------------------|";
	cout << "\n|1 Insertar      |4 Borrar      |";
	cout << "\n|2 Buscar        |5 Actualizar  |";
	cout << "\n|3 Ver Lista     |6 Salir       |";
	cout << "\n|-------------------------------|";
	cout << "\n Seleccione una opcion:  ";
	cin >> 	opc_menu ;
	switch(opc_menu){
		case 1:
		cout << "\n Insertar datos en la lista \n\n ";
		insertardatos();
		break;
	    case 2:
		cout << "\n Buscar datos en la lista \n\n ";
		buscar();
		break;
	    case 3:
		cout << "\n Observar datos en la lista \n\n ";
		desplegarLis();
		break;
	    case 4:
		cout << "\n Borrar Datos en la lista \n\n ";
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

void insertardatos(){
	nodo* nuevo = new nodo();
	cout <<" Ingrese un dato: ";
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
	cout <<"Dato ingresado exitosamente!!!";
}

void buscar(){
nodo* actual = new nodo();
	actual = primero;
	bool encontrardato = false; 
	int buscardato = 0,
	cout <<" Ingrese un dato para buscar: ";
	cin>> buscardato;
	if(primero!=NULL){
		do{
			if(actual->dato == buscardato){
				cout <<"\Dato"<<buscardato<<"encontrado\n\n";
				encontrardato = true;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrardato !=true);
		
		if(encontrardato==0){
		cout<<	"\nDato no Encontrado\n\n";
		}
	}	
	
}

void actualizar(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrardato = false;
	int buscardato = 0, 
	cout<< " Ingrese el dato para actualizar: ";
	cin>> buscarnodo;
	if(primero!=NULL){
		do{
			if(actual->dato == buscardato){
				cout <<"\Dato"<<buscardato<<"encontrado\n\n";
				cout << "Ingrese el nuevo dato para actualizar: \n";
				cin>>actual->dato;
				
				cout<<"Dato actualizado";
				encontrardato = true;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrardato !=true);
		
		if(encontrardato==0){
		cout<<	"\nDato no Encontrado\n\n";
		}
	}	
}

void borrar(){
	nodo* actual = new nodo();
	actual = primero;
	nodo * anterior =new nodo();
	anterior = NULL;
	bool encontrardato = false;
	int buscardato = 0, 
	cout<< " Ingrese el dato a Eliminar: ";
	cin>> buscarnodo;
	if(primero!=NULL){
		do{
			if(actual->dato == buscardato{
			cout <<"\Dato"<<buscardato<<"encontrado\n\n";
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
				encontrardato = ;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrardato !=1);
		
		if(encontrardato==0){
		cout<<	"\nDato no Encontrado\n\n";
		}
	}
}

	
}
void desplegarLis(){
nodo * actual = new nodo ();
actual= primero;
if (primero !=NULL){
	do {
		
		cout <<" " <<actual->dato;
		actual = actual->siguiente;
	}while (actual !=primero);
}else{
	cout << "\n No hay datos en la lista\n\n";
}

}