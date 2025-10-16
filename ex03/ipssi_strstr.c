char	*ipssi_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		cache;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
		{
			cache = i;
			while (to_find[j++] == str[i++])
			{
				if (to_find[j] == '\0')
					return (str + cache);
			}
			i = cache;
		}
		i++;
		j = 0;
	}
	return ('\0');
}
