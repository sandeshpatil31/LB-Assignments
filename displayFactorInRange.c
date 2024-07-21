/* Problem Statement :- Write a program to accept two numbers from the user and
print all factors of a given number that fall within a specified
range [first number, second number]. */

#include<stdio.h>

void displayFactorsInRange(int iNumber,int iFirstNum,int iSecNum)   // this function return nothing
{
     int iNum=15;

	for(iFirstNum=1;iFirstNum<=iSecNum;iFirstNum++)    
	{
		  if(iNum%iFirstNum==0)               // find factor
             {
             	printf("%d\n",iFirstNum);     
             }  
             if(iFirstNum>=iNum)           // if found factors still number then ifirst is greater than number terminate loop 
             break;     
	}
}

int main()
{    
     int iNumber=0;
	int iFirstNum=0;
	int iSecNum=0;

	printf("Enter the start number:\n");
	scanf("%d",&iFirstNum);

	printf("Enter the end number:\n");
	scanf("%d",&iSecNum);

    displayFactorsInRange(iNumber,iFirstNum,iSecNum);
	return 0;
}

