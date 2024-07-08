/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:03:15 by liwirth           #+#    #+#             */
/*   Updated: 2024/07/07 18:03:25 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new;
	int			i;

	new = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (new == NULL)
		return (NULL);
	while (i < ac)
	{
		new[i].str = av[i];
		new[i].copy = ft_strdup(av[i]);
		new[i].size = ft_strlen(av[i]);
		i++;
	}
	new[i].str = 0;
	new[i].copy = 0;
	return (new);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    struct s_stock_str *structs = ft_strs_to_tab(ac, av);

        printf("%d\n", i);
        printf("Original : $%s$ @ %p\n", structs[1].str, structs[1].str);
        printf("Copied : $%s$ @ %p\n", structs[1].copy, structs[1].copy);
        printf("Size : %d\n", structs[1].size);
    return 0;
}
*/
