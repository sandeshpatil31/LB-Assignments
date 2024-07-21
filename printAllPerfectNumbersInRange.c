/* Problem Statement :- Write a program to find and print all perfect numbers within a
specified range [low, high].   */

#include<stdio.h>

void printAllPerfectNumbersInRange(int iLow,int iHigh)   // this function return nothing
{

     while(iLow<=iHigh)                     // use for use iterate the given range
     {
          int iNum=iLow;
          int iCnt=0;
          int iSum=0;

         for (iCnt= 1;iCnt<=iLow/2; iCnt++)       // for used to find factor given number by while loop
         {   
             if(iLow%iCnt==0)            // check factor of ilLow
             {
             	iSum+=iCnt;             // summation of all factor of iLow
             }
         }

         if (iSum==iNum)               // check the perfect or not 
         {
         	 printf("%d\n",iLow);
         }
         iLow++;                        // while loop increment
     }     
}   

int main()
{    
  
	int iLow=15;
	int iHigh=510;

    printAllPerfectNumbersInRange(iLow,iHigh);   // pass by value
	return 0;
}

