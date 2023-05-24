#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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

int	ft_putchar(const char c)
{
	return(write(1, &c, 1));
}

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
int    flag_conversor(char flag, va_list args)
{
    int letter_counter = 0;
    if(flag == 'c')
        letter_counter += ft_putchar(va_arg(args, int));//I CAN'T USE FT_PUTCHAR_FD BECAUSE IT RETURNS NOTHING.
    if(flag == 's')
    
        letter_counter += ft_putstr(va_arg(args, char *));
    else
    {
        //WHAT TO PRINT WHEN THE FLAG IS NOT IN THE MANDATORY PART?
    }
	return (letter_counter);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    const char *ptr = str;
    int letter_counter = 0;

    va_start(args, str);
    while(*ptr != '\0')
    {
        if(*ptr == '%')
        {
            ptr++;
            letter_counter += flag_conversor(*ptr, args);       
        }
        else
        {
            letter_counter += ft_putchar(*ptr);//I CAN'T USE FT_PUTCHAR_FD BECAUSE IT RETURNS VOID.
        }
        ptr++;
    }
    va_end(args);
    return(letter_counter);
}

int main()
{
    char c_test = 'U';
    char *s_test = "Uatilla";

    printf("%d\n",printf("Or_printf: [%c]\n", c_test));
    printf("%d\n",ft_printf("ft_printf: [%c]\n", c_test));
    printf("%d\n",printf("Or_printf: [%s]\n", s_test));
    printf("%d\n",ft_printf("ft_printf: [%s]\n", s_test));

    return (0);
}