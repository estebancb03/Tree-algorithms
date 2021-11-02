#ifndef GENERICTREEMETHODS_H
#define GENERICTREEMETHODS_H
#include "../src/Menus.h"
using namespace std;

template < class T >
class Menus;

template < class T >
class GenericTreeMethods {
    Tree< T > *tree;
    public:
        GenericTreeMethods(Tree t) { tree = t; };
        Node< T > *getLeftBrother(Node< T > *node);
        Node< T > *searchTag(Node< T >* node, T tag);
        bool repeatedTags();
        int nodeHeight(T tag);
        int nodeDepth(T tag);
        int preOrderTreeLevels();
        int byLevelsTreeLevels();
        void printALevel(int level);
        void printInPreOrder();
        void printInPreOrderUsingStack();
        void printAllLevels();
};

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
Node< T >* GenericTreeMethods< T > :: getLeftBrother(Node< T > *node) {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
Node< T >* GenericTreeMethods< T > :: searchTag(Node< T >* node, T tag) {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
bool GenericTreeMethods< T > :: repeatedTags() {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
int GenericTreeMethods< T > :: nodeHeight(T tag) {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
int GenericTreeMethods< T > :: nodeDepth(T tag) {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
int GenericTreeMethods< T > :: preOrderTreeLevels() {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
int GenericTreeMethods< T > :: byLevelsTreeLevels() {
    
}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
void GenericTreeMethods< T > :: printALevel(int level) {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
void GenericTreeMethods< T > :: printInPreOrder() {

}

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
void GenericTreeMethods< T > :: printInPreOrderUsingStack() {

} 

/*
    EFECTO:
    REQUIERE:
    MODIFICA:
*/
template < typename T >
void GenericTreeMethods< T > :: printAllLevels() {

}

#endif //GENERICTREEMETHODS_H