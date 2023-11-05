#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main(void) {
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	int flag_same=1;
	
	for (i=0;i<SIZE;i++)
	{
		if (a!=b)
			printf("%d 배열은 서로 다른 값을 가집니다.\n",i);
			flag_same = 0;
	 } 
	 
	
	return 0;
}
