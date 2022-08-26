// =================================================================
//
// File: activity.h
// Author: Ricardo Navarro - A01708825
// Date: 25 de agosto de 2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <iostream>
using namespace std;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
    //pendiente
    int suma;
    for (int i = 0; i <= n ; i++){
        suma = suma + i;
    }
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    //pendiente
    int suma;
    if(n == 2){
        suma = 1 + 2;
    }
    else{
        suma = n + sumaRecursiva(n - 1);
    }
    return suma;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
    //pendiente
    int suma;
    suma = (n * (n + 1))/ 2;
	return suma;
}

#endif /* ACTIVITY_H */
