#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"

using namespace std;

class NPC : public Character
{
public:
	NPC();
	~NPC();
	void initialize();
	void update();
	void draw(sf::RenderWindow *t_wind);
	sf::Sprite getPosition();
	void setPosition(sf::Vector2f t_pos);
private:
	sf::Texture m_npcTexture;
	sf::Sprite m_npcSprite;
};
#endif