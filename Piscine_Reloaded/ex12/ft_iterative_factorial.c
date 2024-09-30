/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:46:02 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/24 16:48:14 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
	}
	return (nb);
}
/*#include <stdio.h>

int	main(void)
{
	printf("La factorielle est : %d\n", ft_iterative_factorial(0));
	return (0);
}*/