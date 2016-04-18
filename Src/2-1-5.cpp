#include <stdio.h>


//变长参数的宏定义以及__VA_ARGS__
//不太懂！！
#define LOG(...)	{\
	fprintf(stderr, "%s:Line %d:\t", __FILE__,__LINE__);\
	fprintf(stderr, __VA_ARGS__);\
	fprintf(stderr, "\n");\
}

#define PR(...)printf(__VA_ARGS__)

int main() {
   
int x=888;
double ss=111.9;
LOG("x=%d,y=%d",x,33);
LOG("x=%d,y=%s",x,"sd");
LOG("x=%d,y=%f",x,3.12);
LOG("x=%d,y=%f",x,ss);
PR("++\n");
 
 char* ch="asd";
 PR(ch);
 PR((wchar_t)ch);
    return 0;
}