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

uniform float millis;

void main()
{
	float c = (sin(pos.x * 16.0 + millis/1000.0) + 1.0) / 2.0;
	gl_FragColor = vec4(c, 0.0, 1.0, 1.0);
}