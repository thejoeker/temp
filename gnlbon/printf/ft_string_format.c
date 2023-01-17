int ft_string_format(char *s)
{
	int c;

	if(!s)
	s = "(null)";
	while(s[c] != '\0')
	ft_putchar(s[c], 1);
	c++;
	return(c)
}
