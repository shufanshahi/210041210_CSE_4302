#include<iostream>
using namespace std;

class CurrencyDollar{
    private:
        int dollar;
        int cent;
    public:
        CurrencyDollar()
        {
            dollar=0;
            cent=0;
        }
        CurrencyDollar(int dollar,int cent)
        {
            this->dollar=dollar;
            this->cent=cent;
        }
        void show()
        {
            cout<<dollar<<" "<<cent<<endl;
        }
    

};
class CurrenceyEuro{
    private:
        int euro;
        int cent;
    public:
        CurrenceyEuro()
        {
            euro=0;
            cent=0;
        }
        CurrenceyEuro(int euro,int cnet)
        {
            this->euro=euro;
            cent=cnet;
        }
        void show()
        {
            cout<<euro<<" "<<cent<<endl;
        }
};

class CurrencyBDT{
    private:
        int BDT;
        int poisha;
    public:
        CurrencyBDT()
        {
            BDT=0;
            poisha=0;
        }
        CurrencyBDT(int taka,int poisha)
        {
            BDT=taka;
            this->poisha=poisha;
        }
    operator CurrencyDollar () const
    {
        double dollars;
        dollars= BDT*0.0091+((BDT*0.0091)/100);
        int dollar = (int) dollars;
        int cent= (dollars - dollar) * 100;
        return CurrencyDollar(dollar,cent);
        
    }

    operator CurrenceyEuro() const
    {
        double euros;
        euros = BDT*0.0085+((BDT*0.0085)/100);
        int euro=(int) euros;
        int cent=(euros-euro)*100;
        return CurrenceyEuro(euro,cent);
    }

    void show()
    {
        cout<<BDT<<" "<<poisha<<endl;
    }
    

};


int main()
{
    CurrencyBDT taka(1000,20);
    CurrencyDollar dollar=taka;
    CurrenceyEuro euro= taka;

    taka.show();
    dollar.show();
    euro.show();
    
}