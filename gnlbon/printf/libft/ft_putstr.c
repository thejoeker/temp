#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

#include <stdio.h>

int main()
{
	char s[] = "topicalismo";

	char d[] = "POWER";

	int ptr = ft_strlcat(d, s, 100 * sizeof(char));

	printf("%d", ptr);

	
}

