#include <cassert>
using namespace std;

char * ArrayAlloc(int n){
	//若n<=0时，退出，防止程序陷入混乱而导致死机
	assert(n>0);
	return new char [n];
}

int main(){

	char *a=ArrayAlloc(0);

	return 0;

}

//发布程序时，必须要把断言禁掉，否则客户体验会不好
// #ifndef NDEBUG
// #define assert(expr) (static_cast<void> (0))
// #else
// ...
// #endif