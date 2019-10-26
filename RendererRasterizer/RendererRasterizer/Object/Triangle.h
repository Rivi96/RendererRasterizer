#pragma once
#include "../Math/Math.h"

class Triangle
{
public:
	float3 v[3];
	float4 c[3];
public:
	Triangle(float3 v1, float3 v2, float3 v3, float4 c1, float4 c2, float4 c3);
};