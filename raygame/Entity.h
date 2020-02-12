#pragma once
#include "Actor.h"
class Entity :
	public Actor
{
public:
	Entity();
	~Entity();

	float XVelocity;
	float XAcceleration;

	float YVeloctiy;
	float YAcceleration;

	void Update() override;
	void Start() override;
	void Draw() override;

};

