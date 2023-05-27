#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
    return(i);
}

int ft_hex_base(unsigned long decimal_address, int flag)
{
    int letter_counter;
    char    *base;
    
    letter_counter = 0;
    if (flag == 'X')
        base = "0123456789ABCDEF";
    if (flag == 'x')
        base = "0123456789abcdef";
    if (decimal_address >= 16)
    {
        letter_counter += ft_hex_base(decimal_address / 16, flag);
        letter_counter += ft_hex_base(decimal_address % 16, flag);
    }
    else
    {
        letter_counter += ft_putchar(base[decimal_address]);
    }
    return(letter_counter);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int letter_counter = 0;

    va_start(args, str);
    while(*str != '\0')
    {
        if(*str == '%')
        {
            str++;
            if (*str == 'p')
            {   letter_counter += ft_putstr("0x");
                letter_counter += ft_hex_base(va_arg(args, unsigned long), 'x');            
            }
        }
        else
            letter_counter += write(1, &*str, 1);
        str++;
    }
    va_end(args);
    return(letter_counter);
}
#include "libft.h"*/

/*static	int	ft_get_len(long int n)
{
	long int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = n *(-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*inp_itoa(long int num, int len, char *str_ft_itoa)
{
	int	i;

	i = 1;
	if (num == 0)
		str_ft_itoa[0] = '0';
	while (num > 0)
	{
		str_ft_itoa[len - i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	return (str_ft_itoa);
}

char	*ft_itoa(int n)
{
	char	*str_ft_itoa;
	char	*str_ft_itoa2;
	long	num;
	int		len;

	len = ft_get_len(n);
	str_ft_itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_ft_itoa)
		return (NULL);
	if (n < 0)
	{
		num = (long)n * (-1);
		str_ft_itoa[0] = '-';
	}
	else
		num = n;
	str_ft_itoa2 = inp_itoa(num, len, str_ft_itoa);
	str_ft_itoa2[len] = '\0';
	return (str_ft_itoa2);
}*/

int main() {
    unsigned int hypothesis1 = 0;
    unsigned int hypothesis2 = -0;
    unsigned int hypothesis3 = 10;
    unsigned int hypothesis4 = -10;
    unsigned int hypothesis5 = 4294967295;
    //unsigned int hypothesis6 = -4294967294;
    unsigned int hypothesis7 = 0xFFFFFFFF;
    unsigned int hypothesis8 = 0xABCDEF;
    unsigned int hypothesis9 = 0x0;
    unsigned int hypothesis10 = 0x4D2;
    unsigned int hypothesis11 = -0x4D2;

    printf("1) 0: %u\n", hypothesis1);
    printf("2) -0: %u\n", hypothesis2);
    printf("3) 10: %u\n", hypothesis3);
    printf("4) -10: %u\n", hypothesis4);
    printf("5) 4294967295: %u\n", hypothesis5);
    //printf("6) -4294967294: %u\n", hypothesis6);
    printf("7) 0xFFFFFFFF: %u\n", hypothesis7);
    printf("8) 0xABCDEF: %u\n", hypothesis8);
    printf("9) 0x0: %u\n", hypothesis9);
    printf("10) 0x4D2: %u\n", hypothesis10);    
    printf("10) -0x4D2: %u\n", hypothesis11);  

    return (0);
}