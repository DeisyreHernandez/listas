#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* sig;
	nodo* atras;
} *prim, *ult;

void insertar();
void buscar();
void modificar();
void eliminar();
void desplegarListaPU();
void desplegarListaUP();

int main(){

	int opcion_menu=0;
	do
	{
		cout << "\n|-------------------------------------|";
		cout << "\n|         *LISTA DOBLE ENLAZADA*      |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 5. Borrar        |";
		cout << "\n| 2. Buscar        | 6. Actualizar    |";
		cout << "\n| 3. Desplegar P.U | 7. Salir         |";
		cout << "\n| 4. Desplegar U.P |                  |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Seleccione una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
			cout << "\n\n Insertar datos en la lista \n\n";
			insertar();
			break;
		case 2:
			cout << "\n\n Buscar datos en la lista \n\n";
			buscar();
			break;
		case 3:
			cout << "\n\n Desplegar lista primero al ultimo\n\n";
			desplegarListaPU();
			break;
		case 4:
		    cout << "\n\n Desplegar lista primero al ultimo\n\n";
			desplegarListaPU();
			break;
		case 5: 
			cout << "\n\n Borrar datos de la lista\n\n";
			borrar();
			break;
		case 6:
			cout << "\n\n Actualizar datos listas\n\n";
			actualizar();
			break;
		case 7:
			cout << "\n\n Listas finalizada...";
			break;
		default:
			cout << "\n\n Señor usuario esa opcion no esta disponible \n\n";
		}
	} while (opcion_menu != 7);	
	return 0;
}

void insertar(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(prim==NULL){
		prim = nuevo;
		prim->sig = NULL;
		prim->atras = NULL;
		ult = prim;
	}else{
		ult->sig = nuevo;
		nuevo->sig = NULL;
		nuevo->atras = ult;
		ult = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void buscar(){
	nodo* actual = new nodo();
	actual = prim;
	bool encontrardato = false;
	int buscardato= 0;
	cout << " Ingrese el dato del Nodo a Buscar: ";
	cin >> buscardato;
	if(prim!=NULL){
		
		while(actual!=NULL && encontrardato!=true){
			
			if(actual->dato == buscardato){
				cout << "\n Nodo con el dato " << buscardato << " Encontrado\n\n";
				encontrardato = true;
			}
			
			actual = actual->sig;
		}
		
		if(!encontrardato){
			cout << "\nDato no encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas no tienen datos\n\n";
	}
}

void actualizar(){
	nodo* actual = new nodo();
	actual = prim;
	bool encontrardato = false;
	int buscardato = 0;
	cout << " Ingrese el dato para actualizar: ";
	cin >> buscardato;
	if(prim!=NULL){
		
		while(actual!=NULL && encontrardato!=true){
			
			if(actual->dato == buscardato){
				cout << "\n Dato" << buscardato << " Encontrado";
				cout << "\n Ingrese el nuevo dato actualizar: ";
				cin >> actual->dato;
				cout << " Dato actualizado\n\n";
				encontrardato = true;
			}
			
			actual = actual->sig;
		}
		
		if(!encontrardato){
			cout << "\n Dato no encontrado\n\n";
		}
		
	}
}


void borrar(){
	nodo* actual = new nodo();
	actual = prim;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrardato = false;
	int buscardato = 0;
	cout << " Ingrese el dato para eliminar: ";
	cin >>buscardato;
	if(prim!=NULL){
		
		while(actual!=NULL && encontrardato!=true){
			
			if(actual->dato == buscardato){
				cout << "\n Dato" << buscardato << "  encontrado";
				
				if(actual==prim){
					prim = prim->sig;
					prim->atras = NULL;
				}else if(actual==ult){
					anterior->sig = NULL;
					ult = anterior;
				}else{
					anterior->sig = actual->sig;
					actual->sig->atras = anterior;
				}
				
				cout << "\n Nodo Eliminado";
				encontrardato = true;
			}
			anterior = actual;
			actual = actual->sig;
		}
		
		if(!encontrardato){
			cout << "\n Dato no Encontrado\n\n";
		}
		
	}
}

void desplegarListaPU(){
	nodo* actual = new nodo();
	actual = prim;
	if(prim!=NULL){
		
		while(actual!=NULL){
			cout << "\n " << actual->dato; 
			actual = actual->sig;
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void desplegarListaUP(){
	nodo* actual = new nodo();
	actual = ult;
	if(prim!=NULL){
		
		while(actual!=NULL){
			cout << "\n " << actual->dato; 
			actual = actual->atras;
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}