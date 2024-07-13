/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseferi <mseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:27:19 by mseferi           #+#    #+#             */
/*   Updated: 2023/07/23 22:31:04 by mseferi          ###   ########.fr       */
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
