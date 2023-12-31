#include "get_next_line_bonus.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    char *str;

    if(!s1 && !s2)
        return (NULL);
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return NULL;
    i = 0;
    j = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }  
    while(s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;


    dest = (char *) malloc(ft_strlen(s1) + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0') {
        if (*s == c) {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return NULL;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    unsigned int slen;

    if(!s)
        return (ft_strdup(""));
    slen = ft_strlen(s);
    if(start >= slen || len == 0)
        return (ft_strdup(""));
    sub = (char *)malloc(len + 1); 
    if(!sub)
        return (NULL);
    i = 0;
    while(len > 0 && s[start])
    {
        sub[i] = s[start];
        i++;
        start++;
        len--;
    }
    sub[i] = '\0';
    return (sub);
}

size_t	ft_strlen(const char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}