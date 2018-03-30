//
//  main.c
//  0330-4
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

void modify(int value) {
    value = 99;
}

int main(void) {
    int number = 1;
    
    modify(number);
    printf("number: %d\n", number);
    
    return 0;
}
