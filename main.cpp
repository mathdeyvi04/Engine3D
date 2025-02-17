#include <Windows.h>
#include <string>

using namespace std;

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
) {
	/*
	Description:
		Calls our window. Acts like the main function in normal .c files.

	Parameters:
		These arguments are like the argc and argv that are in common int main.
		They are not that important, but is necessary for this type of operation.
	*/

	string str1 = "Engine3D";

	wstring temp1 = wstring(str1.begin(), str1.end());

	LPCWSTR pClassName = temp1.c_str();

	WNDCLASSEX features_window = {
		/*
		There are several interesting attributes that can be placed here. And the explanation
		for each of them is too complex. Therefore, I suggest that you seek better explanations
		about the case you deem necessary.

		The following comments are short and just quick explanatory, so they will be in Portuguese.
		*/

		// O tamanho, em bytes, dessa estrutura.
		.cbSize = sizeof(WNDCLASSEX),

		// Os estilos da classe, existem vários tipos na documentação oficial
		.style = CS_OWNDC,

		// Um ponteiro para o procedimento da janela.
		.lpfnWndProc = DefWindowProc,

		// O número de bytes extras a serem alocados seguindo a estrutura de classe de janela.
		.cbClsExtra = 0,

		// O número de bytes extras a serem alocados após a instância da janela.
		.cbWndExtra = 0,

		// Um identificador para a instância que contém o procedimento de janela da classe.
		.hInstance = hInstance,

		.hIcon = nullptr,

		.hCursor = nullptr, 

		.hbrBackground = nullptr,

		.lpszMenuName = nullptr,

		.lpszClassName = pClassName,

		.hIconSm = nullptr,
	};

	RegisterClassEx(
		&features_window
	);

	string str2 = "Exemplo Nome da Janela";

	wstring temp2 = wstring(str2.begin(), str2.end());

	LPCWSTR name_window = temp2.c_str();

	HWND window = CreateWindowEx(
		0,
		pClassName,
		name_window,
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200, 
		200,
		640,
		480,

		// Window parents
		nullptr,
		nullptr,

		hInstance,
		nullptr
	);

	ShowWindow(
		window,
		SW_SHOW
	);

	while (1) {};

	return 0;

}