#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Window
{
public:
	int setUp(const unsigned int width, const unsigned int height, const char* title);
	void update();
};