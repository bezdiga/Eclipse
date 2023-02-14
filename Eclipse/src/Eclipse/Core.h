#pragma once

#ifdef ES_PLATFORM_WINDOWS
	#ifdef ES_BUILD_DLL
		#define ECLIPSE_API    __declspec(dllexport)
	#else
		#define ECLIPSE_API    __declspec(dllimport)
	#endif
#endif