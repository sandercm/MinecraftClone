#pragma once
#include "RawModel.h"
#include <vector>
class Loader
{
public:
	Loader();
	~Loader();
	RawModel loadToVao(const float* positions, unsigned int size);
private:
	unsigned int createVAO();
	void storeDataInAttribList(const unsigned int attribID, const float* data, unsigned int size);
	void unbindVAO();
	std::vector<unsigned int>* vaos;
	std::vector<unsigned int>* vbos;
};

