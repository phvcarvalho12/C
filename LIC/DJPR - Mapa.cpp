 //DJPR - Hotel
 //Pedro Carvalho - 29/05/2023
 
 #include<stdio.h>
 int main(){
 	char tab[20][14];
	int i, j;
	
    for (i = 20; i > 0; i--)
    	for (j = 1; j < 15; j++)
    		tab[i][j] = '.';
		
	do{		
	
		printf("\t");
	    for(j = 1; j < 15; j++)
		    printf("%2d ", j);
	    printf("\n\n");
	
	    for(i = 20; i > 0; i--){
		    printf("%2d\t", i);
		for(j = 1; j < 15; j++)
		    printf(" %c ", tab[i][j]);
		printf("\n");
	    }
	printf("\nDigite a coordenada (linha, coluna) para marcar x: ");	
		scanf("%d, %d", &i, &j);
		
		if((i == -1 && j == -1))
		     break;
		
		if(i < 1 || i > 20 || j < 1 || j > 14){
			printf("Coordenada invalida\n\n");
			continue;
		}
		tab[i][j] = 'x';
		
	} while (i != -1 || j != -1);
	
 }