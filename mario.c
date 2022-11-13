/*MATRÍCULA: 20142045050172
NOME: Paulo Fernando Herbster Filho
USUÁRIO: fherbster
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura, i, j;

	printf("digite a altura da piramide entre 1 e 8:\n");
	scanf("%d", &altura);

	while(altura < 1 || altura > 8){
		printf("digite a altura da piramide entre 1 e 8:\n");
		scanf("%d", &altura);
	}
	 

	for(i = 1; i <= altura; i++){
        for(j = altura - i; j >= 1; j--) // imprime os espaços
            printf(" ");
        for(j = 1; j <= i; j++) // imprime os *
            printf("#");
        printf("\n");
    }
	return 0;

/*	 for(i = 1; i <= altura; i++){
	 	for(j = altura - 1; j >= 1; j--)
	 		printf(" ");
	 	for(j = 1; j <= i; j++)
	 		printf("#");
	 	printf("\n");
	 }
*/



	
}

