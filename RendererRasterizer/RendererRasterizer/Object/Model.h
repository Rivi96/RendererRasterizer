#pragma once
#include <vector>
#include "../Math/Math.h"
#include "..//Object/Triangle.h"

using namespace std;

class Model
{
public:
	vector<float3> vertices;
	vector<int3> vIndexes;

	vector<Material> materials;
	vector<int> mIndexes;

public:
	int getVerticesAmount();
	int getIndexesAmount();
};