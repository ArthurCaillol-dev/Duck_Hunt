/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** create_target
*/

#include "../../include/my_hunter.h"

sfSprite *create_my_sprite(target_t *sprite, char *file)
{
    sprite->sprite = sfSprite_create();
    sprite->duck_text = sfTexture_createFromFile(file,
                                                NULL);
    sfSprite_setTexture(sprite->sprite, sprite->duck_text, sfFalse);
    sprite->pos_kill = sfSprite_getPosition(sprite->sprite);
    sprite->pos = sfSprite_getPosition(sprite->sprite);
    return (sprite->sprite);
}

target_t *init_strct_sprite(char *file)
{
    target_t *sprite = malloc(sizeof(target_t));

    sprite->initial_pos.x = INITIAL_POS;
    sprite->pos_kill.x = 0;
    sprite->pos_kill.y = 0;
    sprite->duck.height = SIZE_SPRITE;
    sprite->duck.width = SIZE_SPRITE;
    sprite->move.x = SPEED;
    sprite->move.y = 0;
    sprite->sprite = create_my_sprite(sprite, file);
    return (sprite);
}