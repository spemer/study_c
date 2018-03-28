//
//  hs2.c
//  0328
//
//  Created by Hyouk Seo on 2018. 3. 28..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>
#define ROWS 3
#define COLS 3
#define MAX_TERMS 10

typedef struct {
    int row;
    int col;
    int value;
} element;

typedef  struct SparseMatrix {
    element data[MAX_TERMS];
    int rows;     // 행의 개수
    int cols;     // 열의 개수
    int terms;    // 항의 개수
} SparseMatrix;

SparseMatrix sparce_matrix_add2(SparseMatrix a, SparseMatrix b) {
    SparseMatrix c;
    int ca = 0, cb = 0, cc = 0;
    if (a.rows != b.rows || a.cols != b.cols)
    {
        fprintf(stderr, "희소행렬 크기 에러\n");
        exit(1);
    }
    c.rows = a.rows;
    c.cols = a.cols;
    c.terms = 0;
    while(ca < a.terms && cb < b.terms)
    {
        int inda = a.data[ca].row * a.cols + a.data[ca].col;
        int indb = b.data[cb].row * b.cols + b.data[cb].col;
        if (inda < indb)
        {
            c.data[cc++] = a.data[ca++];
        }
        else if (inda == indb)
        {
            if ((a.data[ca].value + b.data[cb].value) != 0)
            {
                c.data[cc].row = a.data[ca].row;
                c.data[cc].col = a.data[ca].col;
                c.data[cc++].value = a.data[ca++].value + b.data[cb++].value;
            }
            else
            {
                ca++;
                cb++;
            }
        }
        else
        {
            c.data[cc++] = b.data[cb++];
        }
    }
    for(; ca < a.terms;)
    {
        c.data[cc++] = a.data[ca++];
    }
    for(; cb < b.terms;)
    {
        c.data[cc++] = a.data[cb++];
    }
    c.terms = cc;
    return c;
}

int main() {
    SparseMatrix m1 = {{{1, 1, 5}, {2, 2, 9}}, 3, 3, 2};
    SparseMatrix m2 = {{{0, 0, 5}, {2, 2, 9}}, 3, 3, 2};
    SparseMatrix m3;
    m3 = sparce_matrix_add2(m1, m2);
}

