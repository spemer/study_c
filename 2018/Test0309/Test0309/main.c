//
//  main.c
//  Test0309
//
//  Created by Hyouk Seo on 2018. 3. 9..
//  Copyright © 2018년 Hyouk Seo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define NUMB 5
typedef struct student{
    int number;
    char name[99];
    double grade;
} STUDENT;

int main(void){
    STUDENT list[NUMB];
    list[2].number = 201202240;
    strcpy(list[2].name, "Hyouk Seo");
    list[2].grade = 4.5;
    printf("%d, %s, %0.1f\n", list[2].number, list[2].name, list[2].grade);
    return 0;
}

//int main(void){
//    int i = 0, adder = 0;
//    int a[NUMB] = {1, 2, 3, 4, 5};
//    for(i = 0; i < NUMB; i++){
//        printf("%d\n", a[i]);
//        adder += a[i];
//    }
//    printf("%d\n", adder);
//    return 0;
//}

//int main(int argc, const char * argv[]) {
//    int a = 5, b = 3;
//    printf("a: %d, b: %d, a + b = %d\n", a, b, a + b);
//    int c;
//    printf("c: ");
//    scanf("%d", &c);
//    printf("c: %d\n", c);
//    return 0;
//}
