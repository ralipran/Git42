/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:17:03 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/28 22:47:27 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb && nb <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("La racine carée est : %d\n", ft_sqrt(16));
	return (0);
}*/