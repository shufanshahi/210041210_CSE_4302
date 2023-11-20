#include<iostream>
#include<string>
using namespace std;

class Product{
    public:
        string title;
        string author_director;
        int id;
        static int totol_product;
    public:
        Product(string title,string author_director,int id)
        {
            this->title = title;
            this->author_director = author_director;

            totol_product++;

            this->id = id;
        }
        int getId()
        {
            return id;
        }
        virtual void displayInfo() const = 0;

        bool operator >(Product &p)
        {
            if(id > p.getId())
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};

int Product::totol_product = 0;

class Book:public Product{
    private:

    public:
        Book(string titlee,string author_directorr,int idd):Product(titlee,author_directorr,idd)
        {

        }

        void displayInfo() const{
            cout<<"The title is "<<title<<endl;
            cout<<"The author is "<<author_director<<endl;
            cout<<"The id is "<<id<<endl;
        }
};

class DVD:public Product
{
    private:
    
    public:
        DVD(string titlee,string author_directorr,int idd):Product(titlee,author_directorr,idd)
        {

        }
        void displayInfo() const{
            cout<<"The title is "<<title<<endl;
            cout<<"The director is "<<author_director<<endl;
            cout<<"The id is "<<id<<endl;
        }
};

void mySort(Product* x[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
                swap(x[j],x[j+1]);
        }
    }
}



int main()
{
    Book b1("Game of kings part1", "George1", 1);
    Book b2("Game of kings part2", "George2", 2);
    Book b3("Game of kings part3", "George3", 3);
    Book b4("Game of kings part4", "George4", 4);
    Book b5("Game of kings part5", "George5", 5);

    DVD d1("Pirates of the carabian part1","Jake sparrow1", 6);
    DVD d2("Pirates of the carabian part2","Jake sparrow2", 7);
    DVD d3("Pirates of the carabian part3","Jake sparrow3", 8);
    DVD d4("Pirates of the carabian part4","Jake sparrow4", 9);
    DVD d5("Pirates of the carabian part5","Jake sparrow5", 10);

    Product* pro[10];

    pro[0] = &d5;
    pro[1] = &d4;
    pro[2] = &d3;
    pro[3] = &b3;
    pro[4] = &b4;
    pro[5] = &b5;
    pro[6] = &d1;
    pro[7] = &d2;
    pro[8] = &b1;
    pro[9] = &b2;

    cout<<"Total Products "<<Product::totol_product<<endl;

    cout<<"****************Before sort**********************"<<endl;
    for(int i=0;i<10;i++)
        {pro[i]->displayInfo(); cout<<endl;}
    
    mySort(pro,10);
    
    cout<<"****************After sort**********************"<<endl;
    for(int i=0;i<10;i++)
        {pro[i]->displayInfo(); cout<<endl;}
    




}