//
//  201202240_0321_2.c
//  0321
//
//  Created by Hyouk Seo on 2018. 3. 21..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>
void swap(int *px, int *py) {
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}
// 포인터가 들어가면 4바이트
// 주소를 알고있으면 막 들어가서 값도 바꾸고 할 수 있다
// 포인터를 쓰지 않으면 지역변수만 바뀐다
// 포인터를 써야지 전역에서 바뀜 (아예 주소로 들어가서 컨트롤하기 때문에)
int main() {
    int a = 1, b = 2;
    printf("swap을 호출하기 전: a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("swap을 호출한 후: a: %d, b: %d\n", a, b);
    return 0;
}
