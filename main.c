#include <stdio.h> 
#include <stdlib.h>
//basic c programming
//standard input/output function which contains printf(), scanf() functions
//place all the functions above main()
//save before compile 
//reference : https://www.programiz.com/c-programming/examples/swapping
// added my own twist using menu system.

//swap num using temp variable
int withTemp(){
   int first,second,temp;
   printf("\nSwapping Numbers using temporary variables\n");
   printf("Enter first number: ");
   scanf("%d", &first);
   printf("Enter second number: ");
   scanf("%d", &second);

   //Assigned first value to temp
   temp = first;

   //Assigned second value to first
   first = second;

   //Assigned second to temp[first]
   second = temp;

   printf("\nAfter swapping, first number is: %d\n",first);
   printf("After swapping, second number is: %d\n\n",second);
   menu();//have error implicit declaration of function but the code still runs no idea how.
   
}

int withoutTemp(){
   int a, b;
   printf("\nSwapping Numbers without using temporary variables\n");
   printf("Enter first number: ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);

   //a = (value a - value b)
   a = a - b;

   //b = (value a - value b) + value b -> value a
   b = a + b;

   //a = value a - (value a - value b) // value a - value a + value b -> value b
   a = b - a;

   printf("\nAfter swapping, first number is: %d\n",a);
   printf("After swapping, second number is: %d\n\n",b);
   menu();
}  

//creates the menu options selections
int menu(){
   int num;
   printf("\nPress 1 - Swapping Numbers using temporary variables");
   printf("\nPress 2 - Swapping Numbers without using temporary variables");
   printf("\nPress 0 - To Exit\n");
   //"%d" is for formater specifier, &num will put the value in the reference address in memory
   scanf("%d",&num);
   //printf("%d",num);
   //if else statement for decision making.
   if(num == 1){
      withTemp();
   }
   else if(num == 2){
      withoutTemp();
   }
   else if(num == 0){
      printf("Thanks and Have a good day\n");
      exit(0);
   }
   else{
      printf("Invalid input please try again\n");
      menu();
   }
}


//main method that calls menu()
//return 0 means end execution
int main() {
   menu();
   return 0;
}

