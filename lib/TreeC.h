#ifndef TREEC_H
#define TREEC_H
#include "NodeTreeC.h"
template < class T >

class Tree {
    NodeTreeC< T > *root;
    public:
        void create();
        void destroy();
        void clear();
        bool search(T tag);
        NodeTreeC< T > search2(T tag);
        void setRoot(T tag);
        void addSon(NodeTreeC< T > father, T sonTag);
        void deleteLeaf(NodeTreeC< T > node);
        void modifyTag(NodeTreeC< T > node, T newTag);
        T getRoot();
        T father(NodeTreeC< T > node);
        T leftmostSon(NodeTreeC< T > node);
        T rightBrother(NodeTreeC< T > node);
        T tag(NodeTreeC< T > node);
        int numNodes();
        int numSons(NodeTreeC< T > node);
        bool empty();
};

/*
    EFECTO: crea la instancia del árbol
    REQUIERE: árbol sin crear o destruido
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: create() {
    root = nullptr;
}

/*
    EFECTO: destruye el árbol
    REQUIERE: árbol creado
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: destroy() {
    delete root;
}

/*
    EFECTO: elimina todos los nodos del árbol
    REQUIERE: árbol creado
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: clear() {

}

/*
    EFECTO: pone el nod raíz del árbol
    REQUIERE: árbol creado
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: setRoot(T tag) {
    root = new NodeTreeC< T >(tag);
}

/*
    EFECTO: agrega al nodo un hijo con esa etiqueta
    REQUIERE: árbol creado y nodo válido
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: addSon(NodeTreeC< T > father, T sonTag) {

}

/*
    EFECTO: elimima el nodo
    REQUIERE: árbol creado, nodo sin hijos y válido 
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: deleteLeaf(NodeTreeC< T > node) {

}

/*
    EFECTO: modifica la etiqueta de un nodo
    REQUIERE: árbol creado y nodo válido
    MODIFICA: árbol
*/
template < typename T >
void Tree< T > :: modifyTag(NodeTreeC< T > node, T newTag) {

}

/*
    EFECTO: devuelve el nodo raíz del árbol
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
T Tree< T > :: getRoot() {
    return root -> getObject();
}

/*
    EFECTO: devuelve el nodo padre de un nodo
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
T Tree< T > :: father(NodeTreeC< T > node) {

}

/*
    EFECTO: devuelve el hijo más izquierdo del padre si tiene, y si no devuelve nulo
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
T Tree< T > :: leftmostSon(NodeTreeC< T > node) {

}

/*
    EFECTO: devuelve el hermano derecho si tiene, y si no existe devuelve nulo.
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
T Tree< T > :: rightBrother(NodeTreeC< T > node) {

}

/*
    EFECTO: devuelve el número de nodos que hay en el árbol
    REQUIERE: árbol creado
    MODIFICA: no hace modificaciones
*/
template < typename T >
int Tree< T > :: numNodes() {

}

/*
    EFECTO: devuelve el número de hijos de un nodo
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
int Tree< T > :: numSons(NodeTreeC< T > node) {

}

/*
    EFECTO: devuelve un verdadero si el árbol tiene nodos, si no devuelve falso
    REQUIERE: árbol creado
    MODIFICA: no hace modificaciones
*/
template < typename T >
bool Tree< T > :: empty() {
    return root == nullptr ? true : false;
}

/*
    EFECTO: devuelve la etiqueta de un nodo
    REQUIERE: árbol creado y nodo válido
    MODIFICA: no hace modificaciones
*/
template < typename T >
T Tree< T > :: tag(NodeTreeC< T > node) {
    return node -> getObject();
}



#endif