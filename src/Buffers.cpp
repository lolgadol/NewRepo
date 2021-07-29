#include <glad/glad.h>
#include "../Headers/Buffers.h"



VAO::VAO()
{
	glGenVertexArrays(1, &this->id);
	printf("%p\n", (void*)glGenVertexArrays);
}

VBO::VBO()
{
	glGenBuffers(1,&this->id);
}

void VAO::bind()
{
	glBindVertexArray(this->id);
}

void VBO::buffer(float vertices[],size_t verticesByteSize)
{
	glBindBuffer(GL_ARRAY_BUFFER, this->id);
	glBufferData(GL_ARRAY_BUFFER, verticesByteSize, vertices, GL_STATIC_DRAW);
}

void VAO::attrib()
{
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
}


