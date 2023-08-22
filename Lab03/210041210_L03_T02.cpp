#include<iostream>
#include<string.h>
using namespace std;

class Book{
        private:
            string title;
            string author;
            int pub_year;
            bool available;
        public:
            void setDetails(string temp_title,string temp_author,int temp_year)
            {
                title=temp_title;
                author=temp_author;
                pub_year=temp_year;
            }
            void checkOut()
            {
                available=false;
            }
            void checkIn()
            {
                available=true;
            }
            void displayStatus()
            {
                cout<<"Title: "<<title<<endl<<"Author: "<<author<<endl<<"Year: "<<pub_year<<endl;
                if(available)
                cout<<"Status: Available"<<endl;
                else
                cout<<"Status: Unavailable"<<endl;;
            }
            bool isClassic()
            {
                if((2023-pub_year)>50)
                return true;
                else
                return false;
            }

};

int main()
{
    Book book1;
    book1.setDetails("The Great Sage","Shufan Shahi",550);
    book1.checkOut();
    book1.displayStatus();
    if(book1.isClassic())
    cout<<"Classic";
    else
    cout<<"Non classic";
}