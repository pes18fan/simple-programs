#include <cstring>
#include <iostream>
using std::cout;

class Staff {
  protected:
    int staff_id;

  public:
    Staff(int id) { staff_id = id; }
    int get_id() { return staff_id; }
};

class Lecturer : public Staff {
  protected:
    char subject[30];

  public:
    Lecturer(int id, const char* sub) : Staff(id) { strncpy(subject, sub, 30); }
    char* get_subject() { return subject; }
};

class Admin : public Staff {
  protected:
    char post_department[30];

  public:
    Admin(int id, const char* pd) : Staff(id) {
        strncpy(post_department, pd, 30);
    }
    char* get_post_department() { return post_department; }
};

class Librarian : public Staff {
  protected:
    char shift[30];

  public:
    Librarian(int id, const char* s) : Staff(id) { strncpy(shift, s, 30); }
    char* get_shift() { return shift; }
};

int main() {
    Lecturer l(0, "Maths");
    Admin a(1, "BCT");
    Librarian lib(2, "evening");

    cout << "Lecturer:\n";
    cout << "ID: " << l.get_id() << "\n";
    cout << "Subject: " << l.get_subject() << "\n";

    cout << "Admin:\n";
    cout << "ID: " << a.get_id() << "\n";
    cout << "Department: " << a.get_post_department() << "\n";

    cout << "Librarian:\n";
    cout << "ID: " << lib.get_id() << "\n";
    cout << "Shift: " << lib.get_shift() << "\n";
}
