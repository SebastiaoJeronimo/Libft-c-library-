/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scosta-j <scosta-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:37:01 by scosta-j          #+#    #+#             */
/*   Updated: 2022/11/14 13:47:00 by scosta-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H //se nao def 
#define LIBFT_H // define 

/* libraries and imports needed*/
#include<stdlib.h>
#include<stdio.h>

/*any typedefs or enums*/
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

/*prototypes for the functions*/

//CHAR METHODS
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);

//ADDITIONAL CHAR FUNCTIONS
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);

//STRING METHODS
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char * ft_strnstr(const char *big, const char *little, size_t len);

//ADDITIONAL STRING FUNCTIONS
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);


//SAFE STRING METHODS
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);

//MEMORY METHODS
void *ft_memcpy(void *dest, const void *src, size_t n); //tentar com o restrict
void *ft_memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

//MEMORY MANAGMENT AND ALLOCATION METHODS
void *ft_calloc(size_t nmemb, size_t size);
char *strdup(const char *s);

//OTHER CLASSICS
int ft_atoi(const char *nptr);
char *ft_itoa(int n);

//LIST FUNCTIONS
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *newlist);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *newlist);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

/*ANY CONSTANTS*/
#define AUTHOR "SEBASTIAO JERONIMO"
#define USERNAME "scosta-j"
#define SCHOOL 42

/* INTERESTING FUNCTION JUST TO CHECK MEMORY OVERLAPS
static int overlap_p(char *dest, char *src, size_t n)
{
    int i;
    char *ptr_dest_overlap;
    char *ptr_src_overlap;

    i = 0;
    ptr_dest_overlap = &dest[0];
    ptr_src_overlap =  &src[0];
    while(i<n)
    {
    if (ptr_dest_overlap+i==ptr_src_overlap || ptr_src_overlap+i==ptr_dest_overlap)
       return (1);
       i++; 
    } 
    return (0);
}
*/
#endif // fim da definicao