#include <GL/glut.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// extern int lastKey = GLUT_KEY_RIGHT;

extern int level1_loaded;

extern int relative_constant; // A constant value to decide spacing of objects and other things
                                  // Many movements depend on its value
extern int speed;
extern int jump_speed;
extern float win_w;
extern float win_h;
extern float win_x;
extern float win_y;		// Just for now.... Later thinking of using an array with x and y values of every change in height
extern float r2d3_x;
extern float r2d3_y;
extern bool down_dir;		// false : UP, true: DOWN
extern int min_y;
extern int max_y;
extern bool block_r;
extern bool block_l;

enum ScreenStates {
	_intro_screen = 0,
	_inst_screen,
	_game_screen,
	_death_screen
};
extern ScreenStates screen;

// extern int death_state = 0;	// 1-activated 0-deactivated

extern unordered_map <int, vector <int>> spike_pos;
