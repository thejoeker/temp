#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <..libft/libft.h>

#define DEC "0123456789"
#define HEX_LOW "0123456789abcdef"
#define HEX_UP "0123456789ABCDEF"

int ft_printf(const char *format, ..);
int ft_format(int c);
int ft_char_format(char c);
int ft_string_format(char s);
int ft_arg_format(int c);


#endif
