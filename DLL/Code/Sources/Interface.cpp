#include <pch.h>
#include <Interface.hpp>

#include <Utilities.hpp>

namespace prz
{
	extern "C"
	{
		LOCALIZATION_TOOL_API float test_get_seconds_from_string(const char* str)
		{
			return get_seconds_from_string(str);
		}
	}
	
}
