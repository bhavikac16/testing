#include <stdio.h>

int main() {

  char x;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &x);
  printf("Enter the two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (x) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
