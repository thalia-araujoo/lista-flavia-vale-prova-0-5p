//quest�o 75 da lista//
#include <stdio.h>

int main (){
	
	printf("Sequ�ncia de n�meros\n");
	
	for(int x = 1; x <= 10; x++){
		printf("(%d, ", x);
		for(int y=1; y <=10; y++){
			
			printf("%d ", y);
		}
		printf(")\n");
	}
	return 0;
}
