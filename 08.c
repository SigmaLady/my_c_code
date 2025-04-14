/*08- Convert binary to decimal.*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int num,count=0,dec_num=0;	   

    printf("Enter Binary Number:");
    scanf("%d",&num);

    while(num != 0)
    {
        int digit = num % 10;
        
        num = num / 10;
       
        if((digit == 0)||(digit ==1))
        {
            dec_num = (pow(2,count) * digit) + dec_num;
            count++;
	    }
	    else
	    {
	      printf("\nThis is not a binary number. Please enter binary number.");  
	      break;
	    }
     }
 
 printf("Decimal Number is %d",dec_num);
 
    return 0;
}


