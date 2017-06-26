#pragma once
#include "BaseState.h"
class Loading : public BaseState
{
public:
	Loading();
	~Loading();

	void OnEnter();
	void OnUpdate(float fDeltaTime, StateMachine* State);
	void OnDraw(Renderer2D* m_2dRenderer);
	void OnExit();

private:
	Texture* m_pLoading;
	float x;
	float  time;
};

