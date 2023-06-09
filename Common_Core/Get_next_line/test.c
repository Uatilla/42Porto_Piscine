#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i]) != '\0' || (unsigned char)c == '\0')
	{
		if ((s[i]) == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*ptr_strjoin;
	size_t	i;
	size_t	j;

	ptr_strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr_strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		((char *)ptr_strjoin)[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		((char *)ptr_strjoin)[i] = s2[j];
		i++;
		j++;
	}
	((char *)ptr_strjoin)[i] = '\0';
	return ((char *)ptr_strjoin);
}