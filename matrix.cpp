#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

const int list_size = 11;

int main(){
    int i, j;
    int list[list_size] = {5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9}; // Пример массива
    int matrix[list_size][list_size];
    
    if (list_size % 2 != 0){ //Проверка на чётность одномерного массива
        for (int i = 0; i < list_size; i++) {
            matrix[i][0] = list[i];
            for (int j = 1; j < list_size; j++) {
                if (j%2 == 0){matrix[i][j] = -1;}
                else {matrix[i][j] = 1;}
                }}}
    else { //Если чётный, то гасит погрешность
        for (int i = 0; i < list_size; i++) {
            matrix[i][0] = list[i];
            matrix[i][1] = 2;
            matrix[i][2] = -1;
            for (int j = 3; j < list_size; j++) {
                if ((j)%2 == 0){matrix[i][j] = 1;}
                else {matrix[i][j] = -1;}
                }}}
        
    //Вывод матрицы
    for (int i = 0; i < list_size; i++) {
        for (int j = 0; j < list_size; j++) {cout << matrix[j][i];}
    cout << '\n';}  
    return 0;}
