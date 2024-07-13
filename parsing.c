/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:58:53 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/13 14:58:55 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);

int	check(int ac1, char **av1)
{
	if (ac1 != 2)
		return (1);
	if (ft_strlen(av1[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!tab)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
