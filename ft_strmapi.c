/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:00:52 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 15:33:16 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*output;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(output = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		output[i] = f(i, output[i]);
		i++;
	}
	return (output);
}
