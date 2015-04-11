#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Voxel Engine", Style::Default, ContextSettings(32));

    while(window.isOpen()) {
        Event event;

        while(window.pollEvent(event)) {
            if(event.type == Event::Closed) {
                window.close();
            } else if(event.type == Event::Resized) {
                // Adjust the viewport when window is resized.
                glViewport(0, 0, event.size.width, event.size.height);
            }
        }

        // Clear the buffers.
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        window.display();
    }

    return 0;
}