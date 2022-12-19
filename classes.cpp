#include <iostream>

using namespace std;

class Book {
    private:
        double rating;
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "No Title";
            author = "No Author";
            pages = 0;
            rating = 0;
        }

        Book(string aTitle, string aAuthor, int aPages, double aRating) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;

            setRating(aRating);
        }

        void setRating(double aRating) {
            if (aRating >= 0 && aRating <= 5) {
                rating = aRating;
            } else {
                rating = 0;
            }
        }

        double getRating() {
            return rating;
        }   

        bool longBook() {
            if (pages > 250) {
                return true;
            }
            return false;
        }
};

class ForeignBook : public Book {
    public:
        string language;
    
    ForeignBook(string aTitle, string aAuthor, int aPages, double aRating, string aLanguage) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            language = aLanguage;

            setRating(aRating);
        }

    void translate() {
        cout << title << " is translating....\n";
    }
};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500, 4.8);
    Book book2("Lord of the Rings", "Tolkein", 700, 25);
    Book book3;
    ForeignBook book4("Hunger Games", "Suzanne Collins", 400, 4.9, "Spanish");

    cout << book1.title << "\n";
    cout << book2.title << "\n";  
    cout << book3.title << "\n\n";
    
    cout << book1.longBook() << "\n";
    cout << book3.longBook() << "\n\n";   

    cout << book1.getRating() << "\n";
    cout << book2.getRating() << "\n\n";

    cout << book4.language << "\n";
    book4.translate();

    return 0;
}