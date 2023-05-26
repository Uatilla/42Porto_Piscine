#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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
                printf("Arg: %ld\n", va_arg(args, unsigned long));

        }
        else
            write(1, &*str, 1);
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
    ft_printf("Test%p", ptr);
    printf("Pointer: %p\n", ptr);
    


    return (0);
}