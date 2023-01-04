#include "main.h"
/**
  * *helperFunction - checks if sart of number exists
  *@num: number.
  *@pSgrt: poissible sqrt of number.
  *
  Return: sqrt of number ot -1 for error.
  */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSgrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));

}


