/**
 * ispal - check if s is palindrome
 * @s: string to check
 * @a: start index of s
 * @l: end index of s
 * Return: 1 if s is palindrome or 0 if not
 */
int ispal(char *s, int a, int l)
{
	if (s[a] != s[l])
		return (0);
	if (a + 2 >= l)
		return (1);
	return (ispal(s, ++a, --l));
}

/**
 * _lastIndexOf - determine the last index of string s
 * @s: string (parameter)
 * Return: -1 if s is empty or the last index of x = (length - 1)
 */
int _lastIndexOf(char *s)
{
	if (s[0] == '\0')
		return (-1);
	if (s[1] == '\0')
		return (0);
	return (1 + _lastIndexOf(s + 1));
}

/**
 * is_palindrome - checks if string s is palindrome
 * @s: string to check
 *
 * Return: 1 if s is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int l = _lastIndexOf(s);

	return (l < 0 ? 0 : ispal(s, 0, l));
}
