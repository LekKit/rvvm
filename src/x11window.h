#ifndef X11WINDOW_H
#define X11WINDOW_H
#include "ps2-mouse.h"

struct x11_data
{
	char *data; // framebuffer
	struct ps2_device *mouse;
	struct ps2_device *keyboard;
};

void create_window(struct x11_data* data, int width, int height, const char* name);
void close_window();
void update_fb();
#endif
