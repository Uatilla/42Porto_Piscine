
#include <stdio.h>


char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	//1) Check if the input is less or equal than 0, if yes: change sign variable to -1.
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	/*2) The function */
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
    if (argc == 3)
    {
        while (i <= 16)
        {
        	printf("Base [%d]: %d\n", i, ft_atoi_base(argv[1], i));
    		i++;
    	}
    }
    return (0);
}
