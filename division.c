#include<stdio.h>
float division(int iValue1, int iValue2)
{
	if (iValue2 != 0)
	{
	   return iValue1 / iValue2;
	}
	else
	{
		  printf("Division by zero is not allowed.\n");
		  return 0;
	}
}
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	float fDivResult = 0.0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	fDivResult = division(iFirstNum, iSecNum);
	printf("Division is = %.2f\n",fDivResult);
	return 0;
}