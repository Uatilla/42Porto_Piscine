#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	long unsigned int	i;
	char				*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

char	*ft_strchr_aija(char *s, int c)
{
	char	ch;

	ch = (char)c;
	if (!s)
		return (0);
	while (*s != '\0' && *s != ch)
		s++;
	if (*s == ch)
		return (s);
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i]) != '\0' || (unsigned char)c == '\0')//verificar essa condição
	{
		if ((s[i]) == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int main()
{
    char *str = "paçoca";
    char *str2 = "paçoca\n";
	char *str3 = "paço\nca";
	
    printf("Aija_str: %s| - str: %s|\n", ft_strchr_aija(str, '\n'), ft_strchr(str, '\n'));
	printf("Aija_str2: %s| - str: %s|\n", ft_strchr_aija(str2, '\n'), ft_strchr(str2, '\n'));
	printf("Aija_str3: %s| - str: %s|\n", ft_strchr_aija(str3, '\n'), ft_strchr(str3, '\n'));
	ft_bzero(str3, 7);
	printf("Aija_str3: %s| - str: %s|\n", ft_strchr_aija(str3, '\0'), ft_strchr(str3, '\0'));
    return (0);
}