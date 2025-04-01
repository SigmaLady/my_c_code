/*01- Print square and cube of a given number*/
#include <stdio.h>
int input_num;  /*Global Declarations*/

/* Function to calculate and print square of number*/
int squareOfinputNum(int input_num)
{ 
    int sqr;
    sqr= input_num * input_num;
    printf("Square=%d \n", sqr);
    return sqr;
}

/* Function to calculate and print cube of number*/
int cubeOfinputnum(int input_num)
{
    int cube;
    cube = input_num * input_num * input_num;
    printf("Cube= %d", cube);
    return cube;
}
void main()
{

    printf(" Enter number (int only) to calculate it's square and cube:");

    scanf("%d", &input_num); /*Accept the number to calculate square and cube*/
    squareOfinputNum(input_num);
    cubeOfinputnum(input_num);

}