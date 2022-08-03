#include "Calculadora.h"

template <class T, class P, class I>
Calculadora<T,P,I>::Calculadora(T _x, P _y)
{
    x = _x;
    y = _y;
}

template <class T, class P, class I>
I Calculadora<T,P,I>::Suma()
{
    return x+y;
}

template <class T, class P, class I>
I Calculadora<T,P,I>::Multiplicacion()
{
    return x*y;
}

template <class T, class P, class I>
I Calculadora<T,P,I>::Division()
{
    return x/y;
}

template <class T, class P, class I>
I Calculadora<T,P,I>::Resta()
{
    return x-y;
}

template <class T, class P, class I>
Calculadora<T,P,I>::~Calculadora()
{
}
