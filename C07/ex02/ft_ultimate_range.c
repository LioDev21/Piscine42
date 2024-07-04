/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:21:41 by liwirth           #+#    #+#             */
/*   Updated: 2024/07/03 17:05:31 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	tab = malloc(sizeof(int) * i);
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
    int min = 2;
    int max = 20;
    int *tab;
    int i = 0;
    int size = ft_ultimate_range(&tab, min, max);

    printf("%d\n", ft_ultimate_range(&tab, min, max));

    while (i < size)
    {
        printf("[%d] ", tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
*/
