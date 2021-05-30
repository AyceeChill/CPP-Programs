#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book
{
protected:
    string title;
    string author;

public:
    //this class does not have a default const so this const must be initialized by derived class const
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0; //pure virtual func
};

class MyBook : public Book
{
    int price;

public:
    //the derived class const must initialize the abstract class const explicitly
    MyBook(string title, string author, int p) : Book(title, author)
    {
        price = p;
    }
    void display() //pure virltual func defination
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
