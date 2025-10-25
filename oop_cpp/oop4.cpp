#include <iostream>
#include <string>

using namespace std;

class Book 
{
    string title;
    string author;
    int pages;

public:
    Book(string t, string a, int p) : title(t), author(a), pages(p) {}

    void printinfo() 
    {
        cout << "Title: " << title<< endl << "Author: " << author << endl << "Pages: " << pages;
    }
};
int main()
{
Book mybook("Horse from Valona", "Smigol asmajdik", 100);
mybook.printinfo();
return 0;
}