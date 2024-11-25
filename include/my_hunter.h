/*
** EPITECH PROJECT, 2020
** my_hunter_H
** File description:
** my_hunter
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <time.h>
#include <unistd.h>

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_
#define KILL_POINT 100
#define SIZE_SPRITE 110
#define SPEED 10
#define INITIAL_POS -330

typedef struct s_window {
    sfRenderWindow *hunter;
    sfVideoMode video_mode;
    sfClock *clock_h;
    sfTime time;
    sfEvent event;
    sfColor clr;
    sfTexture *image;
    sfSprite *window;
    int fps;
    int w;
    int h;
    int bpp;
} window_t;

typedef struct s_target {
    sfSprite *sprite;
    sfTexture *duck_text;
    sfVector2f move;
    sfIntRect duck;
    sfVector2f initial_pos;
    sfVector2f pos;
    sfVector2f pos_kill;
} target_t;

typedef struct s_info {
    sfText *txt_lives;
    sfText *txt_score;
    sfText *txt_over;
    sfText *txt_lnb;
    sfText *txt_snb;
    sfText *txt_snbf;
    sfFont *txt_font;
    sfVector2f lpos;
    sfVector2f opos;
    sfVector2f spos;
    sfVector2f lnbpos;
    sfVector2f snbpos;
    sfColor clr;
    int kill;
    int score;
    int death;
} info_t;

typedef struct s_menu {
    sfSprite *sprite;
    sfTexture *button_tex;
    sfVector2f pos;
    sfIntRect button;
} s_menu_t;

void my_putstr(char *str);
int my_atoi(char *nbr);
sfRenderWindow *init_window(window_t *window);
window_t *init_strct_window(void);
target_t *init_strct_sprite(char *);
void fps(window_t *window, target_t *duck);
info_t *init_strct_info(void);
void touch_target(target_t *tar, info_t *info);
void fps(window_t *window, target_t *duck);
void death(window_t *window, target_t *tar, info_t *info);
void create_anim(target_t *duck);
void disp_h(void);
void free_strct(window_t *window, target_t *target, info_t *info);
void gest_anime(target_t *duck);
sfText *create_text(info_t *info, char *s, int size);
char *itoc(int nb);
void draw_sprite(window_t *window, target_t *tar, info_t *info);
void after_screen(window_t * window, target_t *tar, info_t *info);
void game_over(info_t *info, window_t *window, target_t *tar);
void gest_itbox(window_t *window, target_t *tar, info_t *info);

#endif /* !MY_HUNTER_H_ */