/*09- Find number of days between two dates.*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int fromdate,todate;	   

    printf("Enter 'from' and 'to' date in DDMMYYYY format:\n ");
    scanf("%d , %d",&fromdate , &todate);

    while((fromdate != 0) && (todate!=0) )
    {
        int fromdate_digit = fromdate % 10;
	int todate_digit = todate %10;
        
        todate_digit = todate_digit / 10;
	fromdate_digit = fromdate_digit /10;

	printf("%d\n",todate_digit);
	printf("%d\n",fromdate_digit);
	count++;


    }



 
    return 0;
}


