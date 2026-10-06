/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:14:03 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/06 10:14:09 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int main(void)
{
    int     orig_ret;
    int     ft_ret;
    int     num = 42;
    void    *ptr = &num;

    // 1. Character %c
    printf("[Test %%c]\n");
    orig_ret = printf("Original : %c\n", 'H');
    ft_ret = ft_printf("Mi printf: %c\n", 'H');
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 2. String %s (Normal y Nulo)
    printf("[Test %%s]\n");
    orig_ret = printf("Original : %s\n", "Hola Mundo");
    ft_ret = ft_printf("Mi printf: %s\n", "Hola Mundo");
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 3. Pointer %p (Normal)
    printf("[Test %%p]\n");
    orig_ret = printf("Original : %p\n", ptr);
    ft_ret = ft_printf("Mi printf: %p\n", ptr);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 4. Pointer %p (NULL)
    printf("[Test %%p (NULL)]\n");
    orig_ret = printf("Original : %p\n", NULL);
    ft_ret = ft_printf("Mi printf: %p\n", NULL);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 5. Decimal %d (Caso INT_MIN)
    printf("[Test %%d (INT_MIN)]\n");
    orig_ret = printf("Original : %d\n", (int)-2147483648);
    ft_ret = ft_printf("Mi printf: %d\n", (int)-2147483648);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 6. Integer %i
    printf("[Test %%i]\n");
    orig_ret = printf("Original : %i\n", 42);
    ft_ret = ft_printf("Mi printf: %i\n", 42);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 7. Unsigned %u (Caso límite)
    printf("[Test %%u]\n");
    orig_ret = printf("Original : %u\n", 4294967295U); // Límite de unsigned int
    ft_ret = ft_printf("Mi printf: %u\n", 4294967295U);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 8. Hexadecimal %x (Minúsculas)
    printf("[Test %%x]\n");
    orig_ret = printf("Original : %x\n", 255);
    ft_ret = ft_printf("Mi printf: %x\n", 255);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 9. Hexadecimal %X (Mayúsculas)
    printf("[Test %%X]\n");
    orig_ret = printf("Original : %X\n", 255);
    ft_ret = ft_printf("Mi printf: %X\n", 255);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 10. Porcentaje %%
    printf("[Test %%]\n");
    orig_ret = printf("Original : %%\n");
    ft_ret = ft_printf("Mi printf: %%\n");
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    // 11. Test Combinado
    printf("[Test Combinado]\n");
    orig_ret = printf("Original : %s tiene %d gatos al %d%% y su ID es %x\n", "Juan", 3, 100, 4095);
    ft_ret = ft_printf("Mi printf: %s tiene %d gatos al %d%% y su ID es %x\n", "Juan", 3, 100, 4095);
    printf("Retornos | Orig: %d | Mi: %d\n\n", orig_ret, ft_ret);

    return (0);
}
