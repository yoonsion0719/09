#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main(void) {
	
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for (i=0;i<SIZE;i++)
		grade[i] = rand() % 100;
	
	for (i=0;i<SIZE;i++)
		grade[i] = score[i];
	
	for (i=0;i<SIZE;i++)
		printf("score[%d] = %d\n",i,score[i]);
	
	return 0;
}
