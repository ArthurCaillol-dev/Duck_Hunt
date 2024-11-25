/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** main
*/

#include "include/my_hunter.h"

static void before_game(target_t *duck, window_t *window)
{
    sfSprite_setPosition(duck->sprite, duck->initial_pos);
    duck->pos = sfSprite_getPosition(duck->sprite);
    window->clock_h = sfClock_create();
}

static void game(target_t *tar, window_t *window, info_t *info)
{
    tar->pos = sfSprite_getPosition(tar->sprite);
    if (tar->pos.x == 1920) {
        after_screen(window, tar, info);
    }
    fps(window, tar);
    sfRenderWindow_drawSprite(window->hunter, window->window, NULL);
    if (info->death > 0) {
        draw_sprite(window, tar, info);
    sfSprite_move(tar->sprite, tar->move);
    } else if (info->death == 0) {
        death(window, tar, info);
    }
    sfRenderWindow_display(window->hunter);
}

static void gest_event(window_t *window, target_t *tar, info_t *info)
{
    if (window->event.type == sfEvtClosed) {
        sfRenderWindow_close(window->hunter);
        return;
    }
    if (window->event.type == sfEvtMouseButtonPressed &&
    window->event.mouseButton.button == sfMouseLeft) {
            gest_itbox(window, tar, info);
    }
}

int main(int ac, char **av)
{
    window_t *window;
    target_t *duck;
    info_t *info = init_strct_info();

    if (ac != 1 && av[1][0] == '-' && av[1][1] == 'h') {
        disp_h();
        return (0);
    } else if (ac == 1) {
        duck = init_strct_sprite("assets/duck.png");
        window = init_strct_window();
        before_game(duck, window);
        while (sfRenderWindow_isOpen(window->hunter)) {
            game(duck, window, info);
            while (sfRenderWindow_pollEvent(window->hunter, &window->event))
                gest_event(window, duck, info);
        }
        sfRenderWindow_destroy(window->hunter);
        free_strct(window, duck, info);
        return (0);
    } else
        return (84);
}