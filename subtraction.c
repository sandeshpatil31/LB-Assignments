#include<stdio.h>
int subtraction(int iValue1, int iValue2)
{
      return iValue1 - iValue2;
}
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iSubResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	
	iSubResult = subtraction(iFirstNum, iSecNum);
	printf("Subtraction is = %d\n",iSubResult);
	return 0;
}