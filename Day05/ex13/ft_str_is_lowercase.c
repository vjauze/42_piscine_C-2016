/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 10:49:27 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/14 00:54:31 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 97)
			return (0);
		if (str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}