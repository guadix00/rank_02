/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:38:18 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 21:45:03 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int char_to_value(char c, int base)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return -1; 
}

int ft_atoi_base(const char *str, int str_base)
{
    if (!str || str_base < 2 || str_base > 16)
        return 0;

    int sign = 1;
    int result = 0;

    while (*str == ' ' || *str == '\t')
        str++;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    while (*str)
    {
        int value = char_to_value(*str, str_base);
        if (value == -1 || value >= str_base)
            break;
        result = result * str_base + value;
        str++;
    }

    return result * sign;
}
#include <stdio.h>

int main()
{
    const char *test1 = "1a";
    const char *test2 = "-2F";
    const char *test3 = "  +10";
    const char *test4 = "zzz"; 

    printf("Test 1 (base 2): %d\n", ft_atoi_base(test1, 2)); 
    printf("Test 2 (base 16): %d\n", ft_atoi_base(test2, 16)); 
    printf("Test 3 (base 10): %d\n", ft_atoi_base(test3, 10)); 
    printf("Test 4 (base 16): %d\n", ft_atoi_base(test4, 16)); 

    return 0;
}
