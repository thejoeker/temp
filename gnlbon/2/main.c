#include <sys/stat.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

size_t ft_strlen(const char *s)
{
        size_t i;
        while(s && s[i])
                i++;
        return(i);
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	return (dest);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt_str;
	size_t	len1;
	size_t	len2;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	pt_str = malloc((total_len + 1) + sizeof(char));
	if (!pt_str)
		return (NULL);
	ft_memcpy(pt_str, s1, len1);
	ft_memcpy(pt_str + len1, s2, len2);
	pt_str[total_len] = '\0';
	return (pt_str);
}
int main()
{
	char s1[]= "lel";
	char s2[]= "pop";
	printf("%s", ft_strjoin(s1, s2));
}
