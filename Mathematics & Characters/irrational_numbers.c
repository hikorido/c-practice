#include <stdio.h>
#include <math.h>
#define MAX_DENOM 100000
#define E 2.71828182845904523536

static inline double cal(double a, double b);

int main(void){
    double best_approx = 0.0;
    double best_diff = 0.0;
    long long best_a = 0, best_b = 1;

    for(long long denom = 1; denom < MAX_DENOM; denom ++){
        long long numer = (long long)round((double)denom * E);
        for(long long n = numer - 1; n <= numer +1; n++){
            double diff = cal((double)n, (double)denom);
            if(denom == 1 || diff < best_diff){
                best_approx = (double)n / (double)denom;
                best_a = n;
                best_b = denom;
                best_diff = diff;
            }
        }
    }
    printf("%lld/%lld = %.20f.\n", best_a, best_b, best_approx);
    return 0;
} 

double cal(double a, double b){
        double diff = fabs(a / b - E);
    return diff;
}
