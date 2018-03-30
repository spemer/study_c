//
//  main.c
//  0330-6
//
//  Created by Hyouk Seo on 2018. 3. 30..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>

void swap(int x, int y) {
    int tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}
// 접근 불가 -> 바뀌지 않음
// 뚜껑을 열어볼 수 없음
int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    
    swap(a, b);
    
    printf("swap() 호출 후 a: %d, b: %d\n", a, b);
    
    return 0;
}
