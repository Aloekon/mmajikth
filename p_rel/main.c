#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "ft_print_alphabet.c"
#include "ft_print_numbers.c"
#include "ft_is_negative.c" 
#include "ft_ft.c"
#include "ft_swap.c"
#include "ft_div_mod.c"
#include "ft_iterative_factorial.c"
#include "ft_recursive_factorial.c"
#include "ft_sqrt.c"
#include "ft_putstr.c"
#include "ft_strlen.c"
#include "ft_strcmp.c"
#include "ft_range.c"



void    ft_putchar(char a)
{
    write(1, &a, 1);
}

//void ft_print_alphabet(void);
//void ft_print_numbers(void);
//void ft_is_negative(int n);
//void ft_ft(int *nbr);
//void    ft_swap(int *a, int *b);
//void    ft_div_mod(int a, int b, int *div, int *mod);
//int ft_iterative_factorial(int nb);
//int ft_recursive_factorial(int nb);
//int ft_sqrt(int nb);
//void    ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
int     *ft_range(int min, int max);



int main(void)
{
    int *a;
    char s1[] = "Helloworlk";
    char s2[] = "Helloworld";
    int i;
    int mod;

    //ft_putstr(str);
    a = ft_range(-20, 20);
    i = 0;
    while (i < 40)
    {
        printf("%d\n", a[i]);
        i++;
    }
    free(a);
    return 0;
}