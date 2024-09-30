/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:08:44 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/24 15:29:18 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 6;
    b = 2;

    ft_div_mod(a, b, &div, &mod);
    printf("Division %d\nModulo %d\n", div, mod);
    return(0);
}*/