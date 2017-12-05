/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:09:06 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 15:09:07 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*output;

	output = (char *)s;
	while (*output != '\0')
	{
		if (*output == c)
			return (output);
		output++;
	}
	if (*output == c)
		return (output);
	return (NULL);
}
