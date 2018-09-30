#include <iostream>

#include "gtest/gtest.h"
#include "spiral.h"

using namespace spiral_project;

TEST(TestSpiral, Spiral_1x1) {
    const int m = 1;
    Spiral spiral;
    int matrix[max][max];
    int inputArray[m * m] = {1};
    int expectedMatrix[m][m] = {{1}};

    spiral.setArray(1, inputArray);
    spiral.getMatrix(matrix);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            EXPECT_EQ(matrix[i][j], expectedMatrix[i][j]);
        }
    }
}

TEST(TestSpiral, Spiral_2x2) {
    const int m = 2;
    Spiral spiral;
    int matrix[max][max];
    int inputArray[m * m] = {1, 2, 3, 4};
    int expectedMatrix[m][m] = {{1, 2},
                                {4, 3}};

    spiral.setArray(2, inputArray);
    spiral.getMatrix(matrix);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            EXPECT_EQ(matrix[i][j], expectedMatrix[i][j]);
        }
    }
}

TEST(TestSpiral, Spiral_3x3) {
    const int m = 3;
    Spiral spiral;
    int matrix[max][max];
    int inputArray[m * m] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int expectedMatrix[m][m] = {{1, 2, 3},
                                {8, 9, 4},
                                {7, 6, 5}};

    spiral.setArray(3, inputArray);
    spiral.getMatrix(matrix);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            EXPECT_EQ(matrix[i][j], expectedMatrix[i][j]);
        }
    }
}