#include <iostream>
#include <SFML/Graphics.hpp>
#include "source/rendering/Texture.h"
#include "source/physicals/player/Player.h"
#include "source/manager/PhysicalManager.h"



int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Acodemia++ SCI 2019-2020 C/C++ and SFML", sf::Style::Close);
	window.setKeyRepeatEnabled(false);

	// P l a y e r s
	acodemia::rendering::Texture player_texture;
	player_texture.loadFromFile("../data/ship.png");
	player_texture.setSmooth(true);

	Actor *physical;
	// P l a y e r
	physical = gPhysicalManager.CreatePlayer();
	physical->setTexture(player_texture);
	physical->setUseDisplayable(true);
	physical->setScale(2);
	physical->setOrigin(physical->getLocalBounds().width * 0.5f, physical->getLocalBounds().height * 0.5f);
	physical->setPosition(200, 200);
	physical->setSpeed(200);
	physical->setUpsideDown(false);


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

		//physical->setPosition(physical->getPosition().x + 0.125f, physical->getPosition().y);
		
		gPhysicalManager.updatePhysical(time);

		window.clear(sf::Color::White);
		window.draw(duszek);
		gPhysicalManager.draw(window);
		window.display();
	}
	return 0;
}
