#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
//GLFW is a platform agnostic library for OpenGL and Vulkan development.
//We can use it to create windows, contets and surfaces, inputs and events, etc.

#include <string>

// we need to create a window for our engine.

namespace ve {

    class veWindow {

        public:
            veWindow(int w, int h, std::string name);
            ~veWindow();
        
        private:
            void initWindow();

            GLFWwindow *window;

            
            const int width;
            const int height;

            std::string windowName;
            GLFWwindow *window;
    };
}