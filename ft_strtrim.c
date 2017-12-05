/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:59:53 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:59:55 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	beg;
	size_t	end;
	size_t	i;
	char	*output;

	if (!s)
		return (NULL);
	beg = 0;
	while ((s[beg] == ' ' || s[beg] == '\n' ||
				s[beg] == '\t') && s[beg] != '\0')
		beg++;
	end = ft_strlen(s) - 1;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > beg)
		end--;
	if (!(output = (char *)malloc(sizeof(char) * end - beg + 2)))
		return (NULL);
	i = 0;
	while (i + beg < end + 1)
	{
		output[i] = s[beg + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
