#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   printf("*     *\n *   *\n  * *\n   *\n  * *\n *   *\n*     *\n");
//   return 0;
// }

// int main()
// {
//   int year;
//   int age;
//   printf("Enter current year: ");
//   scanf("%d", &year);
//   printf("Enter your current age: ");
//   scanf("%d", &age);
//   printf("birth year = %d\n",year-age);
//   return 0;
// }

// int main()
// {
//   double height, width;
//   double area;
//   printf("Enter height: ");
//   scanf("%lf", &height);
//   printf("Enter Width: ");
//   scanf("%lf", &width);
//   area = height/width;
//   printf("Area = %lf", area);
//   return 0;
// }

// Here we are changing the type of num1 so that we don't get the limitations of the int type without changing the int type in the variable
// int main() {
//   int num1 = 5, num2 = 2;
//   double result;
//   result = (double)num1/num2;
//   printf("Result = %lf", result);
// }

// int main() {
//   int grade1 = 90, grade2 = 70, grade3 = 93;
//   double average;
//   average = (grade1 + grade2 + (double)grade3)/3;
//   printf("Average = %.2lf", average);
// }

int main() {
  double TempC, TempF;
  printf("Input T(C)");
  scanf("%lf", &TempC);
  TempF = TempC*1.8 + 32;
  printf("The temperature in fehrenheit is: %.2lf", TempF);
}