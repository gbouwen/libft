/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_ft_split.c                                         :+:    :+:        */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:59:12 by gbouwen       #+#    #+#                 */
/*   Updated: 2019/11/21 15:03:59 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_get_word_pos(const char *s, char c, int x)
{
	int	i;

	i = 1;
	while (s[i - 1] == c && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (x == 0 && s[i - 1] != c && i == 1)
			return ((char *)&s[i - 1]);
		if ((s[i - 1] == c && s[i] != c))
			return ((char *)&s[i]);
		while (s[i] == c && s[i + 1] == c)
			i++;
		i++;
	}
	return ((char *)s);
}

static void	ft_free_mem(char **words, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static char	*ft_get_word(char *s, char c, char **words, int x)
{
	int		word_len;
	char	*word;
	int		i;

	word_len = 0;
	while (s[word_len] != '\0' && s[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	i = 0;
	if (!word)
	{
		ft_free_mem(words, x);
		return (NULL);
	}
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(const char *s, char c)
{
	int			x;
	int			word_amount;
	char		**words;

	if (!s)
		return (NULL);
	x = 0;
	word_amount = ft_count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (!words)
		return (NULL);
	while (x < word_amount)
	{
		s = ft_get_word_pos(s, c, x);
		words[x] = ft_get_word((char *)s, c, words, x);
		if (words[x] == NULL)
			return (NULL);
		x++;
	}
	words[x] = NULL;
	return (words);
}
