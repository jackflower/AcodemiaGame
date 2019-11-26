#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Acodemia++ SCI 2019-2020 C/C++ and SFML", sf::Style::Close);
	window.setKeyRepeatEnabled(false);

	sf::Clock clock;
	float time = 0.0f;

	sf::Texture obrazek;
	obrazek.loadFromFile("../data/ship.png");
	obrazek.setSmooth(true);
	sf::Sprite duszek;
	duszek.setTexture(obrazek);
	duszek.setPosition(400, 300);

	//pêtla czasu rzeczywistego...
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		time = clock.restart().asSeconds();
		//std::cout << time << std::endl;

		window.clear(sf::Color::White);
		window.draw(duszek);
		window.display();
	}
	return 0;
}
