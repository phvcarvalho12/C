#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float n1, n2, n3, n4, media, exame, mediaF;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = ((n1*2.0)+(n2*3)+(n3*4)+n4)/10.0;
    
    if(media>=7.0)
        printf("Media: %.1f\nAluno aprovado.\n", media);
        
    else if(media<5.0)
        printf("Media: %.1f\nAluno reprovado.\n", media);
        
    else
        {
            cin >> exame;
            mediaF=(media+exame)/2.0;
            printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\n", media, exame);
            if(media>=5.0)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaF);
        }
 
   return 0;
}