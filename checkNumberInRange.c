/* Problem Statement:- To accept a number from user and check if a given number is 
                      within a specified range (e.g., between 10 and 20).
*/
#include<stdio.h>
#include <stdbool.h>
bool checkNumberInRange(int iNum)
{
	int  iCnt=0;
	for(iCnt=10;iCnt<=20;iCnt++)
	{
		if (iNum==iCnt)
		{
			return true;
		}
		
	}
	return false;



}
int main()
{
	int iNum=0;
	bool bResult=false;
	printf("Enter the number: \n");
	scanf("%d",&iNum);

	bResult=checkNumberInRange(iNum);
	if (bResult==true)
	{
		printf("Given number present in range");
	}
    else
    {
		printf("Given number not present in range");
	}
	return 0;
}