#include "menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int WinMain(void)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projectmath::menu form;
	Application::Run(% form);
}  