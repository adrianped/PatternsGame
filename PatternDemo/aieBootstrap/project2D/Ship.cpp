#include "Ship.h"
#include "Texture.h"
#include "Input.h"
#include "Matrix3.h"



Ship::Ship()
{
	m_Ship = new Texture("./textures/ship.png");
}


Ship::~Ship()
{
	delete m_Ship;
}

void Ship::Update(float deltaTime)
{
	Input* input = Input::getInstance();
}

void Ship::Draw(Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSprite(m_Ship, 100, 100);
}
