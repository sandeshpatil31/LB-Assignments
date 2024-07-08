#include<stdio.h>
#include<stdbool.h>

bool checkNum(int iNum)
{
     if (iNum > 0)
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
	bool bResult= false;

	printf("Enter the NUmber:\n");
	scanf("%d",&iNum);

	bResult=checkNum(iNum);
	if (bResult == true)
	{
		printf("Number is Positive");
	}
	else if(bResult == false)
	{
		printf("Number is Negetive");
	}
	else
	{
        printf("Number is Zero");
	}

	return 0;


}