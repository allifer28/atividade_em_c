#include <stdio.h>

int main(){
	
	char gabarito[10], resposta[5][10];
	int i, j, matriculas[5], notas[5]={0}, aprovados=0;

	 printf("Digite o gabarito (10 respostas):\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        int validInput = 0;
        while (!validInput) {
            printf("Digite o numero de matricula do aluno %d:\n", i + 1);
            if (scanf("%d", &matriculas[i]) == 1) {
                validInput = 1; 
            } else {
                printf("Entrada invalida! Por favor, insira um numero inteiro.\n");
                while (getchar() != '\n');
            }
        }
	
	printf("Digite as respostas do aluno %d:\n", i+1);
	for(j=0;j<10;j++){
		scanf(" %c", &resposta[i][j]);
		}
	
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			if(resposta[i][j]==gabarito[j])
			notas[i]++;
		}
	}
	
	printf("\nResultado:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d - Matricula: %d - Nota: %d\n", i + 1, matriculas[i], notas[i]);
        if (notas[i] >= 6) {
            aprovados++;
        }
    }
    
    float porcentagemAprovacao = (aprovados / 5.0) * 100;
    printf("Porcentagem de aprovacao: %.2f%%\n", porcentagemAprovacao);
	
	return 0;
}
