#include <cstring>
#include <iostream>
using std::cout;

class Book {
  protected:
    char name[30];
    char author[30];

  public:
    Book(const char* n, const char* a) {
        strncpy(name, n, 30);
        strncpy(author, a, 30);
    }

    virtual void read() = 0;
};

class EBook : virtual public Book {
  protected:
    float filesize;

  public:
    EBook(const char* n, const char* a, float fs) : Book(n, a) {
        filesize = fs;
    }
};

class Journal : virtual public Book {
  protected:
    int volume;

  public:
    Journal(const char* n, const char* a, int vol) : Book(n, a) {
        volume = vol;
    }
};

class LibraryItem : public EBook, public Journal {
    int book_id;

  public:
    LibraryItem(const char* n, const char* a, float fs, int vol, int id)
        : EBook(n, a, fs), Journal(n, a, fs), Book(n, a) {
        book_id = id;
    }

    void read() { cout << "Reading " << name << " by " << author << "\n"; }
};

int main() {
    LibraryItem nlh("No Longer Human", "Osamu Dazai", 0, 1, 1);
    LibraryItem nb("Norwegian Wood", "Haruki Murakami", 0, 1, 2);

    nlh.read();
    nb.read();
}
