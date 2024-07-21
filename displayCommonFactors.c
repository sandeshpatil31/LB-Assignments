/* Problem Statement - Program to find and print the common factors of two
given numbers. */
 
#include<stdio.h>

 void  findCommonFactors(int iNum1,int iNum2)          // calling function return nothing
{

	 for (int iCnt1 = 1; iCnt1<=iNum1/2; iCnt1++)
	 {
	 	for (int iCnt2 = 1; iCnt2<=iNum2/2; iCnt2++)
	 {
	 	
	 	if(iNum1%iCnt1==0 && iNum2%iCnt2==0)             // find factors 
	 	{
               if (iCnt1==iCnt2)                       //  match common factor 
               {
               	  printf("%d\n",iCnt2);              // print common factor
               }
		}
	 }
	}

}

int main()
{
	int iNum1=6;
	int iNum2=12;
	
	findCommonFactors(iNum1,iNum2);    // caller function 

	return 0;
}