#pragma once
#include <vector>


class VBO
{
private:
	unsigned int id;
public:
	VBO();
	void buffer(float vertices[],size_t verticesByteSize);
};

class VAO
{
private:
	unsigned int id;

public:
	VAO();
	void bind();
	void attrib();
};