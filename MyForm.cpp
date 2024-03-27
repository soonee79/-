#include "MyForm.h"
#include <Windows.h>
using namespace калькул€тор; // Ќазвание проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);  //им€ формы, если мен€ли
    return 0;
}

