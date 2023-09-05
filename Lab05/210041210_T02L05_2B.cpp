#include<iostream>
#include<string>
using namespace std;

class Medicine{
    private:
        string name;
        string genericName;
        int discountPercent=5;
        int unitPrice;
        int number_of_item;

    public:
        Medicine()
        {

        }
        Medicine(string name,string genericName,int unitPrice)
        {
            this->name=name;
            this->genericName=genericName;
            this->unitPrice=unitPrice;
        }

        double updatedPrice(int percent)
        {
            unitPrice-=((unitPrice*percent)/100);
            return unitPrice;
        }

        double getSellingPrice(int nos)
        {
            return (nos*(unitPrice-(((unitPrice*discountPercent)/100))));
        }

        double readjustedPrice()
        {
            double gellsell=getSellingPrice(10)/10;
            double Uprice=updatedPrice(discountPercent);
            return (gellsell-Uprice);
        }

        void resetPrice(int price)
        {
            this->unitPrice=price;
        }

        ~Medicine()
        {
            cout<<"Name :"<<name<<endl;
            cout<<"UnitPrice :"<<unitPrice<<endl;
            cout<<"Generic Name: "<<generic_category<<endl;

        }


};

int main()
{
    Medicine obj1("felxo","diarahoe",10);
    Medicine obj2("Ebatine","headace",20);
    Medicine obj3("paracitamol","fever",30);
}