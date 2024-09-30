/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:12:53 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/28 23:42:46 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>

int	main()
{
	char	str1[] = "J'aime laca";
	char	str2[] = "J'ai";
	printf("La différence entre ces 2 strings est : %d\n", ft_strcmp(str1, str2));
	return (0);
}*/