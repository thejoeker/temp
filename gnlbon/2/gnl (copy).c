#include <sys/stat.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2048
#endif

size_t ft_strlen(const char *s)
{
	size_t i;
	while(s && s[i])
		i++;
	return(i);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        char            *pdest;
        const char      *psrc;

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
char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *pt_str;
        size_t  len1;
        size_t  len2;
        size_t  total_len;

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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
char *ft_select(char *buf, int *ret)
{
	int i;
	char *dest;
	i = 0;
	while(buf && buf[i] != '\n')
	i++;
	dest = malloc(i + 1);
	if(!dest)
		return (NULL);
	if(ft_strchr(buf, '\n') != 0)
		*ret = 1;
	i = 0;	
	while(buf && buf[i] != '\n')
	{
		dest[i] = buf[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char *ft_select2(char *buf)
{
	int i;
	int j;
	char *dest;

	i = 0;
	while(buf && buf[i] && buf[i] != '\n')
	i++;
	dest = malloc(sizeof(*dest) * (ft_strlen(buf) - i + 1));
	if(!dest)
	return(NULL);
	j = 0;
	while (buf && buf[i])
	dest[j++] = buf[++i];
	dest[j] = 0;
	return(dest);
}

int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE + 1];
	int ret;
	static char *str = NULL;
	char *temp;

	ret = BUFFER_SIZE;
	if (fd < 0 || fd > 1023 || !line || BUFFER_SIZE <= 0)
	return(-1);
	while (ret > 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if(ret == -1)
			return(-1);
		buf[ret] = 0;
		temp = str;
		str = ft_strjoin(temp, buf);
		free(temp);
		if(ft_strchr(str, '\n'))
			break;
	}
	*line = ft_select(str, &ret);
	temp = str;
	str = ft_select2(temp);
	free(temp);
	return(ret);
}

int main()
{
	int fd = open("coucou", O_RDONLY);
	char *line = NULL;
	int ret = get_next_line(fd, &line);

	while(ret != 0)
	{	
		printf("%s", line);
		ret = get_next_line(fd, &line);
	}	
}

