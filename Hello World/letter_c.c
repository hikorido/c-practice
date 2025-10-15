#include<stdio.h> 
#define HEIGHT 16
#define WIDTH 25

int main(void)
{
    int i = 0;
    printf("\n\n");
    for(int j = 0; j < WIDTH; j++){
        printf("I");
    }
    printf("\n");
    while(i < HEIGHT){
        printf("III\n");
        i = i + 1;
    }

    for(int j = 0; j < WIDTH; j++){
        printf("I");
    }
    printf("\n\n");

    return 0;

}
