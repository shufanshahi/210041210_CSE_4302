#include<iostream>
#include<math.h>
using namespace std;

template <class Type>
class MathOperation
{
    public:
        Type add(Type x, Type y)
        {
            return x+y;
        }
        Type divide(Type x, Type y)
        {
            return x/y;
        }
        Type sqrtt(Type x)
        {
            return sqrt(x);
        }
      
};

int main()
{
    MathOperation<float>m1;
    MathOperation<float>m2;
    MathOperation<double>m3;
    cout<<m1.add(3,4.5)<<endl;
    cout<<m2.divide(3,4)<<endl;
    cout<<m3.sqrtt(2);
}