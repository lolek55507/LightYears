#include "EntryPoint.h"
#include "framework/application.h"
int main()
{
	ly::Aplication* app = GetApplication();

	app->Run();
	delete app;
}