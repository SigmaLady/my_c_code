/*05- Find out if a given string is palindrome or not */
#include <stdio.h>
#include <string.h>

int CheckIfPalindrome(char str[])
{
 	int i, length, flag =0;
	length = strlen(str);
	for (i = 0; i < length / 2; i++)
	{
        if (str[i] != str[length - i - 1]) 
		{
            flag = 1;
            break;
        }
	}
	
return flag;

}


int main() {
    char str[20],flag1;
    
   
    // Prompt the user for input
    printf("Enter a string: ");
    scanf("%s", str);

    flag1= CheckIfPalindrome(str);

    // Output the result
    if (flag1) {
        printf("%s is not a palindrome\n", str);
    } else {
        printf("%s is a palindrome\n", str);
    }

    
   
return 0;
}


