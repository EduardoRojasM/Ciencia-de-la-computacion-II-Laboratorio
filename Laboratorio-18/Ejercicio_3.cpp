#include <iostream>

using namespace std;

template<int T, int P>
struct Potencia
{
    enum{ 
        value = T * Potencia<T,P-1>::value
    };
};


template<int T>
struct Potencia<T,0>
{
    enum{
        value = 1
    };
};

int main()
{
    cout<<Potencia<4,3>::value;
}