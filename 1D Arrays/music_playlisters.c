#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

void shuffle(int songs[], bool used[], int num);

int main(void){
    int num;
    printf("How many songs required ?\n");
    if(scanf("%i", &num) != 1 || num <= 0 || num > MAX){
        return 1;
    }

    int songs[MAX];
    bool used[MAX]; 
    shuffle(songs, used, num);

    for(int i = 0; i < num; i++){
        printf("%i ", songs[i]);
    }
    printf("\n");
    return 0;
}

void shuffle(int songs[], bool used[], int num){
    //set all to unused
    for(int i = 0; i < num; i++){
        used[i] = false;
    }
    //shuffle songs
    for(int i = 0; i < num; i++){
        int temp;
        do{
            temp = rand() % num;
        }while(used[temp]);
    
        used[temp] = true;
        songs[i] = temp + 1;
    }
}