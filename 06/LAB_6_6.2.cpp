#include <stdio.h>
int main() {
	int o;
	printf( "Input your line ; " );
	scanf("%d" , &o);
	
	for(int y = 1; y<=o ; y++){
		for(int x = 2 ; x <= y ; x++ ){
			printf(" ");
		}
		for(int x = o; x >= y ; x--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
