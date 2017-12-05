/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_words.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/01 16:16:57 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 14:41:06 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
			words++;
		while (!(str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
			i++;
	}
	return (words);
}
