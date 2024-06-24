/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:28:15 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/21 13:16:10 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 100;
	int b = 30;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Divsion : %d\nModulo : %d\n", div, mod);
	return 0;
}
*/
