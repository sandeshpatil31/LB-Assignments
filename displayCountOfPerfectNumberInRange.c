/*  Problem statement :- Write a program to count and print the total number of perfect
numbers within a specified range [low, high]. */


#include<stdio.h>

void printCountPerfectNumbersInRange(int iLow,int iHigh)   // function return nothing
{
     int iCnt=0;
     int iFactCount=0;

     while(iLow<=iHigh)                     // use for use iterate the given range
     {
         int iNum=iLow;
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
         	 iFactCount++;             // count perfect Number 
         }
         iLow++;                        // while loop increment
     }  

     printf("%d\n",iFactCount);   
}   

int main()
{    
  
	int iLow=15;
	int iHigh=510;

    printCountPerfectNumbersInRange(iLow,iHigh);   // pass by value
	return 0;
}

