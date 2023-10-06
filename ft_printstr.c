/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:00:12 by estegana          #+#    #+#             */
/*   Updated: 2023/10/06 12:00:22 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int ft_putchar(char c)
{
    char c;

    write(1, &c, 1);
    return (0);
}

int ft_putstr(char *str)
{
    int i;

    i= 0;
    if (!str)
    {
        write(1, "(null)", 7);
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
