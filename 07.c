/*07- To replace all 0 with 1 in a given number */
/* Strategy:
1. Get user input.
2. Extract digits and replace it. Reconstruct the number in reverse order.
3. Reverse the digits to get original number with replaced digits.
*/

#include <stdio.h>

int main() {
    
    int num,new_num=0,final_num=0;	   

    printf("Enter Number:");
    scanf("%d",&num);
 
    /*Extract digits and replace it. Reconstruct the number in reverse order.*/	
    while(num != 0)
    {
        int digit = num % 10;
        
        num = num / 10;
        if(digit == 0)
        {digit =1;}
        new_num = digit+(new_num * 10);
    }
    
    /*Reverse the digits to get original number with replaced digits.*/
    while(new_num != 0)
    {
        int digit = new_num % 10;
        new_num = new_num / 10;
               
        final_num = digit+(final_num * 10);
    }
    
    printf("New number %d", final_num);

return 0;
}


