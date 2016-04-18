#pragma once
//等同于
//_Pragma("once")
//And
// #ifndef	THIS
// #define THIS
// 	...
// #endif
// 告诉编译器只编译一次

#include <string>
#include <iostream>
 
using namespace std;

//预定义标识符 “__func__” 返回所在的函数名
const char* hello(){return __func__;} 
const char* world(){return __func__;} 

int main() {
   
   cout<<hello()<<","<<world()<<endl;
 
    return 0;
}

// #define CONCAT(x) PRAGMA(concat on #x)
// #define PRAGMA(x) _Pragma(#x)
// CONCAT(..\concat.dir)
//可以得到这样的效果：_Pragma(concat on "..\concat.dir")