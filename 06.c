/*06- Swap values of two variables without using third variable  */
#include <stdio.h>


int swap2Num(int a, int b)
{
 	a= a+b;
	b= a-b;
	a= a-b;
	printf("a = %d",a);
	printf("\nb = %d",b);
	
return 0;

}


int main() {
   
    int a,b;
    // Prompt the user for input
    printf("Enter 2 Numbers to be swapped:");
    scanf("%d %d", &a,&b);

    swap2Num(a,b);   
   
return 0;
}


