#include <stdio.h>
#include <assert.h>

int press_time(int time);

int main(void){
    int time;
    printf("Type the time required\n");
    scanf("%i", &time);

    assert(press_time(25)== 3);
    assert(press_time(705)== 7);

    int total = press_time(time);
    printf("Number of button presses = %i\n", total);
    return 0;
}

int press_time (int time){
    int buttons[3] = {600, 60, 10};
    int presses[3];
    int total_press = 0;

    for(int i = 0; i < 3; i++){
        presses[i] = time / buttons[i];
        time = time % buttons[i];
    }

    if(time > 0){
        presses[2]++;
    }
    
    total_press = presses[0] + presses[1] + presses[2];
    return total_press;
}