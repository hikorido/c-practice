#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define PHI 1.61803398875

bool fibword_phi(int n);

int main(void){
    for(int n=1; n <= 20; n++){
        bool result = fibword_phi(n);
        printf("The %ith-digit of the sequence is %i.\n", n, result);
    }
    return 0;
}

bool fibword_phi(int n){
    int digit = 2 + floor(n * PHI) - floor((n+1) * PHI);
    return digit;
}