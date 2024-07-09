#include<stdio.h>
#include <stdbool.h>
bool checkSumIsEven(int iNum1,int iNum2)
{
    int iSum=0;
    iSum = iNum1+iNum2;
    if(iSum%2==0)
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

    printf("Enter the first number:\n");
    scanf("%d",&iNum1);
     printf("Enter the Second number:\n");
    scanf("%d",&iNum2);
    
    bResult=checkSumIsEven(iNum1,iNum2);
    if(bResult==true)
    {
    	printf("Sum is Even ");
    }
    else
    {
    	printf("Sum is Even ");
    }
    return 0;

}