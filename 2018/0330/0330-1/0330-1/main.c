//
//  main.c
//  0330-1
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int number = 10;
    int *p;
    // p의 대상체는 int
    
    p = &number;
    // &는 n번지의 int
    
    printf("변수 number의 주소: %u\n", &number);
    printf("포인터의 값: %u\n", p); // p는 주소를 가리킴
    printf("변수 number의 값: %d\n", number);
    printf("포인터가 가리키는 값: %d\n", *p); // *p는 값을 가리킴 (뚜껑열기)
   
    // 변수는 뚜껑이 항상 열려있음
    // * 을 달면 뚜껑을 열어볼 수 있음 (참조연산자)
    // * 을 안달면 주소값만 알 수 있음
    // int 는 4바이트 -> 100번지에서 하나 건너뛰면 104번지, 없으면 쓰레기값
    
    return 0;
}
