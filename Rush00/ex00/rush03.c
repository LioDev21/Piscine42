/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirthi <marvin@42lausanne.ch>             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:58:33 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/22 21:26:33 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, int nbr)
{
	int	count;

	count = 0;
	ft_putchar('A');
	if (x > 2)
	{
		while (count < nbr)
		{
			ft_putchar('B');
			count++;
		}
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	middle_line(int x, int y, int nbr)
{
	int	count;
	int	count2;

	count = 0;
	while (count < y - 2)
	{
		count2 = 0;
		ft_putchar('B');
		while (count2 < nbr)
		{
			ft_putchar(' ');
			count2++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		count++;
	}
}

void	last_line(int x, int y, int nbr)
{
	int	count;

	if (y > 1)
	{
		count = 0;
		ft_putchar('A');
		while (count < nbr)
		{
			ft_putchar('B');
			count++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	nbr;

	nbr = x - 2;
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		first_line(x, nbr);
		middle_line(x, y, nbr);
		last_line(x, y, nbr);
	}
}
