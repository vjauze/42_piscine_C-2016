/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:32:05 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/24 13:47:40 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			i2++;
		i++;
	}
	return (i2);
}
