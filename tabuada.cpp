#include <stdio.h>


int main (){
	
	printf("Tabuada\n"); 
	//aqui crio uma variavel constante para q o valor n mude, e uma variavel q guardará outro valor//
    int cont,i;
     
    cont = 0; 
    //laço de repetição do while//
    do{
    cont =cont +1;
    printf ("\n"); //so pra dá um espaçamento entre as demais tabuadas//
    printf ("Tabuada %d\n\n",cont);
        
    for (i=1;i<=10;i++){
                
        printf ("%2d  X  %2d = %2d\n",i,cont,(i*cont));
    }
} while (cont <10);                
     
    return 0;
}
