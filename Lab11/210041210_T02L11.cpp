#include<string>
#include <fstream>            //for file-stream functions
#include <iostream>
#include <typeinfo>           //for typeid()
#include <process.h>          //for exit()
using namespace std;


enum product_type {pDVD,pBOOK};


class Product{
    public:
        string title;
        string author_director;
        string id;
        static int totol_product;
        static Product* myProduct[];
    public:
        Product()
        {

        }
        Product(string title,string author_director,string id)
        {
            this->title = title;
            this->author_director = author_director;

            totol_product++;
            

            this->id = id;
        }
        string getId()
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
        virtual product_type get_type();
        static void read_product();
        static void write_product();
        static void display();

};

int Product::totol_product = 0;
Product* Product::myProduct[100];

class Book:public Product{
    private:

    public:
        Book(string titlee,string author_directorr,string idd):Product(titlee,author_directorr,idd)
        {

        }

        Book()
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
        DVD(string titlee,string author_directorr,string idd):Product(titlee,author_directorr,idd)
        {

        }
        DVD(){}
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

product_type Product::get_type()
{
    
    if(typeid(*this) == typeid(DVD))
        return pDVD;
    else
        return pBOOK;
}

void Product::write_product()
{
    
    int size;
    ofstream ouf;
    product_type ptype;

    ouf.open("PRODUCT.DAT", ios::trunc | ios::binary);

    for(int j=0;j<totol_product;j++)
    {
        
        ptype = myProduct[j]->get_type();
        
        ouf.write( (char*)&ptype, sizeof(ptype) );
        switch(ptype)
        {
            case pDVD: size = sizeof(DVD); break;
            case pBOOK: size = sizeof(Book); break;

        }
        ouf.write( (char*)(myProduct[j]), size );
    }
}

void Product::read_product()
{
    int size;
    product_type pType;
    ifstream inf;
    inf.open("PRODUCT.DAT",ios::binary);
    totol_product = 0;
    while(true)
    {
        inf.read((char*)&pType,sizeof(pType));

        // totol_product = 0;
        
        

        if(inf.eof())
            break;

        switch(pType)
        {
            case pDVD:
                myProduct[totol_product] = new DVD;
                size = sizeof(DVD);
                break;
            case pBOOK:
                myProduct[totol_product] = new Book;
                size = sizeof(Book);
                break;
            default: cout << "\nUnknown type in file\n"; return;
        }
        inf.read( (char*)myProduct[totol_product], size  );
        
        totol_product++;
    }
}


void Product::display()
{
    for(int j=0;j<totol_product;j++)
    {
        switch(myProduct[j]->get_type())
        {
            case pDVD: cout<<"Type DVD"<<endl; break;
            case pBOOK: cout<<"Type Book"<<endl; break;
            default: cout << ". Unknown type";
        }
        
        myProduct[j]->displayInfo();
        cout<<endl;
    }
    
}

int main()
{
    
    // Book b1("Game of kings part1", "George1","1");
    // Book b2("Game of kings part2", "George2","2");
    // Book b3("Game of kings part3", "George3","3");
    // Book b4("Game of kings part4", "George4","4");
    // Book b5("Game of kings part5", "George5","5");

    // DVD d1("Pirates of the carabian part1","Jake sparrow1", "6");
    // DVD d2("Pirates of the carabian part2","Jake sparrow2", "7");
    // DVD d3("Pirates of the carabian part3","Jake sparrow3", "8");
    // DVD d4("Pirates of the carabian part4","Jake sparrow4", "9");
    // DVD d5("Pirates of the carabian part5","Jake sparrow5", "1");


   

    // // Product* pro[10];

    // Product::myProduct[0] = &d5;
    // Product::myProduct[1] = &d4;
    // Product::myProduct[2] = &d3;
    // Product::myProduct[3] = &b3;
    // Product::myProduct[4] = &b4;
    // Product::myProduct[5] = &b5;
    // Product::myProduct[6] = &d1;
    // Product::myProduct[7] = &d2;
    // Product::myProduct[8] = &b1;
    // Product::myProduct[9] = &b2;
    

    // Product::write_product();
    
    Product::read_product();
    // cout<<Product::totol_product<<endl;
    
    Product::display();
    

    

//     cout<<"Total Products "<<Product::totol_product<<endl;

//     cout<<"****************Before sort**********************"<<endl;
//     for(int i=0;i<10;i++)
//         {pro[i]->displayInfo(); cout<<endl;}
    
//     mySort(pro,10);
    
//     cout<<"****************After sort**********************"<<endl;
//     for(int i=0;i<10;i++)
//         {pro[i]->displayInfo(); cout<<endl;}
    




}