#include<iostream>

using namespace std;

int main()
{
	//支持完整的C标准库
	cout<<"Stardard Clib :"<<__STDC_HOSTED__<<endl;
	//
	cout<<"Stardard C :"<<__STDC__<<endl;

	//cout<<"C Stardard version:"<<__STDC_VERSION__<<endl;
	cout<<"ISO/IEC :"<<__STDC_ISO_10646__<<endl;
	return 0;
}