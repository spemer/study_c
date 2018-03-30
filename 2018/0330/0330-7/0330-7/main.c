//
//  main.c
//  0330-6
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

void swap(int *px, int *py) {
    int tmp;
    
    tmp = *px;
    *px = *py;
    *py = tmp;
}
// 직접 뚜껑을 열어서 보고 바꿀 수 있음
int main(int argc, const char * argv[]) {
    int a = 100, b = 200;
    
    printf("swap() 호출 전 a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("swap() 호출 후 a: %d, b: %d\n", a, b);
    
    return 0;
}

