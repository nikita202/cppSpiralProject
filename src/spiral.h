/**
 * @file spiral.h
 * @brief Prototypes for the Spiral library
 *
 * Prototypes for creating a spiral from
 * a given array
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include <iostream>

#ifndef SPIRALPROJECT_SPIRAL_H
#define SPIRALPROJECT_SPIRAL_H

namespace spiral_project {

    const int max = 10; ///< Maximum number of rows and columns

    /**
     * @brief Class for creating spirals
     */
    class Spiral {

    private:

        int m; ///< current spiral size
        int matrix[max][max]; ///< spiral itself

    public:

        /**
         * @brief Configures the class and processes the data
         * @param newM new m value
         * @param newArray new array
         */
        void setArray(int newM, int newArray[max * max]);

        /**
         * @brief returns the matrix from the class
         * @param newMatrix used as a reference
         * @return matrix through the reference
         */
        void getMatrix(int newMatrix[max][max]);

    };

}

#endif //SPIRALPROJECT_SPIRAL_H