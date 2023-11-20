# include<iostream>
#include<math.h>
using namespace std;

template <class Type>
class MathOperation
{
    public:
        class Range
        {

        };
        Type add(Type x, Type y)
        {
            return x+y;
        }
        Type divide(Type x, Type y)
        {
            if(y==0)
                throw Range();
            else
            return x/y;
        }
        Type sqrtt(Type x)
        {
            if(x<0)
                throw Range();
            return sqrt(x);
        }
      
};

int main()
{
        MathOperation<int>m1;
       
    try{
       
        cout<<m1.add(3,4)<<endl;
        cout<<m1.divide(12,3)<<endl;
        cout<<m1.divide(12,0)<<endl;
        
    }
    catch(MathOperation<int>::Range)
    {
        cout<<"Error 404"<<endl;;
    }
   
    
}
