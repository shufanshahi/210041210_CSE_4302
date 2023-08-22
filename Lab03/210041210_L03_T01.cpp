#include<iostream>
using namespace std;

class Counter{

        private:
            int count;
            int steps;
        public:
            void setIncrementStep(int step_val)
            {
                steps=step_val;
            }
            int getCount()
            {
                return count;
            }
            void increment()
            {
                count+=steps;
            }
            void resetCount()
            {
                count=0;
            }
            bool isEven()
            {
                if(count%2)
                return false;
                else
                return true;
            }

};

int main()
{
    Counter obj1;
    obj1.resetCount();
    obj1.setIncrementStep(5);
    obj1.increment();
    obj1.increment();
    cout<<obj1.getCount()<<" "<<obj1.isEven();
}