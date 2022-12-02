//questão 62 da lista//

#include <stdio.h>

int main (){
	
	float numero_alunos, notas_alunos, aux= 0, cont, media;
	
	printf("Informe o número de alunos da sala:\n");
	scanf("%f", &numero_alunos);
	//uma repetição para ir do primeiro aluno ate o ultimo.//
	for(cont=1; cont <=numero_alunos; cont++){
		
	printf("Informe a nota do aluno, por gentileza:\n", cont);
	scanf ("%f", &notas_alunos);
	
	aux += notas_alunos;
	
	}
	//aux aqui seria uma constante//
	media = aux / numero_alunos;
	
	printf("\nA média da turma é %.2f.\n", media);
	
	return 0;
}
