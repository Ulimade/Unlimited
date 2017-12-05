/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:03:52 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:03:57 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	j = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && n--)
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[i + j] = '\0';
	return (s1);
}