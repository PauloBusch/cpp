#include <iostream>
#include <stdlib.h>
using namespace std;
struct Janela{
	string titulo;
	int left;
	int top;
};
int main()
{
	Janela j1;
	j1.titulo = "Windows";
	j1.left = 0;
	j1.top = 0;
	
	Janela j2;
	j2.titulo = "Linux";
	j2.left = 250;
	j2.top = 250;

	cout << "O titulo e: " + j1.titulo << endl
		 << "Left: " << j1.left << endl
		 << "Top: "  << j1.top  << endl;
	
	cout << "O titulo e: " + j2.titulo << endl
		 << "Left: " << j2.left << endl
		 << "Top: "  << j2.top  << endl;
	system("pause");
	return 0;
}
