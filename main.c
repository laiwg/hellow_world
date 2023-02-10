#include "main.h"

int add(int a ,int b)
{
    return a+b;
}


int main(void){

    int v=0;
    v=add(5,6);

    printf( " 5 + 6 =%d ", v);
    return 0;
}