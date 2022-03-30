#include <stdio.h>
#include "libft.h"

int main()
{
	char	**temp;
	char	*s = " 1234567 ";
	char	sep = ' ';
	int		i = 0;
	int		j;

	temp = ft_split(s, sep);
	while (temp[i])
	{
		j = 0;
		while (temp[i][j])
			printf("%c", temp[i][j++]);
		i++;
		printf("\n");
	}
	i = 0;
	while (temp[i])
	{
		free(temp[i++]);
	}
	free(temp);
	/*
	printf("%s\n", ft_strtrim("abqaaqqbaabc", "abc"));
	printf("%s\n", ft_strtrim("xzyazyxvocadxyzoyxzyxxx", "xyz"));
	printf("%s\n", ft_strtrim("abcabcabc", "abc"));
	*/
	return 0;
}
