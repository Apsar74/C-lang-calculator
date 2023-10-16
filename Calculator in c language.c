#include <stdio.h>
int main(){
  char operator;
  double num1,num2;

  while (1){
   printf("Enter operator ( +, - , * , /) or 'q' to quit : ");
   scanf(" %c", &operator);

   if (operator == 'q'){
    printf("Exiting , programme");
    break;
   }
  

  printf("Enter two numbers : ");
  scanf("%lf , %lf", &num1, &num2 );

  switch (operator){
    case '+':
    printf("Result : %lf\n", num1+num2);
    break;
    
    case '-':
    printf("Result : %lf\n", num1-num2);
    break;
    
    case '*':
    printf("Result : %lf\n", num1*num2);
    break;
    
    case '/':
    if (num2 !=0){
      printf("Result : %lf\n",num1/num2);
    }else{
      printf("Error : Divison by zero\n");
      continue;
    }
    break;
  default:
    printf("Invalid operator\n");
    continue;
    }
   }
  return 0;
}





