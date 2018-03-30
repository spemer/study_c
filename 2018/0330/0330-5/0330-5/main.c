//
//  main.c
//  0330-5
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

void modify(int *ptr)
{
    *ptr = 99;
}

int main(int argc, const char * argv[])
{
    int number = 1;
    
    modify(&number);
    printf("number: %d\n", number);
    
    return 0;
}
