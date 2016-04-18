#include <string>
#include <iostream>
 
using namespace std;

//void FuncFial(string func_name =__func__){};	//该行无法通过编译--参数声明时，__func__还未被定义
struct TestStruct{
	TestStruct () : name(__func__){}
	const char* name;
} ;

int main() {
   
   TestStruct ts;
   cout<<ts.name<<endl;
 
    return 0;
}