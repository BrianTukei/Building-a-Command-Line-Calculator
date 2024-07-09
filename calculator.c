#include <stdio.h>

// Main function where program execution begins
int main() {
// Declare variables
  char op; // Operator (+, -, *, /)
  double first, second; // Operands

  // Prompt user for operator
  printf("Enter an operator (+, -, *, /): ");

  // Read operator input from user
  scanf("%c", &op);

  // Prompt user for operands
  printf("Enter two operands: ");

  // Read operands input from user
  scanf("%lf %lf", &first, &second);

  // Switch case to perform operation based on operator
  switch (op) {
	  // Case for addition
    case '+':
	    // Print result of addition
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;

      // Case for subtraction
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;

      // Case for multiplication
    case '*':
      // Print result of multiplication
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;

      // Case for division
    case '/':
      // Print result of division
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;

      // Default case for invalid operator
    default:
      // Print error message for invalid operator
      printf("Error! operator is not correct");
  }

  // Return 0 to indicate successful execution of program
  return 0;
}
