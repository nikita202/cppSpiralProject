/**
 * @file spiral.cpp
 * @brief Spiral library
 *
 * Class methods for creating a spiral from
 * a given array
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include "spiral.h"

namespace spiral_project {


    void Spiral::setArray(int newM, int newArray[max * max]) {
        m = newM;
        int n = 0;
        for (int d = 0; d < m / 2 + 1; d++) {
            for (int i = d; i < m - d; i++) {
                matrix[d][i] = newArray[n];
                n++;
            }
            for (int i = d; i < m - d - 1; i++) {
                matrix[i + 1][m - 1 - d] = newArray[n];
                n++;
            }
            for (int i = m - 2 - d; i > d - 1; i--) {
                matrix[m - 1 - d][i] = newArray[n];
                n++;
            }
            for (int i = m - 2 - d; i > d; i--) {
                matrix[i][d] = newArray[n];
                n++;
            }
        }
    }


    void Spiral::getMatrix(int newMatrix[max][max]) {
        std::copy(&matrix[0][0], &matrix[0][0] + max * max, &newMatrix[0][0]);
    }

}