#include <stdio.h>


int main (){
	
	printf("Tabuada\n"); 
	//aqui crio uma variavel constante para q o valor n mude, e uma variavel q guardar� outro valor//
    int cont,i;
     
    cont = 0; 
    //la�o de repeti��o do while//
    do{
    cont =cont +1;
    printf ("\n"); //so pra d� um espa�amento entre as demais tabuadas//
    printf ("Tabuada %d\n\n",cont);
        
    for (i=1;i<=10;i++){
                
        printf ("%2d  X  %2d = %2d\n",i,cont,(i*cont));
    }
} while (cont <10);                
     
    return 0;
}
