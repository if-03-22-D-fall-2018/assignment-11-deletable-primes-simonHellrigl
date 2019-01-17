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
 #include <math.h>
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
   return 0;

 }
