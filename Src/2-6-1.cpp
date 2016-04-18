/**
 * noexcept 修饰符和noexcept操作符
 */

#include <iostream>

using namespace std;

void Throw(){throw 1;}
void NpBlockThrow() {Throw();}
void NpBlockThrow() noexcept { Throw(); }

int main()
{
	try{
		Throw();
	}catch(...){
		cout<<"Found Throw."<<endl;
	}
		try{
		NoBlockThrow();
	}catch(...){
		cout<<"Found NoBlockThrow."<<endl;
	}
		try{
		BlockThrow();
	}catch(...){
		cout<<"Found BlockThrow."<<endl;
	}

}