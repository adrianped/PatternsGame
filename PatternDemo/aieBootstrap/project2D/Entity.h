#pragma once
#include "Vector2.h"
#include "Matrix3.h"
#include <vector>

using namespace std;

class Entity
{
public:
	Entity();
	~Entity();
	void UpdateTransforms();
	void SetParent(Entity* Parent);
	void AddChild(Entity* Child);
	void SetActive(bool bActive);
	bool GetActive();
	Vector2 GetPosition();

	
	Entity* Parent;
	vector<Entity*> Childlist;
	Matrix3 m_localMatrix;
	Matrix3 m_globalMatrix;

private:
	bool m_bActive;
};

