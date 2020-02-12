#include "Actor.h"
#include<math.h>


Actor::Actor()
{
}


Actor::~Actor()
{
}

float Actor::X()
{
	return LocalTransform.m8;
}

float Actor::X(float input)
{
	LocalTransform.m8 = input;
	return LocalTransform.m8;
	UpdateTransform;
}
float Actor::XAbsolute()
{
	return GlobalTransform.m8;
}
float Actor::Y()
{
	return LocalTransform.m9;
}

float Actor::Y(float input)
{
	LocalTransform.m8 = input;
	return LocalTransform.m9;
	UpdateTransform;
}
float Actor::YAbsolute()
{
	return GlobalTransform.m9;
}
float Actor::GetRotation()
{
	return (float)std::atan2(GlobalTransform.m1, GlobalTransform.m0);
}