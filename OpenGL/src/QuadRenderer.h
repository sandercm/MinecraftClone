#pragma once
#include <glm/glm.hpp>
#include <vector>
#include "Model.h"
class Camera;

class QuadRenderer {
public:
	QuadRenderer();
	void add(const glm::vec3& position);
	void renderQuads(const Camera& camera);

private:
	std::vector<glm::vec3> m_quads;

	Model m_quadModel;
	BasicShader m_shader;
	BasicTexture m_basicTexture;
};

