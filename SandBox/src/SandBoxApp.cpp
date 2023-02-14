
#include <Eclipse.h>

class SandBox : public Eclipse::Application 
{
public:
	SandBox() 
	{

	}

	~SandBox() 
	{

	}
};

Eclipse::Application* Eclipse::CreateApplication() 
{
	return new SandBox();
}