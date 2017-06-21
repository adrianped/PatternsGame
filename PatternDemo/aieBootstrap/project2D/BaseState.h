#pragma once
#include "Renderer2D.h"

#include "Texture.h"
class StateMachine;
using namespace aie;

class BaseState
{
public:
	BaseState()
	{
	}
	~BaseState()
	{
	}

	virtual void OnEnter() = 0;
	virtual void OnUpdate(float fDeltaTime, StateMachine * State) = 0;
	virtual void OnDraw(Renderer2D* m_2dRenderer) = 0;
	virtual void OnExit() = 0;
};

