#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(const char c)
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

int main()
{
    //char letter = 'U';
    char *name = "Uatilla";
    char *ptr = &*name;
    int counter = printf("Or_printf: %p\n", ptr);
    printf("%d\n", counter);
    int counter2 = ft_printf("ft_printf: %p\n", ptr);
    printf("%d\n", counter2);
    


    return (0);
}