/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:09:38 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/18 15:09:39 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//f() function in use for ft_strmapi() function.
char	f(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	else if (i % 2 != 0 && c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

//print_char() function in use for ft_striteri() function.
void	print_char(unsigned int index, char *c)
{
	printf("index: %d, char: %c\n", index, *c);
}

//del() function in use for ft_lstdelone() function.
void del(void *content)
{
    free(content);
}

int main() 
{
    int num;
    char    c;

    printf("-----------------------------------\n");
    //ft_bzero
    char buffer[20] = "01234567899876543210";
    char buffer_ft[20] = "01234567899876543210";
    int  count;
   
    count = sizeof buffer;
    bzero(buffer, count);
    printf("bzero: %s\n",buffer);
    ft_bzero(buffer_ft, count);
    printf("ft_bzero: %s\n", buffer_ft);
    printf("-----------------------------------\n");
    //ft_isalnum
    c = 'a';
    num = '1';
    ft_isalnum(c);
    printf("isalnum (c): %d\n", isalnum(c));
    printf("ft_isalnum (c): %d\n", ft_isalnum(c));
    printf("isalnum (num): %d\n", isalnum(num));
    printf("ft_isalnum (num): %d\n", ft_isalnum(num));
    printf("-----------------------------------\n");
    //ft_isalpha
    c = 'a';
    printf("isalpha: %d\n", isalpha(c));
    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("-----------------------------------\n");
    //ft_isascii
	num = '1';
	c = 'p';
	printf("isascii (num): %d\n", isascii(num));
	printf("ft_isascii (num): %d\n", ft_isascii(num));
	printf("isascii (c): %d\n", isascii(c));
	printf("ft_isascii (c): %d\n", isascii(c));
    printf("-----------------------------------\n");
    //ft_isdigit
	int a;
    int b;

    a = '1';
    b = 1;
    printf("isdigit (a): %d\n", isdigit(a));
    printf("ft_isdigit (a): %d\n", ft_isdigit(a));
    printf("isdigit (b): %d\n", isdigit(b));
    printf("ft_isdigit (b): %d\n", ft_isdigit(b));
    printf("-----------------------------------\n");
    //ft_isprint
    c = '\t';
    num = 'a';
    printf("isprint (a1): %d\n", isprint(c));
    printf("ft_isprint (a1): %d\n", ft_isprint(c));
    printf("isprint (num): %d\n", isprint(num));
    printf("ft_isprint (num): %d\n", ft_isprint(num));
    printf("-----------------------------------\n");
    //ft_memcpy
    char    source[25] = "source string";
    char    target[25] = "Target";
    char    targetb[25] = "targetb";

    count = 20;
    memcpy(target, source, count);
    printf("memcpy: %s\n", target );
    ft_memcpy(targetb, source, count);
    printf("ft_memcpy: %s\n",targetb);
    printf("-----------------------------------\n");
    //ft_memmove
    char    target1[25] = "Almeida Viana Uatilla";
    char    targetb1[25] = "Almeida Viana Uatilla";

    char    *pos_rep1 = target1 + 8;
    char    *pos_repb1 = targetb1 + 8; 
    char    *source1 = target1;
    char    *sourceb1 = targetb1;
    ft_memmove(pos_repb1, sourceb1, 5);
    memmove(pos_rep1, source1, 5);
    printf("memmove(): %s\n", targetb1);
    printf("ft_memmove(): %s\n", target1);
    printf("-----------------------------------\n");
    //ft_memset
    char my_string[10];
    char my_string2[10];
    char    nume;
    int     countad;

    nume = 'a';
    countad = 10;
    memset(my_string, nume, countad);
    printf("memset: %s\n", my_string);
    
    ft_memset(my_string2, nume, countad);
    printf("ft_memset: %s\n", my_string2);
    printf("-----------------------------------\n");
    //ft_strlcat
    char dest[20] = "Hellowowowo";
    char src[10] = "World";
    int size;

    size = 10;

    printf("ft_strlcat: %zu\n",ft_strlcat(dest, src, size));
    printf("-----------------------------------\n");
    //ft_strlcpy
    char    src1[20] = "Uatilla";
    char    dest1[20] = "Viana";
    int dest_buffer = 2;

    num = ft_strlcpy(dest1, src1, dest_buffer);
    printf("ft_strlcpy: %d\n", num);
    printf("-----------------------------------\n");
    //ft_strlen
    char    *string;
    string = "Uatilla Viana Almeida";
    printf("strlen: %ld\n", strlen(string));
    printf("ft_strlen: %ld\n", ft_strlen(string));
    printf("-----------------------------------\n");
    //ft_toupper
    char    lower = 'a';
    char    lower1 = 'a';
    lower = ft_toupper(lower);
    lower1 = toupper(lower1);
    printf("ft_toupper: %c\n", lower);
    printf("toupper: %c\n", lower1);
    printf("-----------------------------------\n");
    //ft_tolower
    char    upper = 'A';
    char    upper1 = 'A';
    upper = ft_tolower(upper);
    upper1 = tolower(upper1);
    printf("ft_tolower: %c\n", upper);
    printf("tolower: %c\n", upper1);
    printf("-----------------------------------\n");
    //ft_strchr
    char    stri[6] = "Abcde";
    c = 'b';
    printf("ft_strchr: %p\n",ft_strchr(stri, c));
    printf("strchr: %p\n", strchr(stri, c));
    printf("-----------------------------------\n");
    //ft_strrchr
    char    strin[6] = "AbcsA";
    c = 'A';
    printf("ft_strrchr: %p\n",ft_strrchr(strin, c));
    printf("strrchr: %p\n", strrchr(strin, c));
    printf("-----------------------------------\n");
    //ft_strnstr
    char	big_strnstr [20] = "Hello 42 Porto";
	char	little_strnstr [20] = "4";
	printf("ft_strnstr: %s\n", ft_strnstr(big_strnstr, little_strnstr, 20));
    printf("-----------------------------------\n");
    //ft_atoi
    char    *string_atoi = "    +123 abc";
    printf("atoi: %d\n", atoi(string_atoi));
    printf("ft_atoi: %d\n", ft_atoi(string_atoi));
    printf("-----------------------------------\n");
    //ft_calloc
    int *ptr2c = 0;
    ptr2c = (int*) ft_calloc(5, sizeof(int));
    int i = 0;
    printf("ft_calloc: ");
    while(i < 5) {
        printf("%d", *(ptr2c + i));
        i++;
    }
    printf("\n");
    printf("-----------------------------------\n");
    //ft_strdup
    char    *string_strdup = "Ola";
    char    *string_strdup2 = "Ola";
    char    *ptr_string;
    char    *ptr_string2;
    ptr_string = strdup(string_strdup);
    ptr_string2 = ft_strdup(string_strdup2);
    printf("strdup: %s [%p]\n", ptr_string, &ptr_string);
    printf("ft_strdup: %s [%p]\n", ptr_string2, &ptr_string2);
    printf("-----------------------------------\n");
    //ft_substr
    char    *str_substr = "42Porto";
	char    *ptr_substr;
	ptr_substr = ft_substr(str_substr, 2, 4);
    printf("%s\n", str_substr);
	printf("ft_substr: %s\n", ptr_substr);
    printf("-----------------------------------\n");
    //ft_strjoin
    char    *str_strjoin1 = "Uatilla";
    char    *str_strjoin2 = "Viana";
    printf("String 1: Uatilla\n");
    printf("String 2: Viana\n");
    printf("ft_strjoin: %s\n", ft_strjoin(str_strjoin1, str_strjoin2));
    printf("-----------------------------------\n");
    //ft_strtrim
    char    *str_strtrim = "era uma era vez era";  
    char    *rem = "";
    printf("string_orig: %s\n",str_strtrim);
    printf("set_rem: %s\n",rem);
    printf("string_after: %s\n",ft_strtrim(str_strtrim, rem));
    printf("size: %ld\n",ft_strlen(ft_strtrim(str_strtrim, rem)));
    printf("-----------------------------------\n");
    //ft_split
    char **res = ft_split("", '8');

	if (!res)
	{
		printf("Error: ft_split() returned NULL\n");
		return (1);
	}
	for (i = 0; res[i] != 0; i++)
	{
		printf("String[%d] %s\n", i, res[i]);
		free(res[i]);
	}
    printf("String[%d] %s\n", i, res[i]);
	free(res);
    printf("-----------------------------------\n");
    //ft_itoa
    num = -2147483648;
    char    *string_ft_itoa;
    string_ft_itoa = ft_itoa(num);
    printf("ft_itoa: %s\n",string_ft_itoa);
    printf("-----------------------------------\n");
    //ft_strncmp
    char *s1_strncmp;
	char *s2_strncmp;
    int n;
	s1_strncmp = "hola";
	s2_strncmp = "hola";
	n = 0;
	printf("strncmp: %d\n", strncmp(s1_strncmp, s2_strncmp, n));
	printf("ft_strncmp: %d\n", ft_strncmp(s1_strncmp, s2_strncmp, n));
    printf("-----------------------------------\n");
    //ft_strmapi
    char	*str_strmapi = "Hello";
	char	*ptr_strmapi = ft_strmapi(str_strmapi, f);
	printf("ft_strmapi: %s\n", ptr_strmapi);
    printf("-----------------------------------\n");
    //ft_striteri
    char    str_striteri[13] = "Hello!";
    ft_striteri(str_striteri, &print_char);
    printf("-----------------------------------\n");
    //ft_putchar_fd
    printf("ft_putchar_fd:\n");
    c = 'a';
    ft_putchar_fd(c, 1);
    write(1, "\n", 1);
    printf("-----------------------------------\n");
    //ft_putstr_fd
    printf("ft_putstr_fd:\n");
    char    *string_putstr_fd = "Hello";
    ft_putstr_fd(string_putstr_fd, 1);
    write(1, "\n", 1);
    printf("-----------------------------------\n");
    //ft_putstr_fd
    printf("ft_putendl_fd:\n");
    char    *string_putendl_fd = "Hello";
    ft_putendl_fd(string_putendl_fd, 1);
    printf("-----------------------------------\n");
    //ft_putnbr_fd
    int n_ft_putnbr_fd = 0;
    printf("ft_putnbr_fd: \n");
    ft_putnbr_fd(n_ft_putnbr_fd, 1);
    write(1, "\n", 1);
    printf("-----------------------------------\n");
    //ft_lstnew
    t_list *novo;
    char *str_ft_lstnew;
    str_ft_lstnew = "Hello World!";
    novo = ft_lstnew(str_ft_lstnew);
    printf("ft_lstnew: %s\n", (char *)novo->content);
    printf("-----------------------------------\n");
    //ft_lstadd_front
    t_list *head_lstadd_f;
    t_list *new_lstadd_f;
    head_lstadd_f = malloc(sizeof(t_list));
    head_lstadd_f->content = NULL;
    head_lstadd_f->next = NULL;
    new_lstadd_f = malloc(sizeof(t_list));
    new_lstadd_f->content = "new";
    new_lstadd_f->next = NULL;
    head_lstadd_f->next = new_lstadd_f;
    printf("Head: %s next: %p\n", (char *)head_lstadd_f->content, head_lstadd_f->next);
    printf("New: %s next: %p\n", (char *)new_lstadd_f->content, new_lstadd_f->next);
    ft_lstadd_front(&head_lstadd_f, new_lstadd_f);
    printf("Head: %s next: %p\n", (char *)head_lstadd_f->content, head_lstadd_f->next);
    printf("New: %s next: %p\n", (char *)new_lstadd_f->content, new_lstadd_f->next);
    printf("-----------------------------------\n");
    //ft_lstsize
    t_list  *head_lstsize;
    t_list  *new_lstsize;
    t_list  *new_lstsize2;
    //create the nodes
    head_lstsize = ft_lstnew(NULL);
    new_lstsize = ft_lstnew("World");
    new_lstsize2 = ft_lstnew("!");
    //link the nodes
    head_lstsize->next = new_lstsize;
    new_lstsize->next = new_lstsize2;
    printf("ft_lstnew: %s\n", (char *)head_lstsize->content);
    printf("ft_lstnew: %s\n", (char *)head_lstsize->next->content);
    printf("ft_lstnew: %s\n", (char *)head_lstsize->next->next->content);
    printf("ft_lstsize: %d\n",ft_lstsize(head_lstsize));
    printf("-----------------------------------\n");
    //ft_lstlast
    t_list *head_lstlast;
    t_list *second_lstlast;
    t_list *third_lstlast;

    head_lstlast = ft_lstnew("head");
    second_lstlast = ft_lstnew("second");
    third_lstlast = ft_lstnew("Hekki");
    head_lstlast->next = second_lstlast;
    second_lstlast->next = third_lstlast;
    printf("ft_lstlast: %s\n", (char *)ft_lstlast(head_lstlast)->content);
    printf("-----------------------------------\n");
    //ft_lstadd_back
    t_list *lst_addback;
    t_list *new_addback;

    lst_addback = ft_lstnew("1");
    new_addback = ft_lstnew("2");
    ft_lstadd_back(&lst_addback, new_addback);
    printf("ft_lst_addback (1st): %s\n", (char *)lst_addback->content);
    printf("ft_lst_addback (2nd): %s\n", (char *)lst_addback->next->content);
    printf("-----------------------------------\n");
    //ft_lstdelone
    printf("ft_lstdelone\n");
    printf("-----------------------------------\n");
    //ft_lstclear
    printf("ft_lstclear\n");
    printf("-----------------------------------\n");
    //ft_lstiter
    printf("ft_lstiter\n");
    printf("-----------------------------------\n");
    //ft_lstiter
    printf("ft_lstmap\n");
    printf("-----------------------------------\n");
    return 0;
}
