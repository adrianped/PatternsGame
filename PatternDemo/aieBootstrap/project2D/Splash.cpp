#include "Splash.h"
#include "StateMachine.h"
#include "Input.h"

using namespace aie;

Splash::Splash()
{
	m_pSplash = new Texture("./textures/Splash.png");
	time = 0;
	x = 0;
}


Splash::~Splash()
{
	delete m_pSplash;
}

void Splash::OnEnter()
{
}

void Splash::OnUpdate(float fDeltaTime, StateMachine * State)
{
	Input* input = Input::getInstance();
	x += fDeltaTime / 1.5;
	time += fDeltaTime;
	if (time >= 2.5)
		State->PushState(1);
}

void Splash::OnDraw(Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSprite(m_pSplash, 700, 700);
}

void Splash::OnExit()
{
}
