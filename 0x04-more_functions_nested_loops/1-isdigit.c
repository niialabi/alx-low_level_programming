/**
 * _isdigit - Checks if variable c is a digit
 * @c: represents the int. to be checked
 * Description: The program prints 1 if value of c is a digit & 0 if otherwise
 *
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
