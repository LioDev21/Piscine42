/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:11:28 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 17:11:31 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[] = "salut";
//     char s2[] = "solut";

//     //ft_strcmp(s1, s2);
//     printf("%d\n",strcmp(s1, s2));
//     printf("%d\n", ft_strcmp(s1, s2));
//     return 0;
// }