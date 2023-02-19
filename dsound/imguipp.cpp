#include "imguipp.h"
namespace imguipp
{
	ImVec4 to_vec4(float r, float g, float b, float a)
	{
		return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
	}
}