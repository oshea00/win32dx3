#include "stdafx.h"
#include "MathHelper.h"


MathHelper::MathHelper()
{
}


MathHelper::~MathHelper()
{
}

float MathHelper::Clamp(float value, float min, float max)
{
	if (value < min)
		return min;
	if (value > max)
		return max;
	return value;
}

