#pragma once


#ifdef ES_PLATFORM_WINDOWS

extern Eclipse::Application* Eclipse::CreateApplication();
int main(int argc, char** argv)
{
	printf("Eclipse Engine");
	auto app = Eclipse::CreateApplication();

	app->Run();
	delete app;
}
#endif
