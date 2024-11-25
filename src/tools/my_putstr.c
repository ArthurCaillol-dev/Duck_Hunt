/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** putstr
*/

#include <unistd.h>

static int getlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

void my_putstr(char *str)
{
    write(1, str, getlen(str));
}