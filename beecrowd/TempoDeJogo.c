 #include <iostream>
 
using namespace std;
 
int main() {
 
    int i, f, t;
    
    scanf("%d", &i);
    scanf("%d", &f);
    
    if ((f > i &&  f != 0))
        t = f - i;
        
    else{
        i = 24 - i;
        t = f + i;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", t);
 
    return 0;
}