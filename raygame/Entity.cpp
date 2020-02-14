#include "Entity.h"





Entity::Entity()
{
}


Entity::~Entity()
{
}
Entity::Entity(float x, float y)
{
	X(x);
	Y(y);
}
void Entity::Update()
{

}

void Entity::setXVelocity(float value)
{
	XVelocity = value;
}

void Entity::setXAcceleration(float value)
{
	XAcceleration = value;
}

void Entity::setYVelocity(float value)
{
	YVelocity = value;
}

void Entity::setYAcceleration(float value)
{
	YAcceleration = value;
}
