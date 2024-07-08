#include<stdio.h>
int multiplication(int iValue1, int iValue2)
{
      return iValue1 * iValue2;
}
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iMulResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	
	iMulResult = multiplication(iFirstNum, iSecNum);
	printf("Multiplication is = %d\n",iMulResult);
	return 0;
}