	/*Beginner Shaders:
	* Solid Color Shader
	A basic shader that outputs a single color (like vec4(0.0, 1.0, 0.0, 1.0))

	Horizontal/Vertical Gradient
	Use pos.x or pos.y to interpolate between two colors.

	2D Gradient
	Mix two gradients to blend across both axes:
	gl_FragColor = vec4(pos.x, pos.y, 0.0, 1.0);

	Ellipse / Circle Mask
	Use length(pos - vec2(0.5)) to create a circle or ellipse.

	Basic Color Animation
	Pass time (uniform float u_Time) and use sin(u_Time) to animate color.
	*/

	/*Intermediate Shaders:
	* Moving Gradient / Scrolling Effect
	Use time and modify texture coords or pos to animate movement.

	Radial Gradient (Circular)
	Use length(pos - center) to fade from center outward.

	Wave / Wobble Effect
	Animate vertex positions with sine waves in the vertex shader.

	Checkerboard Pattern
	Use floor(pos.x * N) to make repeating patterns.

	Color Banding / Stripes
	Use mod(pos.x * N, 1.0) to create stripes.
	*/

	/*Advanced Shaders:
	* UV Distortion
	Distort pos or UVs with noise, sine waves, or mouse input.

	Noise Shader (static or animated)
	Implement a simple hash-based pseudo-random noise function in the fragment shader.

	Basic Lighting (Lambert)
	Calculate lighting using normal vectors and a light direction.

	Texture Mapping
	Use sampler2D and UVs to apply an image to geometry.

	Dynamic Color Palette / LUT
	Remap grayscale or data-driven values to colors using a palette.
	*/

	/*Expert Shaders:
	* CRT Effect (Scanlines, Chromatic Aberration)
	Stylize with time-based distortion, RGB offset, and vignetting.

	Ray Marching a Sphere or SDF Shape
	Render 3D-looking shapes in 2D using distance functions.

	Post-Processing Blur / Bloom Shader
	Apply effects in screen space using multiple samples.

	Water / Ripple Shader
	Animate distortion and refraction based on time.

	Fractal (Mandelbrot or Julia set)
	Iteratively calculate pixel color based on complex math.
	*/
