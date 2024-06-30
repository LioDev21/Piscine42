/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:06:33 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/30 18:56:00 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rc;

	rc = 1;
	if (nb < 0)
		return (0);
	while (rc * rc < nb)
		rc++;
	if (rc * rc == nb)
		return (rc);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	if (ac ==2)
	{
		printf("%d\n", ft_sqrt(nb));
		return 0;
	}
}
*/
