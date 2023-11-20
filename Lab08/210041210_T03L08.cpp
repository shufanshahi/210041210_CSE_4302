#include<iostream>
#include<vector>
using namespace std;

class Book{
    private:
        string title;
        string auhtor;
        string publication_date;
        string ISBN;
        int edition;
    public:
        Book(string _title, string _author, string _pub, string isbn,int _ed):title(_title),auhtor(_author),
        publication_date(_pub),ISBN(isbn),edition(_ed){}
        void print()
        {
            cout<<title<<endl;
            cout<<auhtor <<endl;
            cout<< publication_date<<endl;
            cout<<ISBN <<endl;
            cout<< edition<<endl;
            
        }
};

class Member{
    private:
        string name;
        string address;
        string phone_number;
        string email;
        string status;
    public:
        Member(string _name,string _ad,string phone, string mail,string stat):name(_name),address(_ad),
        phone_number(phone),email(mail),status(stat){}
        void print()
        {
            cout<<name <<endl;
            cout<< address<<endl;
            cout<<phone_number <<endl;
            cout<<email <<endl;
            cout<< status<<endl;
        }
        
};

class Library{
    private:
        string name;
        string location;
        string working_hours;
        vector<Book> books;
        vector<Member>members;
    public:
        Library(string _name,string _loc,string _work):name(_name),location(_loc),working_hours(_work){}
        void set_members(string _name,string _ad,string phone, string mail,string stat)
        {
            Member obj(_name,_ad,phone,mail,stat);
            members.push_back(obj);
        }
        void set_book(string _title, string _author, string _pub, string isbn,int _ed)
        {
            Book obk( _title, _author, _pub,  isbn,_ed);
            books.push_back(obk);
        }
        void book_info(int i)
        {
            books[i].print();
        }
        void member_info(int i)
        {
            members[i].print();
        }
    

};





int main()
{
    Library myLibrary("Library of Alexandria","Babilon","10AM - 10PM");

    myLibrary.set_book("Hello","SHAHI","01-02-2023","dhaka",8);
    myLibrary.set_book("Hello1","SHAHI1","02-02-2023","dhaka1",9);
    myLibrary.set_book("Hello2","SHAHI2","03-02-2023","dhaka2",10);
    myLibrary.set_book("Hello3","SHAHI3","04-02-2023","dhaka3",11);
    myLibrary.set_book("Hello4","SHAHI4","05-02-2023","dhaka4",12);
    myLibrary.set_book("Hello5","SHAHI5","06-02-2023","dhaka5",13);
    myLibrary.set_book("Hello6","SHAHI6","07-02-2023","dhaka6",14);
    myLibrary.set_book("Hello7","SHAHI7","08-02-2023","dhaka7",15);
    myLibrary.set_book("Hello8","SHAHI8","09-02-2023","dhaka8",16);
    myLibrary.set_book("Hello9","SHAHI9","10-02-2023","dhaka9",17);

    myLibrary.set_members("Rakin","dhaka","01990676378","rakin@1gamil.com","member");
    myLibrary.set_members("Rakin1","dhaka1","01534782365","raki1n@gamil.com","emplyee");
    myLibrary.set_members("Rakin2","dhaka2","0216478335","rakin2@gamil.com","manger");
    myLibrary.set_members("Rakin3","dhaka3","037562785678","rakin3@gamil.com","owner");
    myLibrary.set_members("Rakin4","dhaka4","04356356786578","rakin@4gamil.com","member");

    myLibrary.book_info(0);
    myLibrary.book_info(1);
    myLibrary.book_info(2);
    myLibrary.book_info(3);
    myLibrary.book_info(4);
    myLibrary.book_info(5);
    myLibrary.book_info(6);
    myLibrary.book_info(7);
    myLibrary.book_info(8);
    myLibrary.book_info(9);

    myLibrary.member_info(0);
    myLibrary.member_info(1);
    myLibrary.member_info(2);
    myLibrary.member_info(3);
    myLibrary.member_info(4);
}