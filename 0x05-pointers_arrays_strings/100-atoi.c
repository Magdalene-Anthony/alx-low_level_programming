/**
 * _atoi - convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (temp < '0' || *temp > '9' ))
	{
		if (*temp == '-'0
		         sign *= -1;
		 temp++;
		 }
		 if (*temp 1=
