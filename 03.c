/*03- Check if a number is prime or not*/
#include <stdio.h>

/*Function to check if given number is prime or not*/
int findPrimeNum(int num)
{
   if(num<=3)
	{printf("%d is Prime", num);}
   else if(((num%2) == 0) || ((num%3) == 0) || ((num%5) == 0) || ((num%7) == 0))
	{printf("%d is not Prime", num);}
	else
	{printf("%d is Prime", num);}
    return 0;
}

void main() {
        int num;
    printf(" Enter number to check if its prime or no:");
    scanf("%d", &num); // accept three numbers
    
    findPrimeNum(num);//store result in max

}