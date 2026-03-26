/*
구조체란?
여러 변수들을 모아서, 하나의 객체를 구성할 때
사용하는 사용자 정의 타입 객체

구조체 구성

struct 구조체명 
{
    멤버변수 1;
    멤버변수 2;
}

정의 및 사용

1.
struct person {
    char *name;
    int age;
};

struct person user1;
user1.name = "user1";
printf("%s", user1.name);

2.
struct person {
    char *name;
    int age;
}test;

test.name = "user1";
test.age = 40;
printf("%s:%d", test.name, test.age);

3.
struct person {
    char *name;
    int age;
};

struct person *p;
p -> name = "test_2";
p -> age = 40;
printf("%s:%d", p->name, p->age);
*/

#include <stdio.h>

int main() {
    struct list {
        int *fp;
    } data, *p;

    int x[] = {100,200,300,400};
    p = &data;
    p->fp = x + 1;
    printf("%d", *(++p->fp));
    
    return 0;
}