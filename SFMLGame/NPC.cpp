#include <NPC.h>

NPC::NPC(){
	if (!m_npcTexture.loadFromFile("mediumAsteroid.png"));			// Loading Textures
	{
	//	std::cout << "Problem" << std::endl;
	}
	m_npcSprite.setTexture(m_npcTexture);
	m_npcSprite.setPosition(300, 300);

};
NPC::~NPC(){};

void NPC::initialize()
{
	
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow *t_wind)
{
	t_wind->draw(m_npcSprite);
}

sf::Sprite NPC::getPosition()
{
	return m_npcSprite;
}

void NPC::setPosition(sf::Vector2f t_pos)
{
	m_npcSprite.setPosition(t_pos);
}
