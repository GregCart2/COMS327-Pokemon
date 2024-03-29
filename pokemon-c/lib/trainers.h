#ifndef TRAINERS_H
#define TRAINERS_H

#include "utils-misc.h"

//constants
extern const int (*movement[]) (Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);

//globals
extern Map *trails[num_types_tra];

//movement functions
int move_player(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_hiker(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_rival(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_pacer(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_wanderer(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_sentry(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_explorer(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);
int move_swimmer(Entity *self, Map *wrld, char map[BOUNDS_Y][BOUNDS_X][10]);

//initializers
Entity* init_entity(int i, Point p, Terrain_e st);
Trainer* init_trainer(Trainer_e te, Point p, Terrain_e st);
Trainer** init_trainers(const int num);

//HP's
int print_trainer(Trainer *t);

#endif