/* Problem Statement:- WAP to accept two numbers from user Check if the 
                       difference between two given numbers is positive.
*/


#include<stdio.h>
#include <stdbool.h>
bool checkDifferenceIsPositive(int iFirstNum,int iSecNum)
{
    int iDiff=0;
    iDiff = iFirstNum- iSecNum;
    if(iDiff > 0)
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
    int iFirstNum=0;
    int iSecNum=0;
    bool bDiff=false;

    printf("Enter the first number:\n");
    scanf("%d",&iFirstNum);
     printf("Enter the Second number:\n");
    scanf("%d",&iSecNum);
    
    bDiff=checkDifferenceIsPositive(iFirstNum,iSecNum);
    if(bDiff==true)
    {
    	printf("Difference is Positive");
    }
    else
    {
    	printf("Difference is Negetive ");
    }
    return 0;

}