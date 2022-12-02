#include <stdio.h>


int main (){
	
	int ID_empregado, ano_nascimento, ano_ingresso, ano_atual, tempo, idade;
	
	printf("funcionario, digite o seu código:\n");
	scanf("%d", &ID_empregado);
	
	printf("Informe o ano atual em que está fazendo a consulta:\n");
	scanf("%d", &ano_atual); 
	
	printf("Informe o seu ano de nascimento por gentileza:\n");
	scanf("%d", &ano_nascimento);
	
	printf("Informe o ano de seu ingresso na empresa, por gentileza:\n");
	scanf("%d", &ano_ingresso);
	printf("\n");
	
	tempo = ano_atual-ano_ingresso; //para saber o ano de ingresso na empresa//
	idade = ano_atual-ano_nascimento; //para saber a idade//
	
	printf("seu tempo de ingresso é: %.2d anos\n e sua idade é: %.2d anos\n", tempo, idade);
	 
	//aqui lê-se, "se idade fot maior ou igual a 60 anos ou tempo de trabalho for maior ou igual a 25 anos, aposenta//
	if(idade>=60 || tempo>=25){
		printf("\n");
		printf("Requerer Aposentadoria\n");
		
	}else {
		printf("Não Requerer\n");
	}
	return 0;
}
