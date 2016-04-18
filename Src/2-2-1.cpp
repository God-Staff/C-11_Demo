#include <climits>
#include <cstdio>

 
using namespace std;


int main() {
   
	long long ll_min=LLONG_MIN;
	long long ll_max=LLONG_MAX;
	unsigned long long ull_max=ULLONG_MAX;
	printf("ll_min:%lld\n",ll_min);				//ll_min  : -9223372036854775808
	printf("ll_max:%lld\n",ll_max);				//ll_max  :  9223372036854775807
	printf("ull_max:%llu\n",ull_max);			//ull_max : 18446744073709551615
 
    return 0;
}




