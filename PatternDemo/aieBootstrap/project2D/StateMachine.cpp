#include "StateMachine.h"
#include "Stack.h"
#include "DynamicArray.h"



StateMachine::StateMachine()
{
}


StateMachine::~StateMachine()
{
}

void StateMachine::Update(float fDeltaTime)
{
	if (m_Stack.size() > 0)
	m_Stack.top()->OnUpdate(fDeltaTime, this);
}

void StateMachine::Draw(Renderer2D * m_2dRenderer)
{	
	if(m_Stack.size() > 0)
	m_Stack.top()->OnDraw(m_2dRenderer);
}

void StateMachine::PushState(int StateId)
{
	//if (m_baseState.GetSize() > 3)
	m_Stack.push(m_baseState[StateId]);
}

void StateMachine::PopState()
{
	m_Stack.pop();
}

void StateMachine::AddState(BaseState * State, int StateId)
{
	//if (m_Stack.size() > 3)
	m_baseState.Insert(State, StateId);
}
