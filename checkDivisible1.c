/* Problem Statement:- Accept two numbers from user Check if a first number is 
                      divisible by second number.
 */
#include<stdio.h>
#include<stdbool.h>
 bool checkDivible(int iNum1,int iNum2)
{
	if (iNum1%iNum2==0)
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
	int iNum1=0;
	int iNum2=0;
	bool bResult=false;
	printf("Enter the first number: \n");
	scanf("%d",&iNum1);
	printf("Enter the second number: \n");
	scanf("%d",&iNum2);

	bResult=checkDivible(iNum1,iNum2);
	if(bResult==true)
	{
		printf("Number1 is divisible by Number2\n");
	}
	else
	{
		printf("Number1 is not divisible by Number2\n");
	}
	return 0;

}