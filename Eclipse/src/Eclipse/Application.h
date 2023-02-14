#pragma once
#include "Core.h"

namespace Eclipse 
{

	class ECLIPSE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defefined in Client
	Application* CreateApplication();
}

