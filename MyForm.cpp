#include "MyForm.h"
#include <Windows.h>
using namespace UiDesign;

int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show)
{
	MyForm Form1;
	Form1.ShowDialog();
}