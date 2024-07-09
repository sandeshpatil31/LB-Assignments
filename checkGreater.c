#include<stdio.h>
#include<stdbool.h>
 bool checkDivible(int iNum)
{
	if (iNum > 100)
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
	printf("Enter the number: \n");
	scanf("%d",&iNum);


	bResult=checkDivible(iNum);
	if(bResult==true)
	{
		printf("Number is Greater than 100");
	}
	else
	{
		printf("Number is not Greater than 100\n");
	}
	return 0;

}