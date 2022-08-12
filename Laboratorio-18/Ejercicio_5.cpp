#include <iostream>

using namespace std;

template <int T>
struct Binario{
    enum{ 
        value = (T%2) + 10 * Binario<T/2>::value
    };
};

//En caso de ser 0
template <>
struct Binario <0>{
    enum{ 
        value = 0
    };
};

int main(){
    int x = Binario<31>::value;
    cout << x << endl;
    return 0;
}