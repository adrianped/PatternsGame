#include "Entity.h"



Entity::Entity()
{
	Parent = nullptr;
}


Entity::~Entity()
{
}

void Entity::UpdateTransforms()
{
	if (Parent != nullptr)
	{
		m_globalMatrix = Parent->m_globalMatrix * m_localMatrix;
	}
	else
	{
		m_globalMatrix = m_localMatrix;
	}
}

void Entity::SetParent(Entity* Parents)
{
	Parent = Parents;
}

void Entity::AddChild(Entity* Child)
{
	Childlist.push_back(Child);
}

Vector2 Entity::GetPosition()
{
	Vector2 result;
	result.x = m_globalMatrix.m[2][0];
	result.y = m_globalMatrix.m[2][1];
	return result;
}
void Entity::SetActive(bool bActive)
{
	m_bActive = bActive;
}

bool Entity::GetActive()
{
	return m_bActive;
}
