#include<stdio.h>
int modulus(int iValue1, int iValue2)
	{
	if (iValue2 != 0)
	{
		return iValue1 %  iValue2 ;
	}
	else
	{
		printf("Modulus by zero is not allowed.\n");
		return 0;
	}
}
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iModResult = 0;
	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iModResult =modulus(iFirstNum, iSecNum);
	printf("Modulus is = %d\n",iModResult);
	return 0;
}