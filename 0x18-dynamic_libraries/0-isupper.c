/**
 * _isupper - a function that checks for uppercase character.
 * @c:
 *
 * Return:  return 1 if uppercase and 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
