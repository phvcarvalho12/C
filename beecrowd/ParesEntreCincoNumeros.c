#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c, d, e, total;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    if (a % 2 == 0)
        total = total + 1;
        
    if (b % 2 == 0)
        total = total + 1;
        
    if (c % 2 == 0)
        total = total + 1;
        
 	if (d % 2 == 0)
        total = total + 1;
        
 	if (e % 2 == 0)
        total = total + 1;
        
 	printf("%d valores pares\n", total);	   
 
    return 0;
}