/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:04:36 by estegana          #+#    #+#             */
/*   Updated: 2023/10/06 12:04:38 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int digitcounter(int n)
{
    int i;

    i = 0;
    if (n < 0)
        i = i + 1;
    while (n != 0)
    {
        i++;
        n = n / 10;
    }
    return (i);
}

char    *ft_itoa(int nb)
{
    char    *s;
    size_t  i;
    long int    nb;
    int neg;

    
}