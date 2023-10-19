#include <stdio.h>
void f(void);

int i; // 같은 전역변수

int main(void)
{
    for(i = 0; i < 5; i++){
        f();
    }
    return 0;
}

void f(void)
{
    for(i = 0; i < 10; i ++)
        printf("#");
}
