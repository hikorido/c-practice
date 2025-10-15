#include <stdio.h>
#include <math.h>
#define DIFFER 0.00000005
#define PI 3.1415926535
int main(void){
    double approx = 0.0;
    long long i = 0;
    double sign = 1.0;
    while(fabs(approx - PI) >= DIFFER){
        double denom = 2.0 * i + 1.0;
        approx = approx + sign * (4.0 / denom);
        sign = -sign;
        i++;
    }
    printf("It takes %lld iterations to get pi correctly approximated to 7 decimal places.\n", i);
    return 0;
}
