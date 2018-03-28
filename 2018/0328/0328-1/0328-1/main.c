//
//  main.c
//  0328
//
//  Created by Hyouk Seo on 2018. 3. 28..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>
#define ROWS 3
#define COLS 3

void sparse_matrix_add(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS])
{
    int r = 0, c = 0;
    printf("add:\n");
    for(r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            C[r][c] = A[r][c] + B[r][c];
            printf("%d\t", C[r][c]);
        }
        printf("\n");
        //printf("%d\t", C[r][c]);
    }
    printf("\n");
}

void sparse_matrix_subtract(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS])
{
    int r = 0, c = 0;
    printf("subtract:\n");
    for(r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            C[r][c] = A[r][c] - B[r][c];
            printf("%d\t", C[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void sparse_matrix_print(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS])
{
    int r = 0, c = 0;
    printf("array1:\n");
    for(r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }printf("\narray2:\n");
    for(r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            printf("%d\t", B[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int array1[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    }; // array1
    int array2[ROWS][COLS] = {
        {1, 0, 0},
        {1, 0, 0},
        {1, 0, 0}
    }; // array2
    int array3[ROWS][COLS]; // array3(store)
    sparse_matrix_print(array1, array2, array3);
    sparse_matrix_add(array1, array2, array3);
    sparse_matrix_subtract(array1, array2, array3);
}

