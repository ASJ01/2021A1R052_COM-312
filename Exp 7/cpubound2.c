#include<stdio.h>
int main()
{
int ResultantMatrix[4][4],i,j,k;

int matrix[4][4] = {
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16}
};

int matrix2[4][4] = {
{17,18,19,20},
{21,22,23,24},
{25,26,27,28},
{29,30,31,32}
};

while(1)
{
for(j=0;j<4;j++)
{
for(i=0;i<4;i++)
{
ResultantMatrix[i][j] =0;
for (k=0;k<4;k++)
ResultantMatrix[i][j] += matrix[i][k]*matrix[k][j];
printf("Result = %d" ,ResultantMatrix[i][j]);
}}}}
