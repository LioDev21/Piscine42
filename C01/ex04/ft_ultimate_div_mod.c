/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:34:49 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/21 13:15:44 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a /= *b;
	*b = tmp % *b;
}
/*
int main(void)
{
	int a = 10;
	int b = 3;

	printf("Nombres a diviser : %d et %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Division : %d\nModulo : %d\n", a, b);
	return 0;
}
*/
