#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int tem_sinal(char *base)
{
    int i;

    i = 0;
    while(base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
        {
            return -1;
        }
    }
    return 1;
}

int samec(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(base[i] != '\0')
    {
        j = 0;
        while(base[j] != '\0')
        {
            if (base[i] == base[j])
                return -1;
            j++;
        }
        i++;
    }
    return 1;
}

int	negative(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	print(int *v, int i)
{
	while (i < 11)
	{
		v[i] = 48 + v[i];
		write (1, &v[i], 1);
		i++;
	}
}

void	menorquebase(int nb, int *v, int length)
{
	if (nb < length)
	{
		v[0] = 0;
		v[10] = nb % length;
	}
}

void	ft_putnbr(int nb, char *base)
{
	int	i;
	int	v[11];

	i = 10;
	v[0] = 1;
	nb = negative(nb);
	menorquebase(nb, v, ft_strlen(base));
	while (v[0] != 0)
	{
		if (nb > ft_strlen(base) - 1)
		{
			v[i] = nb % ft_strlen(base);
			nb = nb / ft_strlen(base);
		}
		if (nb / ft_strlen(base) == 0)
		{
			v[i - 1] = nb % ft_strlen(base);
			v[0] = 0;
		}
		i--;
	}
	print(v, i);
}

void ft_putnbr_base(int nbr, char *base)
{
    printf("%d", nbr);
    if (base[0] == '\0' || ft_strlen(base) < 2 || tem_sinal(base) < 0 || samec(base) < 0)
        return ;
    ft_putnbr(nbr, base);
}

int main(void)
{
    char *base = "01";
    int nbr = 42;
    printf("%d", nbr);
    ft_putnbr_base(nbr, base);
}