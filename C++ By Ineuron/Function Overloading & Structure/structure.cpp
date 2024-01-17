#include<iostream>
#include<string.h>
using namespace std;
struct Book {
    int bookid;
    char title[20];
    float price;
    void displayBook() {
    cout<<"\n"<<bookid<<" "<<title<<" "<<price;
     }

    void inputBook() {
    cout<<"Enter bookid, title, price";
    cin>>bookid;
    cin.ignore();
    cin.getline(title,20);
    cin>>price;
     }
};
int main() {
    Book b1={1, "C",425.0f};
    Book b2, b3;
    b2.bookid=2;
    strcpy(b2.title,"CPP");
    b2.price = 324.0f;
    b3.inputBook();
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout<<endl;
    return 0;
}

