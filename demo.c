#include <stdio.h>
int main ()
{
/*
z-> [1,2,3,4]
x-> [3,5,7,9]
y-> [8,5,2,1]
*/
   // int a=1,b=2,c=3,d=4;
   int i,j;
int z[]={1,2,3,4};
int d[3][4]=

{
{1,2,3,4},
{3,5,7,9},
{8,5,2,1}
};
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++){
        printf("%d",d[i][j]);
    }
    printf("\n");
}

    return 0;
}