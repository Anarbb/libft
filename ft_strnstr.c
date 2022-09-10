#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!needle[i])
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (!needle[j])
				return ((char *) haystack + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
