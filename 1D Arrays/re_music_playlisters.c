#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void shuffle(int songs[], int num);

int main(void){
    int num;
    printf("How many songs required ?\n");
    if(scanf("%i", &num) != 1 || num <= 0 || num > MAX){
        return 1;
    }

    int songs[MAX];
    for(int i = 0; i < num; i++){
        songs[i] = i + 1;
    }

    shuffle(songs, num);

    for(int i = 0; i < num; i++){
        printf("%i ", songs[i]);
    }
    printf("\n");
    return 0;
}

void shuffle(int songs[], int num){
    //shuffle songs
    for(int i = 0; i < (num - 1); i++){
        //pick a index from i to num
        int j = rand() % (num - i) + i;
        //swap i and j
        int temp = songs[i];
        songs[i] = songs[j];
        songs[j] = temp;
    }
}