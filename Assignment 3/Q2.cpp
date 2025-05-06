#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    string publisher;
    float price;

public:
    // Default constructor
    Book() {
        title = "";
        author = "";
        publisher = "";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, string a, string p, float pr) {
        title = t;
        author = a;
        publisher = p;
        price = pr;
    }

    // Function to search by title and author
    bool search(string t, string a) {
        return (title == t && author == a);
    }

    // Function to display book details
    void display() {
        cout << "\n📚 Book Found!" << endl;
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;
        cout << "Publisher : " << publisher << endl;
        cout << "Price     : Rs. " << price << endl;
    }
};

int main() {
    const int size = 3;
    Book inventory[size] = {
        Book("C++", "Bjarne", "Pearson", 499.50),
        Book("Python", "Guido", "O'Reilly", 399.00),
        Book("DS", "Mark", "Pearson", 599.00)
    };

    string searchTitle, searchAuthor;

    cout << "Enter book title to search (single word): ";
    cin >> searchTitle;

    cout << "Enter author name (single word): ";
    cin >> searchAuthor;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (inventory[i].search(searchTitle, searchAuthor)) {
            inventory[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\n❌ Sorry, the book is not available in the shop." << endl;
    }

    return 0;
}
