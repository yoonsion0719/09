#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main(void) {
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	
	if (a==b)
		printf("배열은 같은 값을 가집니다.\n");
	else
		printf("배열은 다른 값을 가집니다.\n");
	
	return 0;
}
