//
//  main.c
//  0413-1
//
//  Created by Hyouk Seo on 2018. 4. 13..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 10, y = 20;
    
    const int *ptr = &x;
    
    // *ptr = 30; // compile error
    y = *ptr;
    printf("y = %d \n", y);
    
    y = 40;
    ptr = &y;
    // *ptr = 500 // compile error
    printf("y = %d \n", y);
    
    int *const p = &y;
    printf("y = %d \n", y);
    
    //p = &x; // compile error
    printf("x = %d \n", x);
}
