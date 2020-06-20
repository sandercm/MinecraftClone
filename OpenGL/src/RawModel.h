#pragma once
class RawModel
{
public:
	unsigned int vaoID;
	unsigned int vertexCount;
public:
	RawModel(unsigned int vaoID, unsigned int vertexCount) {
		this->vaoID = vaoID;
		this->vertexCount = vertexCount;
	}

};

