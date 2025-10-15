#include<stdio.h>

int main(void){
    int a, b = 0, c = 0;
    a = ++b + ++c; //b=1 c=1 a=1+1=2
    printf("%i%i%i\n", a, b, c); //1,1,1
    a = b++ + c++;//a=2 b=2 c=2
    printf("%i%i%i\n", a, b, c);
    a = ++b + c++;//b=3 a=5 c=3
    printf("%i%i%i\n", a, b, c);
    a = b-- + --c;//c=2 a=5 b=2
    printf("%i%i%i\n", a, b, c);
    return 0;
}