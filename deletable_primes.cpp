/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */

 #include "deletable_primes.h"

 int get_length(int num);
 bool is_prime(int num);

 unsigned long remove_digit(int index, unsigned long number)
 {
   unsigned long left;
   unsigned long rigth;
   unsigned long new_number;

   left=number/pow(10,index+1);
   rigth=number%(unsigned long)pow(10,index);
   new_number=left*pow(10,index)+rigth;
   return new_number;

 }

 int get_ways(unsigned long p)
 {
  int number = (int)p;
  int counter = 0;
  int temp = number;
  int len =get_length(temp);
  int ways_temp;

  for (int i = 0; i < len; i++)
  {
    ways_temp = get_ways(remove_digit(i,temp));
    if (len != 1 &&  is_prime(ways_temp))
    {

      counter += ways_temp;
    }
    if (get_length(number) == 1 )
    {
      if (is_prime(temp) == true)
      {
        counter ++;
      }
    }

  }
  return counter;

 }
 int get_length(int number)
{
  int counter = 0;
  int temp = number;
  while (temp != 0)
  {
    temp = temp/10;
    counter++;
  }
  return counter;
}

bool is_prime(int number)
{
  int index = 2;
  int temp = number;
  while (index <= sqrt(number))
  {
    if (temp % (int) index == 0)
    {
      return false;
    }
    index++;
  }
  return true;
}
