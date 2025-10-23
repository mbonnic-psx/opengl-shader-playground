# 🧠 OpenGL Shader Playground

## Overview
**OpenGL Shader Playground** is a minimal C++ application built with **GLFW 3** and **GLEW**, created to test and visualize GLSL shaders.
It parses a single `.shader` file containing both vertex and fragment shaders separated by `#shader vertex` and `#shader fragment` and 
then compiles, links, and renders them on a simple quad.

---

## Basic Shader Script

```
#shader vertex
#version 410 core
        
layout(location = 0) in vec4 position;
        
void main()
{
   gl_Position = position;
};

#shader fragment
#version 410 core

out vec4 color;

uniform vec4 u_Color;

void main()
{
   color = u_Color;
};
```
---

## Screenshots

| Basic Shader | Gradient Shader | Uniform Shader | Fract Shader |
|---------------|----------------|----------------|----------------|
| ![Basic](https://github.com/mbonnic-psx/opengl-shader-playground/blob/master/src/ss/basic_shader.png) | ![Gradient](https://github.com/mbonnic-psx/opengl-shader-playground/blob/master/src/ss/gradient_shader.png) | ![Uniform](https://github.com/mbonnic-psx/opengl-shader-playground/blob/master/src/ss/uniform_shader.png) | ![Fract](https://github.com/mbonnic-psx/opengl-shader-playground/blob/master/src/ss/fract_shader.png) |

---

## Future Plans

- Rendering 3D-looking shapes in 2D using distance functions
- Water / Ripple Shader
          Animate distortion and refraction based on time.
- CRT Shader (Scanlines, Chromatic Aberration)
	Stylize with time-based distortion, RGB offset, and vignetting.
- Pixelation / Tetxure Warping similar to the PS1 style
