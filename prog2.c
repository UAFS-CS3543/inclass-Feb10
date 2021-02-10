#include <stdio.h>


int main(){
   int value;
   int index;
   double dvalue = 5.35;

   //*** Input
   printf("Enter a value: ");
   scanf("%d",&value);

   printf("Before Loop\n");
   while(value<10){
      printf("The Value is: %d\n",value);
      value=value+1;
   }
   //Sentinal Loop
   index=0;
   while(index<20){
      printf("Index: %2d\n",index);
      index++;
   }

   for(index=0;index<20;index++){
      printf("Index: %2d\n",index);
   }
   
   printf("Value: %7.3lf\n",dvalue);
   printf("After  Loop\n");
 
   
   return 0;

}
