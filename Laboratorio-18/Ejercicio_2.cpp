#include <iostream>

using namespace std;

//En los demas casos
template <int T>
struct Fibonacci{
    enum{ 
        value = Fibonacci<T-1>::value + Fibonacci<T-2>::value 
    };
};

//En caso de ser 1
template <>
struct Fibonacci <1>{
    enum{ 
        value = 1
    };
};

//En caso de ser 0
template <>
struct Fibonacci <0>{
    enum{ 
        value = 0
    };
};

int main(){
    int x = Fibonacci<12>::value;
    cout << x << endl;
    return 0;
}