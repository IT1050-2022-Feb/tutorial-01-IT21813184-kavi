/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int mark1,mark2;
    int calculate=0;
    float average=0;

     printf("enter your mark1:");
     scanf("%d",&mark1);
     printf("enter your mark2:");
     scanf("%d",&mark2);
     calculate=mark1+mark2;
     printf("calculate is %d\n",calculate);
     average=calculate/2;
     printf("average is %.2f\n",average);
     
  
  return 0;
}

