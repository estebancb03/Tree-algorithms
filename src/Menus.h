#ifndef MENUS_H
#define MENUS_H
#include "Pipe.h"
#include "Queue.h"
#include "TreeA.h" //Este include se cambia depende de cual implementación de árbol se quiera usar
using namespace std;
template <class T>

class Menus {
    public:
        void principalMenu();
		void queueMenu();
        void pipeMenu();
		void treeMenu();
};

template < typename T >
void Menus< T > :: principalMenu() {
	bool enabled = true;
    int option = 0;
	while(enabled) {
		system("cls");
		cout << "M E N U  D E  O P C I O N E S" << endl << endl;
		cout << "1. Cola" << endl;
		cout << "2. Pila" << endl;
		cout << "3. Arbol n-ario" << endl;
		cout << "4. Salir" << endl << endl;
		cout << "Opcion: "; cin >> option;
		switch (option) {
			case 1:
				queueMenu();
			break;
			case 2:
				pipeMenu();
			break;
			case 3:
				treeMenu();
			break;
			case 4:
				enabled = false;
			break;
		}
	}
}

template < typename T >
void Menus< T > :: queueMenu() {
	bool enabled = true;
	int option = 0;
	Queue< T > *cola;
	while(enabled) {
		system("cls");
		cout << "M E N U  D E  O P C I O N E S  D E  C O L A" << endl << endl;
		cout << "1. Crear" << endl;
		cout << "2. Destruir" << endl;
		cout << "3. Vaciar" << endl;
		cout << "4. Vacia?" << endl;
		cout << "5. Agregar" << endl;
		cout << "6. Sacar" << endl;
		cout << "7. Frente?" << endl;
		cout << "8. Visualizar" << endl;
		cout << "9. Salir" << endl << endl;
		cout << "Opcion: "; cin >> option;
		switch(option) {
			case 1: {
				system("cls");
				cola = new Queue< T >();
				cout << endl;
				cola -> create();
				cout << "Cola creada correctamente" << endl << endl;
				system("pause");
			}	break;
			case 2: {
				system("cls");
				cola -> destroy();
				cout << "Cola destruida correctamente" << endl << endl;
				system("pause");
			}	break;
			case 3: {
				system("cls");
				cola -> clear();
				cout << "Cola vaciada correctamente" << endl << endl;
				system("pause");
			}	break;
			case 4: {
				system("cls");
				if(cola -> empty()) 
					cout << "Estado de la cola: vacio";
				else
					cout << "Estado de la cola: no vacio";
				cout << endl << endl;
				system("pause");
			}	break;
			case 5: {
				system("cls");
				T element;
				cout << "Elemento: "; cin >> element;
				if(cola -> add(element))
					cout << "Elemento introducido correctamente" << endl << endl;
				else
					cout << "Error: cola llena" << endl << endl;
				system("pause");
			}	break;
			case 6: {
				system("cls");
				cout << "Elemento sacado correctamente" << endl;
				cout << "Elemento sacado: " << cola -> pop() << endl << endl;
				system("pause");
			}	break;
			case 7: {
				system("cls");
				cout << "Elemento del frente: " << cola -> top();
				cout << endl << endl;
				system("pause");
			}	break;
			case 8: {
				system("cls");
				cola -> print();
				cout << endl << endl;
				system("pause");
			}	break;
			case 9: {
				enabled = false;
			}	break;
		}
	}
}

template < typename T >
void Menus< T > :: pipeMenu() {
	bool enabled = true;
	int option = 0;
	Pipe< T > *pila;
	while(enabled) {
		system("cls");
		cout << "M E N U  D E  O P C I O N E S  D E  P I L A" << endl << endl;
		cout << "1. Crear" << endl;
		cout << "2. Destruir" << endl;
		cout << "3. Vaciar" << endl;
		cout << "4. Vacia?" << endl;
		cout << "5. Poner" << endl;
		cout << "6. Quitar" << endl;
		cout << "7. Frente?" << endl;
		cout << "8. Visualizar" << endl;
		cout << "9. Salir" << endl << endl;
		cout << "Opcion: "; cin >> option;
		switch(option) {
			case 1: {
				system("cls");
				pila = new Pipe< T >();
				pila -> create();
				cout << "Pila creada correctamente" << endl << endl;
				system("pause");
			}	break;
			case 2: {
				system("cls");
				pila -> destroy();
				cout << "Pila destruida correctamente" << endl << endl;
				system("pause");
			}	break;
			case 3: {
				system("cls");
				pila -> clear();
				cout << "Pila vaciada correctamente" << endl << endl;
				system("pause");
			}	break;
			case 4: {
				system("cls");
				if(pila -> empty()) 
					cout << "Estado de la pila: vacio";
				else
					cout << "Estado de la pila: no vacio";
				cout << endl << endl;
				system("pause");
			}	break;
			case 5: {
				system("cls");
				T element;
				cout << "Elemento: "; cin >> element;
				pila -> push(element);
				cout << "Elemento introducido correctamente" << endl << endl;
				system("pause");
			}	break;
			case 6: {
				system("cls");
				cout << "Elemento sacado correctamente" << endl;
				cout << "Elemento sacado: " << pila -> pop() << endl << endl;
				system("pause");
			}	break;
			case 7: {
				system("cls");
				cout << "Elemento del frente: " << pila -> top() << endl << endl;
				system("pause");
			}	break;
			case 8: {
				system("cls");
				pila -> print();
				cout << endl;
				system("pause");
			}	break;
			case 9: {
				enabled = false;
			}	break;
		}
	}
}

template < typename T >
void Menus< T > :: treeMenu() {
	bool enabled = true;
	int option = 0;
	Tree< T > *arbol;
	while(enabled) {
		system("cls");
		cout << "M E N U  D E  O P C I O N E S  D E  A R B O L  N - A R I O" << endl << endl;
		cout << "1. Crear" << endl;
		cout << "2. Destruir" << endl;
		cout << "3. Vaciar" << endl;
		cout << "4. Vacio?" << endl;
		cout << "5. Poner raiz" << endl;
		cout << "6. Agregar hijo" << endl;
		cout << "7. Borrar hoja" << endl;
		cout << "8. Modificar etiqueta" << endl;
		cout << "9. Raiz?" << endl;
		cout << "10. Padre?" << endl;
		cout << "11. Hijo mas izquierdo?" << endl;
		cout << "12. Hermano derecho?" << endl;
		cout << "13. Etiqueta?" << endl;
		cout << "14. Numero de nodos?" << endl;
		cout << "15. Numero de hijos?" << endl;
		cout << "16. Visualizar" << endl;
		cout << "17. Salir" << endl << endl;
		cout << "Opcion: "; cin >> option;
		switch(option) {
			case 1: {
				system("cls");
				arbol = new Tree< T >();
				arbol -> create();
				cout << "Arbol creado correctamente" << endl << endl;
				system("pause");
			}	break;
			case 2: {
				system("cls");
				system("pause");
			}	break;
			case 3: {
				system("cls");
				system("pause");
			}	break;
			case 4: {
				system("cls");
				system("pause");
			}	break;
			case 5: {
				system("cls");
				system("pause");
			}	break;
			case 6: {
				system("cls");
				system("pause");
			}	break;
			case 7: {
				system("cls");
				system("pause");
			}	break;
			case 8: {
				system("cls");
				system("pause");
			}	break;
			case 9: {
				system("cls");
				system("pause");
			}	break;
			case 10: {
				system("cls");
				system("pause");
			}	break;
			case 11: {
				system("cls");
				system("pause");
			}	break;
			case 12: {
				system("cls");
				system("pause");
			}	break;
			case 13: {
				system("cls");
				system("pause");
			}	break;
			case 14: {
				system("cls");
				system("pause");
			}	break;
			case 15: {
				system("cls");
				system("pause");
			}	break;
			case 16: {
				system("cls");
				system("pause");
			}	break;
			case 17: {
				enabled = false;
			}	break;
		}
	}
}

#endif