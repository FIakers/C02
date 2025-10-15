int	ipssi_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	diff = 0;
	if (n < 1)
		return (0);
	else
	{
		while (i < n)
		{
			diff += ((s1[i]) - (s2[i]));
			i++;
		}
		return (diff);
	}
}
