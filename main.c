#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main(void) {
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	
	if (a==b)
		printf("�迭�� ���� ���� �����ϴ�.\n");
	else
		printf("�迭�� �ٸ� ���� �����ϴ�.\n");
	
	return 0;
}
