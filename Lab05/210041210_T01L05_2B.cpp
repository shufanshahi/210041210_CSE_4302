#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Product{
    private:
        string name;
        int id;
        float price;
        int quantity;
        string category;
        bool availability_status;
        
    public:
        static vector<pair<string,int>>total;
        int flag=0;
        static int totalproduct;
        static float totalprice;
        Product()
        {

        }

        Product(string name,int id,float price,int quantity)
        {
            this->name=name;
            this->id=id;
            this->price=price;
            this->quantity=quantity;

            totalproduct+=quantity;
            totalprice+=price;

            if(quantity!=0)
            availability_status=true;
        }

        void addToinventory(int added_quantity)
        {
            quantity+=added_quantity;
            totalproduct+=added_quantity;
        }

        void addCategory(string category)
        {
            this->category=category;
            int flagg=0;
            for(auto it:total)
            {
                if(it.first == this->category)
                {
                    flagg++;
                    it.second+=quantity;
                    break;
                }
            }

            if(!flagg)
            {
                total.push_back({category,quantity});
            }
        }

        void purchase(int purchased_quantity)
        {
            if(availability_status)
            {
                quantity-=purchased_quantity;
                totalproduct-=purchased_quantity;

                if(quantity!=0)
                availability_status=false;
            }
        }

        void applyCategoryDiscount(float percent)
        {
            totalprice-=(price*percent)/100;
            price-=(price*percent)/100;

            flag++;
        }

        void applyProductDiscount(float percent)
        {
            if(!flag)
            {
                totalprice-=(price*percent)/100;
                price-=(price*percent)/100;
            }
        }

        void updatePrice(float percent)
        {
            totalprice+=(price*percent)/100;
            price+=(price*percent)/100;
        }

        float displayInventoryValue()
        {
            return (quantity*price);
        }

        void getTotalProductsAvailable()
        {
            for(auto it:total)
            {
                if(it.first == this->category)
                {
                   
                    cout<<it.second<<endl;
                    break;
                }
            }
        }

        ~Product()
        {
            cout<<"Name :"<<name<<endl;
            cout<<"ID :"<<id<<endl;
            cout<<"Price :"<<price<<endl;
            cout<<"Quantity :"<<quantity<<endl;
            cout<<"Availability :"<<availability_status<<endl;
        }


};

int  Product::totalproduct=0;
float Product::totalprice=0;
vector<pair<string,int>> total;



int main()
{

    Product obj1("Toothbrush",2100,200,2);
    Product obj2("Soap",2200,150,1);
    Product obj3("Dalvaja",2300,100,3);
    Product obj4("Toothbrush",2100,200,2);
    Product obj5("Soap",2200,150,1);
    Product obj6("Dalvaja",2300,100,3);
    Product obj7("Toothbrush",2100,200,2);
    Product obj8("Soap",2200,150,1);
    Product obj9("Dalvaja",2300,100,3);


}