//
//  main.c
//  0330-3
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *pc;
    int *pi;
    double *pd;
    
    pc = (char*)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf("증가 전 pc: %d, pi: %d, pd: %d\n\n", pc, pi, pd);
    
    // pc 의 대상체를 하나 건너가라
    pc++; // -> 1바이트
    pi++; // -> 4바이트
    pd++; // -> 8바이트
    
    // 대상체 하나씩 건너고 주소 출력
    printf("증가 후 pc: %d, pi: %d, pd: %d\n\n", pc, pi, pd);
    
    // 대상체 두번 건너가라
    printf("pc + 2: %d, pi + 2: %d, pd + 2: %d\n\n", pc+2, pi+2, pd+2);
    
    return 0;
}
