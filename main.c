/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,x=0;char c[4];
scanf("%d",&n);
while(n--){
scanf("%s",c);
if(c[1]=='+')x++;
else x--;}
printf("%d",x);
return 0;
}

    

