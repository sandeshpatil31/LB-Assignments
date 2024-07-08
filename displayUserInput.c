#include<stdio.h>
void display(int iNum)
{
	if(iNum < 0)
	{
		iNum = - iNum; // updator
	}
	int iCnt=0;
	for (iCnt = 1; iCnt <= iNum; iCnt++)
	{
		printf("Splendid Infosystems \n");

	}
}
int main()
{
	int iNum=0;

	printf("How many times do you want to print ? \n");
	scanf("%d",&iNum);

	display(iNum);
	return 0;
}