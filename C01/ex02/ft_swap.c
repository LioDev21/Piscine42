/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:21:39 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/21 13:16:56 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main(void)
{
	int a = 15;
	int b = 30;

	printf("Before swap :\na = %d \nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap :\na = %d \nb = %d\n", a, b);
	return 0;
}
*/
