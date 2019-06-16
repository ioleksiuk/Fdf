/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:16:32 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/04/13 21:43:14 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*src;

	src = s1;
	while (*s1)
		s1++;
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (src);
}