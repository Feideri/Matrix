#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "libs/matrix.h"

int main()
{
    srand (time(NULL));

    matrix mat = generateMatrix();
    printMatrix(mat);
    printf("\n");

    matrix mat2 = generateIdentity(mat.rows, mat.cols);
    printMatrix(mat2);

    /*
    matrix mat2;

    while(mat.cols != mat2.rows){
        mat2 = generateMatrix();
        if(mat.cols != mat2.rows)
            freeMatrix(mat2);
    }
    printf("\n");
    printMatrix(mat2);
*/

    matrix multiplied = multiplication(mat, mat2);
    printf("\n");
    printMatrix(multiplied);

    freeMatrix(mat);
    freeMatrix(mat2);
    //freeMatrix(multiplied);


    return 0;
}
