/* Problem Statement - Write a program to find and print the product of all factors of a
given number. */
 
#include<stdio.h>

 void  printProductAllFacotrsOfNumber(int iNum)          // calling function return nothing
{
     int iProduct=1;
     for (int iCnt = 1; iCnt<=iNum/2; iCnt++)
     {
        
        if(iNum%iCnt==0)
        {
               iProduct*=iCnt;             
        }
     }
     printf("%d\n",iProduct); 

}

int main()
{
    int iNum=12;
   
   printProductAllFacotrsOfNumber(iNum);    // caller function 

    return 0;
}