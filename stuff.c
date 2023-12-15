#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   printf("*     *\n *   *\n  * *\n   *\n  * *\n *   *\n*     *\n");
//   return 0;
// }

int main()
{
  int year;
  int age;
  printf("Enter current year: ");
  scanf("%d", &year);
  printf("Enter your current age: ");
  scanf("%d", &age);
  printf("birth year = %d\n",year-age);
  return 0;
}