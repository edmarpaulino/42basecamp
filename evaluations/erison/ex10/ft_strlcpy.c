unsigned int	*ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0 ;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		dest[i] = '\0';
	return (&i);
}
