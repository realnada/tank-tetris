#include <raylib.h>
#include <iostream>

int main() {
	const Color darkBlue = { 20, 44, 90, 255 };

	std::cout << "Starting Tetris..." << std::endl;

	InitWindow(400, 800, "Tank Teris");
	SetTargetFPS(60);

	while (WindowShouldClose() == false) {
		BeginDrawing();
		
		ClearBackground(darkBlue);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}