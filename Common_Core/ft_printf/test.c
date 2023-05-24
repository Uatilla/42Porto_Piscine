#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putchar(const char c)
{
	return(write(1, &c, 1));
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
int    flag_conversor(char flag, va_list args)
{
    /*if(flag == 'c')
        write(1,&"c",1);
    else if(flag == 's')
        write(1,&"s",1);
    else if(flag == 'p')
        write(1,&"p",1);
    else if(flag == 'd')
        write(1,&"d",1);
    else if(flag == 'i')
        write(1,&"i",1);
    else if(flag == 'u')
        write(1,&"u",1);
    else if(flag == 'x')
        write(1,&"x",1);
    else if(flag == 'X')
        write(1,&"X",1);
    else if(flag == '%')
        write(1,&flag,1);
    else
    {
        //WHAT TO PRINT WHEN THE FLAG IS NOT IN THE MANDATORY PART?
    }*/
    int	c;

	c = 0;
	if (flag == '%')
		c += write(1, &flag, 1);
	if (flag == 'c')
		c += ft_putchar(va_arg(args, int));
	if (flag == 's')
		//c += ft_putstr(va_arg(args, char *));
	if (flag == 'd' || flag == 'i')
		//c += ft_putnbr(va_arg(args, int));
	if (flag == 'x' || flag == 'X')
		//c += ft_hex_base(va_arg(args, unsigned int), flag);
	if (flag == 'p')
	{
		c += write(1, "0x", 2);
		//c += ft_hex_base(va_arg(args, unsigned long), 'x');
	}
	if (flag == 'u')
		//c += ft_ubase(va_arg(args, unsigned int));
	return (c);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    const char *ptr = str;

    va_start(args, str);
    while(*ptr != '\0')
    {
        if(*ptr == '%')
        {
            *ptr++;
            flag_conversor(*ptr, args);          
        }
        else
        {
            ft_putchar_fd(*ptr, 1);
        }
        ptr++;
    }
    va_end(args);
    return(ft_strlen(str));//THE FUNCTION DOESN'T RETURN THE SIZE OF ALL CONST CHAR*!
}

int main()
{
    char c_test = 'U';
    char *s_test = "Test";
    char *p_test = &c_test;
    int d_test = 1;
    int i_test = 052;
    unsigned int u_test = 10;
    int x_test = 42;
    int X_test = 42;
    int percent_test = 100;


    printf("printf: [%c]\n", c_test);
    ft_printf("ft_printf: [%c]\n", c_test);
    printf("printf: [%s]\n", s_test);
    ft_printf("ft_printf: [%s]\n", s_test);
    printf("printf: [%p]\n", p_test);
    ft_printf("ft_printf: [%p]\n", p_test);
    printf("printf: [%d]\n", d_test);
    ft_printf("ft_printf: [%d]\n", d_test);
    printf("printf: [%i]\n", i_test);
    ft_printf("ft_printf: [%i]\n", i_test);
    printf("printf: [%u]\n", u_test);
    ft_printf("ft_printf: [%u]\n", u_test);
    printf("printf: [%x]\n", x_test);
    ft_printf("ft_printf: [%x]\n", x_test);
    printf("printf: [%X]\n", X_test);
    ft_printf("ft_printf: [%X]\n", X_test);
    printf("printf: [%%]\n", percent_test);
    ft_printf("ft_printf: [%%]\n", percent_test);
    printf("printf: [%k]\n"); //SOLVE THIS EXAMPLE, WHAT TO DO?

    return (0);
}