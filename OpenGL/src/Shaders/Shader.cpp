#include "Shader.h"

Shader::Shader(const std::string& vertexFile, const std::string& fragmentFile)
	: m_id (loadShaders(vertexFile, fragmentFile)){

}

Shader::~Shader() {

}

void Shader::useProgram() const {

}

void Shader::loadInt(GLuint location, int value) {

}

void Shader::loadFloat(GLuint location, float value) {

}

void Shader::loadVector2(GLuint location, const glm::vec2& vect) {

}

void Shader::loadVector3(GLuint location, const glm::vec3& vect) {

}

void Shader::loadVector4(GLuint location, const glm::vec4& vect) {

}

void Shader::loadMatrix4(GLuint location, const glm::mat4& matrix) {

}

void Shader::getUniforms() {

}
