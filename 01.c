/*01- Print square and cube of a given number*/
#include <stdio.h>
int input_num, sqr, cube;
int squareOfinputNum(int input_num)
{ 
sqr= input_num * input_num;
return sqr;
}
int cubeOfinputnum(int input_num)
{
cube = squareOfinputNum(input_num) * input_num;
return cube;
}
void main()
{
int square_rslt, cube_rslt;
printf(" Enter number (int only) to calculate it's square and cube:");

scanf("%d", &input_num);
square_rslt= squareOfinputNum(input_num);
cube_rslt = cubeOfinputnum(input_num);
printf("Square=%d", square_rslt);
printf("Cube= %d", cube_rslt);
}