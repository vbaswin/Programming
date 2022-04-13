#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;

struct book {
    int id;
    string name;
    int quantity;
    int borrowed;

    book() {
        id = 0;
        name = "";
        quantity = 0;
        borrowed = 0;
    }
    void add_book() {
        cout << "Enter book info: id & name & total quantity: ";
        cin >> id >> name >> quantity;
    }
    void print() {
        if (id == 0)
            return;
        cout << "id = " << id << " name = " << name << " total quantity: "
            << quantity << " total borrowed: " << borrowed << "\n";
    }
    bool search(string str) {
        int name_len = name.length(), str_len = str.length();
        for (int i = 0; i < name_len; ++i) {
            int tmp = i;
            for (int j = 0; j <= str_len; ++j, ++tmp) {
                if (j == str_len) {
                    cout << name << "\n";
                    return true;
                }
                if (name[tmp] != str[j])
                    break;
            }
        }
        return false;
    }
    int search_id(string b_str) {
        if (name == b_str)
            return id;
        return -1;
    }
    bool borrow() {
        if (quantity == 0 || quantity == borrowed) {
            cout << "Book not in stock. Come back later\n";
            return false;
        }
        ++borrowed;
        return true;
    }
};

struct user {
    string username;
    int national_id;
    int borrow_no;
    int book_ids[50];

    user() {
        username = "";
        national_id = 0;
    }
    void add_user() {
        cout << "Enter your username and national id: ";
        cin >> username >> national_id;
    }
    void print() {
        cout << "user " << username << " id " << national_id
            << " borrowed books: ";
        for (int i = 0; i < borrow_no; ++i)
            cout << book_ids[i] << " ";
        cout << "\n";
    }
    int search_id(string u_str) {
        if (u_str == username)
            return national_id;
        return -1;
    }
    void borrow(int book_id) {
        book_ids[borrow_no++] = book_id;
    }
};

struct library_system {
    book books[MAX];
    user users[MAX];
    int len_book, len_user;
    library_system() {
        len_book = 0;
        len_user = 0;
    }
    void menu() {
        cout << "Library Menu;\n";
        cout << "1) add_book\n";
        cout << "2) search_books\n";
        cout << "3) print_who_borrowed_book_by_name\n";
        cout << "4) print_library_by_id\n";
        cout << "5) print_library_by_name\n";
        cout << "6) add_user\n";
        cout << "7) user_borrow_book\n";
        cout << "8) user_return_book\n";
        cout << "9) print_users\n";
        cout << "10) Exit\n\n";
    }
    void run() {
        menu();
        while (true) {
            int choice;
            cout << "Enter your menu choice [1 - 10]: ";
            cin >> choice;
            if (choice == 1)
                books[len_book++].add_book();
            else if (choice == 2)
                search_books();
            else if (choice == 3);
            else if (choice == 4)
                print_library_by_id();
            else if (choice == 5)
                print_library_by_name();
            else if (choice == 6)
                users[len_user++].add_user();
            else if (choice == 7)
                user_borrow_book();
            else if (choice == 8);
            else if (choice == 9)
                print_users(); 
            else if (choice == 10)
                break;
            else
                cout << "Incorrect input\n";
        }
    }
    int user_index(string u_str) {
        int res, i;
        for (i = 0; i < len_user; ++i) {
            res = users[i].search_id(u_str);
            if (res != -1)
                break;
        }
        return i;
    }
    int book_index(string b_str) {
        int res, i;
        for (i = 0; i < len_book; ++i) {
            res = books[i].search_id(b_str);
            if (res != -1)
                break;
        }
        return i;
    }
    void user_borrow_book() {
        cout << "Enter user and book name: ";
        string u_str, b_str;
        cin >> u_str >> b_str;

        int user_idx, book_idx;
        user_idx = user_index(u_str);
        book_idx = book_index(b_str);

        if (user_idx == len_user) {
            cout << "\nuser not found\n";
            return;
        }
        if (book_idx == len_book) {
            cout << "\nbook not found\n";
            return;
        }
        
        if (!books[book_idx].borrow())
            return;
        users[user_idx].borrow(books[book_idx].id);
    }
    void search_books() {
        cout << "Enter name or part of name: ";
        string str;
        cin >> str;

        int n = 0;
        bool res;
        for (int i = 0; i < len_book; ++i) 
            res += books[i].search(str);
        if (!res)
            cout << "no book found!\n";
    }
    static bool cmp_id(book& a, book& b) {
        return a.id < b.id;
    }
    static bool cmp_name(book& a, book& b) {
        return a.name < b.name;
    }
    void print_books() {
        cout << "\n";
        for (int i = 0; i < len_book; ++i)
            books[i].print();
    }
    void print_users() {
        cout << "\n";
        for (int i = 0; i < len_user; ++i)
            users[i].print();
    }
    void print_library_by_id() {
        sort(books, books + len_book, cmp_id);
        print_books();
    }
    void print_library_by_name() {
        sort(books, books + len_book, cmp_name);
        print_books();
    }
};

int main() {    
    // freopen("c.in", "rt", stdin);
    library_system library = library_system();
    library.run();
    return 0;
}
