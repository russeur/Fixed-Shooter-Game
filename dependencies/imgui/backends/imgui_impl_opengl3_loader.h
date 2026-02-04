#pragma once

// ImGui OpenGL3 backend expects gl3w functions in old versions.
// We are using GLAD, so we forward these calls.

#include <glad/glad.h>
#include <GLFW/glfw3.h>

inline int imgl3wInit()
{
    // Use GLFW's function loader for GLAD
    return gladLoadGLLoader((GLADloadproc)glfwGetProcAddress) ? 0 : 1;
}

inline void imgl3wShutdown()
{
    // GLAD doesn't need shutdown, but keep the function for compatibility.
}