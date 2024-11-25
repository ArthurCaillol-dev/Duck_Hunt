/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** help
*/

#include "../../include/my_hunter.h"

void disp_h(void)
{
    my_putstr("USAGE :\n     ./my_hunter\n");
}

void free_strct(window_t *window, target_t *target, info_t *info)
{
    free(window);
    free(info);
    free(target);
}