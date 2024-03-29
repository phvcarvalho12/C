//Exercicio 2A da lista PYTHON
//Pedro Henrique Vianna Carvalho
//data: 26/03/2024
//Fazer uma função na qual busca um elemento e insere ele na lista somente se for distinto
//não podendo inserir um numero repetido na lista

Conjunto add(Conjunto S, unsigned char y){
	int i; 
	unsigned int tamanho;
	
	i = 0;
	tamanho = S.card;
	
 	while(S.Set[i] != y && i < tamanho) {
	 i++;
	}
 	
	if (i == tamanho) {
		S.Set[tamanho] = y;
		S.card = tamanho+1;
	}
	return S;
}