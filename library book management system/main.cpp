#include <iostream>
using namespace std;

class Book{
    private:
       string book_title;
       string author;
       int copies_available;

    public:
    void inputDetails(){
        cout << "Enter Book Title: "<< endl;
        getline(cin, book_title);

        cout << "Enter Book Author: "<< endl;
        getline(cin, author);

        cout << "Enter number of copies: "<< endl;
        cin >> copies_available;

    }   

    void borrowBook(int books_borrowed){
        copies_available = (copies_available - books_borrowed);

    }

    void displayDetails(){
        cout << "BOOK DETAILS"<< endl;
        cout << "==============================" << endl;
        cout << "Book Title: " << book_title << endl;
        cout << "Book Author: "<< author<< endl;
        cout << "Number of copies available: "<< copies_available<< endl;
        cout << "==============================" << endl;

    }
};

int main(){
    Book book1;

    book1.inputDetails();

    book1.borrowBook(4);

    book1.displayDetails();

    return 0;
}