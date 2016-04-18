#include <string>
#include <iostream>
 
using namespace std;

//预定义标识符 “__func__” 返回所在的函数名
//像这样但不相同
//const char * hello(){
//	static const char* __func__="hello";
//	return __func__;
//}
//
const char* hello(){return __func__;} 
const char* world(){return __func__;} 

int main() {
   
   cout<<hello()<<","<<world()<<endl;
 
    return 0;
}