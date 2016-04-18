/**
 * __cplusplus 宏
 */

#ifndef __cplusplus
 extern "C"{
 #endif
 	//...一些代码
 	#ifdef __cplusplus
 }
 #endif

//检查编译器是否支持C++11
 #if __cplusplus < 201103L ;
	 #error "Should use C++ 11 implementation";
 #endif