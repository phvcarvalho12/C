//Achando os Monotonos Nao-Triviais Maximais

#include <stdio.h>
 
int main() {
    int n;

    scanf("%d",&n);

    char frase[n + 1];
    int i, cont = 0;
    int marc[n];

    scanf("%s", frase);

    i = 0;
    while(i < n){
        if(frase[i] == 'a'){
        if(i != n-1 && i != 0){
            if(frase[i] == frase[i + 1] || frase[i] == frase[i - 1])
                marc[i] = 1;
            else
                marc[i] = 0;
        }
        else{
            if(i == n-1){
            if(frase[i] == frase[i - 1])
                marc[i] = 1;
            else
                marc[i] = 0;
            }
            else{
            if(frase[i] == frase[i + 1])
                marc[i] = 1;
            else
                marc[i] = 0;
            }
            }
        }
        else marc[i] = 0;

        i++;
    }

    for(i = 0; i < n; i++)
        if(marc[i] == 1)
            cont++;

    
      printf("%d\n",cont);

    return 0;
}