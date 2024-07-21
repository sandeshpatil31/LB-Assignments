/*  Problem statement :-Write a program to calculate and print the sum of all perfect
numbers within a specified range [low, high]. */


#include<stdio.h>

void printSumOfAllPerfectNumbersInRange(int iLow,int iHigh)   // function return nothing
{
     int iCnt=0;
     int iFactSum=0;

     while(iLow<=iHigh)                     // use for use iterate the given range
     {
         int iNum=iLow;
         int iSum=0;
         for (iCnt= 1;iCnt<=iLow/2; iCnt++)   // for use to find factor given number by while loop
         {   
             
             if(iLow%iCnt==0)            // check factor of ilLow
             {
             	iSum+=iCnt;             // summation of all factor of iLow
             }
         }
         if (iSum==iNum)               // check the perfect or not 
         {
         	 iFactSum+=iSum;             // Sum of all perfect number
         }
        iLow++;                        // while loop increment
     }  
     printf("%d\n",iFactSum);   
}   

int main()
{    
  
	int iLow=5;
	int iHigh=30;

    printSumOfAllPerfectNumbersInRange(iLow,iHigh);   // pass by value
	return 0;
}

