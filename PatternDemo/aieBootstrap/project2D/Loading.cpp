#include "Loading.h"
#include "Input.h"
#include "StateMachine.h"



Loading::Loading()
{
	m_pLoading = new Texture("./textures/Splash.png");
	time = 0;
	x = 0;
}


Loading::~Loading()
{
	delete m_pLoading;
}

void Loading::OnEnter()
{
}

void Loading::OnUpdate(float fDeltaTime, StateMachine * State)
{
	Input* input = Input::getInstance();
	x += fDeltaTime / 1.5;
	time += fDeltaTime;
	if (time >= 2.5)
		State->PushState(2);
}

void Loading::OnDraw(Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSprite(m_pLoading, 600, 400);
}

void Loading::OnExit()
{
}
