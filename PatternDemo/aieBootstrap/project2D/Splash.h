#pragma once
#include "BaseState.h"

class StateMachine;
using namespace aie;

class Splash : public BaseState

{
public:
	Splash();
	~Splash();

	void OnEnter();
	void OnUpdate(float fDeltaTime, StateMachine* State);
	void OnDraw(Renderer2D* m_2dRenderer);
	void OnExit();

	Texture* m_pSplash;
	float x;
	float  time;
};

