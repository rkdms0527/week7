#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	if (n <= 1) return (1); //끝나는 조건 
	else return (n * factorial(n-1) );
}
