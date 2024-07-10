/* Problem Statement:- To accept two numbers from user Check if the product 
                      of two given numbers is odd.
*/

#include<stdio.h>
#include <stdbool.h>
bool checkSumIsEven(int iNum1,int iNum2)
{
    int iProduct=0;
    iProduct = iNum1*iNum2;
    if(iProduct%2!=0)
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
    	printf("Product is Odd");
    }
    else
    {
    	printf("Product is Even ");
    }
    return 0;

}