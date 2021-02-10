#include <stdio.h>


int main(){
   int value;

   //*** Input
   printf("Enter a value: ");
   scanf("%d",&value);

   printf("Before If\n");
   if(value>5){
      // TRUE
      if(value<10){
	// TRUE
   	printf("Value is greater than 5 and less than 10\n");
      }else{
   	printf("Value is greater than 5 and greater than 10\n");
      }
   }

   if(value>5||value<10){
   	printf("Value is greater than 5 and less than 10\n");
   }
   return 0;

}
