/**
 * _strcat - appending string to dest string
 * @dest: passed by ref
 * @src: passed by ref
 * Return: return char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
