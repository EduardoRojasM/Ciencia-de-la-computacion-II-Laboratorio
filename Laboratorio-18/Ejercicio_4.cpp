#include <iostream>

using namespace std;

template <int T>
struct Binario{
    enum{ 
        value = (T%2) + 10 * Binario<T/2>::value
    };
};

template <int T>
struct Hexadecimal{
    enum{ 
        value = (T%16) + 10 * Binario<T/16>::value
    };
};

//En caso de ser 0
template <>
struct Binario <0>{
    enum{ 
        value = 0
    };
};

//Solo logre que funcionara sin letras 
int main(){
    int x = Hexadecimal<25>::value;
    cout << x << endl;
    return 0;
}