#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double A, B, C, delta, raiz, R1, R2;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    delta = (B * B) - (4 * A * C);
    raiz = sqrt(delta);
    
    if ((delta < 0)||(A <= 0)){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    R1 = (-B + raiz) / (2 * A);
    R2 = (-B - raiz) / (2 * A);
    
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
    
 
    return 0;
}