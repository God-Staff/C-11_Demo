#include <array>
#include <vector>
#include <iostream>
 
using namespace std;
 
int main() {
    int stack_var;
    array<int, 5> a;
    vector<int> v(5);
 
    cout << "stack area: 0x" << hex << (uintptr_t)&stack_var << endl;
    cout << "a[3] address: 0x" << hex << (uintptr_t)&a[3] << endl;
    cout << "b[3] address: 0x" << hex << (uintptr_t)&v[3] << endl;
 
    return 0;
}