/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** info
*/

#include "../../include/my_hunter.h"

static void info_strct(info_t *info)
{
    info->score = 0;
    info->death = 3;
    info->kill = 0;
    info->lpos.x = 1550;
    info->lpos.y = 900;
    info->opos.x = 1980 / 38;
    info->opos.y = 1080 / 3;
    info->spos.x = 50;
    info->spos.y = 900;
    info->lnbpos.x = 1700;
    info->lnbpos.y = 900;
    info->snbpos.x = 250;
    info->snbpos.y = 900;
}

sfText *create_text(info_t *info, char *s, int size)
{
    sfText *text;

    text = sfText_create();
    sfText_setString(text, s);
    info->txt_font = sfFont_createFromFile("include/assets/sprites/ka1.ttf");
    sfText_setFont(text, info->txt_font);
    sfText_setColor(text, info->clr);
    sfText_setCharacterSize(text, size);
    return (text);
}

info_t *init_strct_info(void)
{
    info_t *info = malloc(sizeof(info_t));

    info_strct(info);
    info->clr = sfColor_fromRGB(0, 0, 0);
    info->txt_lives = create_text(info, "Lives", 35);
    info->txt_over = create_text(info, "GAME OVER", 50);
    info->txt_score = create_text(info, "Score", 35);
    info->txt_lnb = create_text(info, "3", 35);
    info->txt_snb = create_text(info, "0", 35);
    sfText_setPosition(info->txt_lives, info->lpos);
    sfText_setPosition(info->txt_over, info->opos);
    sfText_setPosition(info->txt_score, info->spos);
    sfText_setPosition(info->txt_lnb, info->lnbpos);
    sfText_setPosition(info->txt_snb, info->snbpos);
    return (info);
}