#pragma once
#include "Actor.h"
class Entity :
	public Actor
{
public:
	Entity(float x, float y);
	Entity();

	~Entity();

	float XVelocity = 0;
	float XAcceleration= 0;
	float YVelocity=0;
	float YAcceleration=0;



	void Update() override;
	void setXVelocity(float value);
	void setXAcceleration(float value);
	void setYVelocity(float value);
	void setYAcceleration(float value);
	void Update(float deltaTime);
	void Start() override;
	void Draw() override;

	//velocity vector 3
	RAYMATH_H Vector3 _velocity;
	//acceleration vector
	RAYMATH_H Vector3 _acceleration;



};

