#include <stdio.h>
#include <stdlib.h>
#define LOOP 1000

int main(void){
    int r = 100;
    int circle_points = 0, total_points = 0;
    double pi_a;

    for(int n = 1; n <= LOOP; n++){
        double x = (double)rand() / RAND_MAX * r;
        double y = (double)rand() / RAND_MAX * r;
        
        if(x * x + y * y <= r * r){
            circle_points++;
        }
        total_points++;

        pi_a = 4.0 * circle_points / total_points;
        printf("Approximate of Pi ≈ %f\n", pi_a);
    }
        printf("Final approximate of Pi ≈ %f\n", pi_a);
}
