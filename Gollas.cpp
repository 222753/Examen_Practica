//
// Created by Arturo Villa on 10/29/2024.
//
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int N, M;
    float **numeros = NULL;

    cout << "\nCuantas columnas tendra la matriz? --->";
    cin >> M;
    cout << "\nCuantos renglones tendra la matriz? --> ";
    cin >> N;

    numeros = new float*[N];

    for (int i = 0; i < N; i++){
        numeros[i] = new float[M];
    }

    cout << "\nRellene la Matriz:" << endl;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> numeros[i][j];
        }
    }

    cout << "\nLa matriz es:" << endl;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << "[" << numeros[i][j] << "]";
        }
        cout << endl;
    }

    return 0;
}