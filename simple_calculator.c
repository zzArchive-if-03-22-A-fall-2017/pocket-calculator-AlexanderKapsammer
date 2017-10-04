#include <stdio.h>
double Calculate();
int Choice_is_possible(int input);
double Add();
double Subtract();
double Multiply();
double Divide();
int Get_input();

int main(int argc, char const *argv[]) {
  int choice;
  do {
    choice = Get_input();
    if (choice != -1) {
      double result;
      result = Calculate(choice);
      printf("\nResult: %.2lf\n",result);}
  } while(choice != -1);



  return 0;
}

int Get_input() {
  int choice;

  printf("Simple calculator\n\n");
  printf("Choose one of the following operations:\n   Add (1)\n   Subtract (2)\n   Multiply (3)\n   Divide (4)\n   Stop Program (-1)\nEnter your choice: ");
  do {
    scanf("%d", &choice);
    printf("\n");
    if (Choice_is_possible(choice) == 0) {
      printf("Impossible choice\n");
      printf("Enter your choice: ");
    }
  } while(Choice_is_possible(choice) == 0);
  return choice;
}

int Choice_is_possible(int choice) {
  int possible = 0;
  if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == -1) {
    possible = 1;
  }
  return possible;
}

double Calculate(int choice) {
  double result;
  switch (choice) {
    case -1: break;
    case 1: result = Add(); break;
    case 2: result = Subtract(); break;
    case 3: result = Multiply(); break;
    case 4: result = Divide(); break;
    default: break;
  }
  return result;
}
double Add(){
  printf("Please enter the first operand: ");
  double operand1;
  scanf("%lf",&operand1);
  printf("Please enter the second operand: ");
  double operand2;
  scanf("%lf",&operand2);
  return (operand1 + operand2);
}
double Subtract(){
  printf("Please enter the first operand: ");
  double operand1;
  scanf("%lf",&operand1);
  printf("Please enter the second operand: ");
  double operand2;
  scanf("%lf",&operand2);
  return (operand1 - operand2);
}
double Divide(){
  printf("Please enter the first operand: ");
  double operand1;
  scanf("%lf",&operand1);
  double operand2;
  do {
    printf("Please enter the second operand: ");
    scanf("%lf",&operand2);
    if (operand2 == 0) {
      printf("divide by zero\n");
    }
  } while(operand2 == 0);
  return (operand1 / operand2);
}
double Multiply(){
  printf("Please enter the first operand: ");
  double operand1;
  scanf("%lf",&operand1);
  printf("Please enter the second operand: ");
  double operand2;
  scanf("%lf",&operand2);
  return (operand1 * operand2);
}
