#include <cassert>
#include <iostream>
using namespace std;

//枚举编译器对各种特性的支持，每个枚举占一位
enum FeatureSupports{
	C99			=	0x0001,
	ExtInt		=	0x0002,
	SAssert		=	0x0004,
	NoExcept	=	0x0008,
	SMAX		=	0x0010,
};

//一个编译器类型，包括名称，特性支持等
struct Compiler
{
	const char * name;
	int spp;
};

int main()
{

	 assert((SMAX -1)== (C99 | ExtInt | SAssert | NoExcept ));
	 Compiler a={"abc",(C99 | SAssert)};
	 if (a.spp & C99)
	 {
	 	//...
	 	std::cout<<"true";
	 }
	return 0;
}