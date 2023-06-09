#ifndef INTERFACE_H
#define INTERFACE_H

#include <GLFW/glfw3.h>

typedef struct window_t {
	int w;
	int h;
	unsigned char * fb;
	void * gwin;
} window_t;

void i_init();
void i_exit();
window_t * i_window_new(unsigned int w, unsigned int h, char * name);
void i_window_free(window_t * win);
void i_update();

#endif
