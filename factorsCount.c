/* Problem Statement - Write a program to return the count of the total number of
factors of a given number */
 
#include<stdio.h>

int factorCount(int iNum)          // calling function
{

	 int iCnt=0;
	 int factCount=0;
	 for (int iCnt = 1; iCnt<=iNum/2; iCnt++)
	 {
	 	if(iNum%iCnt==0)
	 	{
	 		factCount++;
		}

	 }
	 
	 return factCount + 1;                 // return factCount to main caller fun

}

int main()
{
	int iNum=0;
	int factCount=0;

	printf("Enter the Number:\n");  
	scanf("%d",&iNum);                  // accpet user input

	factCount=factorCount(iNum);    // caller function 

	printf(" %d \n",factCount);

	return 0;
}