/*02- Find largest among three numbers*/
#include <stdio.h>

/*Function to find largest among 3 numbers*/
int findLargestOfThree(int a,int b, int c)
{
    int result;
    if((a>b) && (a>c))
    {
	printf("The largest number is %d",a);
     	result = a;
    }
    
    else if((b>a) && (b>c))
    {
	printf("The largest number is %d",b);
	result = b;
    }
    
    else if((c>a) && (c>b))
    {
	printf("The largest number is %d",c);
	result = c;
    }
    
    return result;
}

void main() {
        int a,b,c,max;
    printf(" Enter 3 numbers to find largest among them:");
    scanf("%d %d %d", &a,&b,&c); // accept three numbers
    
    max = findLargestOfThree(a,b,c);//store result in max

}