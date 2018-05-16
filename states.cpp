#include "states.h"

// static int lastKey;

// enum ScreenStates {
// 	_intro_screen = 0,
// 	_inst_screen,
// 	_game_screen
// };
//
ScreenStates screen = _intro_screen;

float win_w = 1364.0;
float win_h = 768.0;
float win_x = 0.0;
float win_y = 325.0;		// Just for now.... Later thinking of using an array with x and y values of every change in height
float min_y = 200;
float max_y = min_y + 124;
int level1_loaded = 0;
float relative_constant = 4; // A constant value to decide spacing of objects and other things
float speed = 1 * relative_constant;
float jump_speed = 1 * relative_constant;
bool down_dir = false;
bool right_dir = true;
bool block_r = false;
bool block_l = false;
bool safe = true;
int ppid = 0;
bool up_key = true;
bool insane = true;
int score = 0;
int score_inc = 2;
int score_dec = 1;
time_t prev_mov_time = 0;
time_t mov_delay_time = 1;
