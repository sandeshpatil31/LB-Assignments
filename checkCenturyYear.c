/* Problem statement:- WAP to accept a year from user Check if a given 
                       year is a century year (ends with 00). 
*/

#include<stdio.h>
#include<stdbool.h>
 bool checkDivible(int iYear)
{
	if (iYear%100==0)
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
	int iYear=0;
	bool bResult=false;
	printf("Enter the Year: \n");
	scanf("%d",&iYear);


	bResult=checkDivible(iYear);
	if(bResult==true)
	{
		printf("Yes \n");
	}
	else
	{
		printf("No \n");
	}
	return 0;

}