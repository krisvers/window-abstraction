#include <interface.h>
#include <global.h>
#include <render.h>
#include <keys.h>
#include <GLFW/glfw3.h>

window_t * win;

int main() {
	i_init();
	win = i_window_new(800, 600, "window");

	r_init();
	r_bind_window(win);
	for (int i = 0; i < 2000; ++i) {
		r_draw(i % 300, i / 300, 0xFF00FF);
	}

	while (!global_should_close() && !glfwWindowShouldClose((GLFWwindow *) win->gwin)) {
		r_update();
		i_update();
	}

	i_window_free(win);
	i_exit();

	return 0;
}
