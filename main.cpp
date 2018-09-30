#include <iostream>
#include <string>

#include "spiral.h"

using namespace spiral_project;

int main() {
    const int m = 3;
    int inputArray[m * m];
    int matrix[max][max];
    Spiral spiral;

    for (int i = 0; i < m * m; i++) {
        std::cin >> inputArray[i];
    }

    spiral.setArray(m, inputArray);

    spiral.getMatrix(matrix);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}