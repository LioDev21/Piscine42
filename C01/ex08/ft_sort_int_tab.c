/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:58:16 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/21 13:12:32 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdio.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
/*
int main(void)
{
      int tab[] = {3, 2, 5, 1};
      int size = 4;
 
      printf("Before swap :\n");
 
      for (int i = 0; i < size; ++i)
      {
          printf("[%d] ", tab[i]);
      }
      printf("\n");
	  ft_sort_int_tab(tab, size);
      printf("After swap :\n");
 
      for (int i = 0; i < size; ++i) {
          printf("[%d] ", tab[i]);
      }
 
      printf("\n");
      return 0;
}
*/
