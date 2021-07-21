#include "MyForm.h"        
#include "MyForm1.h"
using namespace Lab1Form;
[STAThreadAttribute]
int main() {
	MyForm fm;
	fm.ShowDialog();
	return 0;
}
