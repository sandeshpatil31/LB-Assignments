/* Problem Statement:- WAP to accept a number from user check if a given integer is divisible by
10.
*/
#include<stdio.h>
#include<stdbool.h>
 bool checkDivible(int iNum)
{
	if (iNum%10==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNum=0;
	bool bResult=false;
	printf("Enter the first number: \n");
	scanf("%d",&iNum);


	bResult=checkDivible(iNum);
	if(bResult==true)
	{
		printf("Number is divisible by 10\n");
	}
	else
	{
		printf("Number is not divisible by 10\n");
	}
	return 0;

}