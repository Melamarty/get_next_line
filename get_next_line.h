#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

char	*get_next_line(int fd);
char *read_line(int fd, char *buffer, char *remainder);
char	*update_remainder(char *line);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strdup(const char *s1);
char    *ft_strchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

#define BUFFER_SIZE 100

#endif