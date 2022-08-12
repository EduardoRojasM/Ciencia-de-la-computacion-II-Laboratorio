#include <iostream>

using namespace std;

//En los demas casos
template <int T>
struct SumaDigitos{
    enum{ 
        value = SumaDigitos<T/10>::value + T%10
    };
};

//En caso de ser 0
template <>
struct SumaDigitos <0>{
    enum{ 
        value = 0
    };
};

int main(){
    int x = SumaDigitos<1232>::value;
    cout << x << endl;
    return 0;
}