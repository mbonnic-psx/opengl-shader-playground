#shader vertex
attribute vec3 aPosition;
attribute vec2 aTexCoord;

varying vec2 pos;

void main()
{
	pos = aTexCoord;

	vec4 position = vec4(aPosition, 1.0);
	position.xy = position.xy * 2.;

	gl_Position = position;
}

#shader fragment
precision mediump float;

varying vec2 pos;

void main()
{
	vec4 c1 = vec4(0.476737, 0.298304, 0.226472, 1.0);
	vec4 c2 = vec4(0.313391, 0.259945, 0.946325, 1.0);
	vec4 final_Color= mix(c1, c2, pos.x);

	gl_FragColor = final_Color;
}