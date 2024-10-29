/**
Autor: Arturo Villa Quiñones
Version: 1.0.1
Feha: 29 de 10 de 2024
Nota: Creación de una matriz con punteros por c++
**/

/**Declaración de blibliotecas de c++ y c **/
#include <stdio.h>
#include <iostream>

using namespace std;

/**Función principal encargada de pedir los datos, crear, rellenar y imprimir una matriz**/
int main(){

    /**Declarar las variables**/
    int N, M;
    float **numeros = NULL;

    /**Pedir datos para declarar el tamaño de la matriz**/
    cout << "\nCuantas columnas tendra la matriz? --->";
    cin >> M;
    cout << "\nCuantos renglones tendra la matriz? --> ";
    cin >> N;

    /**Delclarar el tamaño de los renglones atraves de punterps**/
    numeros = new float*[N];

    /**Colocar una casilla por columna por reglon**/
    for (int i = 0; i < N; i++){
        numeros[i] = new float[M];
    }

    cout << "\nRellene la Matriz:" << endl;

    /**Pedir al usuario rellenar la matriz**/
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> numeros[i][j];
        }
    }

    cout << "\nLa matriz es:" << endl;

    /**Imprimir la matriz**/
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << "[" << numeros[i][j] << "]";
        }
        cout << endl;
    }

    return 0;
}