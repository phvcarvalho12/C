#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, LA, LB, SA, SB;
    
    scanf("%d", &N);
    
    scanf("%d", &LA);
    scanf("%d", &LB);
    scanf("%d", &SA);
    scanf("%d", &SB);
 
     if ((N >= LA && N <= LB) && (N >= SA && N <= SB)) {
        printf("possivel\n");
    } else {
        printf("impossivel\n");
    }
 
    return 0;
}