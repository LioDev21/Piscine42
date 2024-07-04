/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:22:11 by liwirth           #+#    #+#             */
/*   Updated: 2024/07/03 19:19:59 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
			{
				len++;
				j++;
			}
		}
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		k;
	int		len;

	i = 0;
	k = 0;
	len = ft_strlen(size, strs, sep);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			new[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			new[k++] = sep[j++];
		i++;
	}
	new[k] = '\0';
	return (new);
}


int	main(void)
{
	char	*tab[4];
	tab[0] = "un";
	tab[1] = "deux";
	tab[2] = "trois";
	tab[3] = "quatre";
	char *result = ft_strjoin(4, tab, " : ");

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    else
        printf("Erreur d'allocation mémoire\n");
    return 0;
}
