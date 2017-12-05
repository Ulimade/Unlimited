/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:58:08 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 19:11:32 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*output;
	unsigned long	i;
	unsigned long	j;

	if (!s)
		return (NULL);
	if (!(output = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
	{
		output[j] = s[i];
		j++;
		i++;
	}
	output[j] = '\0';
	return (output);
}
