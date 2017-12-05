/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:27:20 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:27:22 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*output;
	char	*lastout;

	output = (char *)s;
	lastout = NULL;
	while (*output != '\0')
	{
		if (*output == c)
			lastout = output;
		output++;
	}
	if (*output == c)
		return (output);
	return (lastout);
}
