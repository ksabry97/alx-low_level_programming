/**
 * _memset - makes encrypted message
 *@s :pointer
 *@b :charcater
 *@n :integer
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
