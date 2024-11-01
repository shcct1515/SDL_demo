#include<iostream>
#include<SDL.h>
#undef main
using namespace std;

void windowc() {
	int w = 1366;
	int h = 768;
	bool loop = true;
	SDL_Event e;
	SDL_Window* window = SDL_CreateWindow("SDL test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, SDL_WINDOW_SHOWN);
	while (loop) {
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				loop = false;
			}
			if (e.type == SDL_KEYDOWN) {
				if (e.key.keysym.sym == SDLK_0) {
					h = 800;
					w = 800;
					SDL_SetWindowSize(window, h, w);
				}
			}
			if (e.type == SDL_KEYDOWN) {
				if (e.key.keysym.sym == SDLK_1) {
					h = 1366;
					w = 768;
					SDL_SetWindowSize(window, h, w);
				}
			}
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int main() {
	windowc();
	return 0;
}