/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:33:52 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/28 12:34:01 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_digit(char digit, int base_goal)
{
	int	max_digit;

	
	/*THIS STEP IS HERE TO DEFINE HOW MUCH CHARACTERS MUST BE ANALYZED IN THE PROGRAM
	SETTING THE VALUE OF MAX_DIGIT VARIABLE*/
	
	
	/*4) If the base is less or equal to 10, so only look at NUMBERS digit
	variable (char).*/
	if (base_goal <= 10)
		max_digit = base_goal + 48;
		//If base_goal equal 1, then max digit will be 49 that can be translated as '1'.
	else
		max_digit = base_goal - 10 + 'a';
	/*If the base_goal is bigger than 10 it means that the program should consider
	letters too. In this case the rul to define max_digit change.
	
	For example: base_goal = 11, then the max_digit will be 11 - 10 + 97: 
	max_digit = 98.*/
	
	
	/*NOW IT'S TIME TO RETURN THE CHAR IN IT'S INT FORM*/
	
	/*5) If the digit is a number and it's less or equal to the max_digit
		Return the digit in a int format.
		
	If the digit is a char (letters from 'a' to 'f') and it's less or equal to max_digit
		Return the digit in a int format using another conversion method.*/
	if (digit >= '0' && digit <= '9' && digit <= max_digit)
		return (digit - 48);
	else if (digit >= 'a' && digit <= 'f'  && digit <= max_digit)
		return (10 + digit - 97);
	else
		return (-1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_atoi_base(const char *str, int int_base)
{
	int	i;
	int	sign;
	int	digit;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	/*1) Check if the number is negative"*/
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	/*2) Use function to_lower to convert each letter at a time into lowercase
	and input it in the get_digit function.*/
	/*3) Use function get_digit to return into the digit variable the value of the char
	converted while it is bigger or equal to 0.*/
	while ((digit = get_digit(to_lower(str[i]), int_base)) >= 0)
	{
		result = result * int_base;
		result = result + (digit * sign);
		++i;
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
