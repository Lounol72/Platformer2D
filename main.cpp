#include <SFML/Graphics.hpp>

int main()
{
    // Create a window with size 800x600 and title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Main loop that continues until the window is closed
    while (window.isOpen())
    {
        sf::Event event;
        // Process events
        while (window.pollEvent(event))
        {
            // Close window when the close event is received
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear the window with default black color
        window.clear();

        // Display the content rendered in the window
        window.display();
    }

    return 0;
}