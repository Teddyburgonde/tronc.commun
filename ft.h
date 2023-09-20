#ifndef FT_H
# define FT_H

unsigned int			ft_strlen(const char *str);
void					*ft_memset(void *s, int c, unsigned int n);
void					*ft_memcpy(void *restrict dest,
							const void *restrict src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t len);
void					ft_bzero(void *s, size_t n);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
#endif
