/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:48:02 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/23 18:24:53 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[j];
		tab[j] = tab[i];
		tab[i] = tmp;
		i++;
		j--;
	}
}
/*
int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Before swap :\n");

	for (int i = 0; i < size; ++i)
	{
		printf("[%d] ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("After swap :\n");

	for (int i = 0; i < size; ++i) {
        printf("[%d] ", tab[i]);
    }

    printf("\n");
	return 0;
}
*/
