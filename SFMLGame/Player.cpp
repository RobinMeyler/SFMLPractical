#include <Player.h>

Player::Player(){

	if (!m_playerTexture.loadFromFile("jupiter.png"));			// Loading Textures
	{
		//std::cout << "Problem" << std::endl;
	}
	m_playerSprite.setTexture(m_playerTexture);
	m_playerSprite.setPosition(300, 100);

};
Player::~Player(){};

void Player::initialize()
{
	
	
}
void Player::update()
{
	m_playerSprite.setPosition(m_playerSprite.getPosition().x, m_playerSprite.getPosition().y + m_direction);
	if (m_playerSprite.getPosition().x > 700)
	{
		m_playerSprite.setPosition(-50, m_playerSprite.getPosition().y);
	}
	else if (m_playerSprite.getPosition().x < -50)
	{
		m_playerSprite.setPosition(700, m_playerSprite.getPosition().y);
	}
	if (m_playerSprite.getPosition().y > 600)
	{
		m_playerSprite.setPosition(m_playerSprite.getPosition().x, -140);
	}
	else if (m_playerSprite.getPosition().y < -140)
	{
		m_playerSprite.setPosition(m_playerSprite.getPosition().x, 600);
	}
}
void Player::draw(sf::RenderWindow *t_wind)
{
	t_wind->draw(m_playerSprite);
}

sf::Sprite Player::getPosition()
{
	return m_playerSprite;
}

void Player::setPosition()
{
	m_direction = -m_direction;
}


