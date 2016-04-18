#include <cassert>
#include <cstring>
using namespace std;

//静态断言
#define assert_static(e)\
do{\
	enum{assert_static__ = 1/(e)};\
}while(0)

template <typename T ,typename U> 
int bit_copy(T& a,U& b)
{
	static_assert( sizeof(b) == sizeof(a) ,"Error is static_assert@@@");
	//memcpy( &a , &b , sizeof(b) );	
}

int main(int argc, char const *argv[])
{
	int a= 0x2468;
	double b;
	bit_copy(a,b);
	return 0;
}