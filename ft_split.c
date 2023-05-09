/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:00:13 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/09 22:09:50 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_ct(const char *s, char c)
{
	int	i;
	int	word_ct;

	i = 0;
	word_ct = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			word_ct++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (word_ct);
}

static char	*ft_write_word(char *word, const char *s, int i, int word_lenght)
{
	int	j;

	j = 0;
	while (word_lenght > 0)
	{
		word[j] = s[i - word_lenght];
		j++;
		word_lenght--;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_split_words(const char *s, char c, char **str, int word_count)
{
	int	i;
	int	word_number;
	int	word_length;

	i = 0;
	word_number = 0;
	word_length = 0;
	while (word_number < word_count)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			word_length++;
			i++;
		}
		str[word_number] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (!str)
			return ;
		ft_write_word(str[word_number], s, i, word_length);
		word_length = 0;
		word_number++;
	}
	str[word_number] = NULL;
	return ;
}

char	**ft_split(const char *s, char c)
{
	char			**str;
	unsigned int	word_ct;

	if (!s)
		return (NULL);
	word_ct = ft_word_ct(s, c);
	str = (char **)malloc(sizeof(char *) * (word_ct + 1));
	if (!str)
		return (0);
	ft_split_words(s, c, str, word_ct);
	return (str);
}
