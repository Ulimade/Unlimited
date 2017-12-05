/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:24:54 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:24:56 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	char			*c_haystack;
	char			*c_needle;

	c_haystack = (char *)haystack;
	c_needle = (char *)needle;
	if (ft_strlen(needle) == 0)
		return (c_haystack);
	i = 0;
	while (c_haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (c_needle[j] == c_haystack[i + j] && i + j < len)
		{
			if (c_needle[j + 1] == '\0')
			{
				return (c_haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
