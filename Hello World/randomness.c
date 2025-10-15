#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int median = RAND_MAX / 2; 
    int minus_cnt = 0, plus_cnt = 0;
    for(int n = 0; n< 500; n++){
        int x = rand();
        if (x < median){
            minus_cnt++;
        }
        else{
            plus_cnt++;
        }
        int y = plus_cnt - minus_cnt;
        printf("%i\n", y);
    }
    return 0;
}