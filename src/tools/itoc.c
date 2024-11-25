/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** itoc
*/

#include "../../include/my_hunter.h"

static int getlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++);
    return (i);
}

static char *rev_str(char *str)
{
    char tmp;
    int len = getlen(str) - 1;

    for (int i = 0; i < len; ++i) {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        len--;
    }
    return(str);
}

char *itoc(int nb)
{
    char *res = malloc(sizeof(nb));

    if (nb < 10 && nb >= 0)
        res[0] = nb + 48;
    if (nb > 9)
        for (int i = 0; nb != 0; i++) {
            res[i] = (nb % 10) + 48;
            nb /= 10;
        }
    res = rev_str(res);
    for (int i = 0; res[i] != '\0'; i++)
        if (res[i] < '0' || res[i] > '9')
            res[i] = '0';
    return(res);
}