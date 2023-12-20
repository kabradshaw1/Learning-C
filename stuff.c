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

// int main() {
//   double TempC, TempF;
//   printf("Input T(C)");
//   scanf("%lf", &TempC);
//   TempF = TempC*1.8 + 32;
//   printf("The temperature in fehrenheit is: %.2lf", TempF);
//   return 0;
// }

// int main() {
//   int a_1 = 1, d = 2, n = 9, a_n;
//   a_n = a_1 + (n - 1)*d;
//   printf("%d", a_n);
//   return 0;
// }

// int main() {
//   float a_1, a_n, s_n;
//   int n;
//   printf("input a_1: ");
//   scanf("%f", &a_1);
//   printf("Input n: ");
//   scanf("%d", &n);
//   printf("Input a_n: ");
//   scanf("%f", &a_n);

//   s_n = (a_1 + a_n)*n/2;
//   printf("s_n equals %.2f", s_n);
//   return 0;
// }

// int main() {
//   float hourly, thours, salary;
//   printf("Input hourly rate: ");
//   scanf("%f", &hourly);
//   printf("Input total hours worked in a month: ");
//   scanf("%f", &thours);

//   salary = thours*hourly;
//   printf("Your salary for the month is %f", salary);
// }

// int main() {
//   float distance, speed, time;
//   printf("Input distance: ");
//   scanf("%f", &distance);
//   printf("Input speed: ");
//   scanf("%f", &speed);
//   printf("The time to reach your destination is %.2f hours", distance/speed);
//   return 0;
// }

int main() {
  int seconds, hours, minutes, rseconds;
  printf("input seconds: ");
  scanf("%d", &seconds);
  hours = seconds/3600;
  printf("hours = %d \n", hours);
  minutes = (seconds - hours*3600)/60;
  printf("minutes = %d \n", minutes);
  rseconds = seconds - hours*3600 - minutes*60;
  printf("second = %d \n", rseconds);
  return 0;
}