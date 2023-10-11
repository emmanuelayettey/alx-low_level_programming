#include "main.h"

/**
* main - a program that returns the largest of 3 numbers
* Return: 0 (Success)
*/

int largest_number(int a, int b, int c)
{

      int largest;
      if (a > b && a > c)
     {
         largest = a;
     }
     else if (a > b && c > a)
     {
         largest = c;
     }
     else if (b > c)
     {
          largest = b;
     }
     else
     {
          largest = c;
     }
return (largest);
}
