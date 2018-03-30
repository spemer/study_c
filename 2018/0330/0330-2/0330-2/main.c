//
//  main.c
//  0330-2
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number = 10;
    int *p; // 쓰레기값
    
    p = &number; // 번지수를 저장
    printf("변수 number의 값: %u\n\n", number);
    
    printf("p의 값: %u\n", *p);
    printf("p의 값: %u\n", p);
    printf("p의 값: %u\n", &p);
    
    *p = 20; // p로 가서 뚜껑을 열고 값을 저장
    // p로 가서 뚜껑을 열었더니 10 이 있음. 그곳에 20을 저장
    printf("\n변수 number의 값: %d\n", number);
    
    return 0;
}
