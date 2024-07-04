/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:20:57 by liwirth           #+#    #+#             */
/*   Updated: 2024/07/03 17:01:52 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = max - min;
	tab = malloc(sizeof(int) * i);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
    int min = -2;
    int max = 20;
    int *tab = ft_range(min, max);
    int i = 0;
    int size = max - min;

    while (i < size)
    {
        printf("[%d] ", tab[i]);
        i++;
    }
    return 0;
}
*/
