#include "Loader.h"
#include <GL\glew.h>

Loader::Loader()
{
	vaos = new std::vector<unsigned int>();
	vbos = new std::vector<unsigned int>();
}

Loader::~Loader()
{
	for (auto vao: *vaos)
	{
		glDeleteVertexArrays(1, &vao);
	}
	for (auto vao : *vaos)
	{
		glDeleteBuffers(1, &vao);
	}
	delete(vaos);
	delete(vbos);
}

RawModel Loader::loadToVao(const float* positions, unsigned int size)
{
	unsigned int vaoID = createVAO();
	storeDataInAttribList(0, positions, size);
	unbindVAO();
	return RawModel(vaoID, size);
}

unsigned int Loader::createVAO()
{
	unsigned int vaoID = 0;
	glGenVertexArrays(1, &vaoID);
	vaos->push_back(vaoID);
	glBindVertexArray(vaoID);
	return vaoID;
}

void Loader::storeDataInAttribList(const unsigned int attribID, const float* data, unsigned int size)
{
	unsigned int vboID = 0;
	glGenBuffers(1, &vboID);
	vbos->push_back(vboID);
	glBindBuffer(GL_ARRAY_BUFFER, vboID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float) * size, data, GL_STATIC_DRAW);
	glVertexAttribPointer(attribID, 3, GL_FLOAT, false, 0, 0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Loader::unbindVAO()
{
	glBindVertexArray(0);
}
