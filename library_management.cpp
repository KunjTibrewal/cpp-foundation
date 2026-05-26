#include<iostream>
#include<iomanip>

using namespace std;

struct book{
    int id, quantity;
    string title, author, genre;
};
book index[100];
typedef struct member{
    int id, borrowed_book[3], borrowed_quantity;
    string name, password;
    bool active;
} m;
m member[20];
int no_of_member = 0, no_of_different_books = 0;

int register_new_member(), member_login(), librarian_login();

int main(){
    int initial;
    while(true){
        cout << endl << "WELCOME TO C++ LIBRARY";
        cout << endl << "1. Member Login\n2. Librarian Login\n3. Exit\n";
        cin >> initial;
    switch(initial){
        case 1: member_login(); break;
        case 2: librarian_login(); break;
        case 3: return 0;
        default: cout << endl << "Invalid Input"; break;
    }
}
}

int browse_all_books(int), search_book(int), my_borrowed_books(int), borrow_book(int, int), return_book(int, int), deactivate_membership(int);

int member_login(){
    int id, initial; 
    string password;
    cout << endl << "Enter your ID: ";
    cin >> id;
    for (int i = 0; i < no_of_member; i++){
        if (member[i].id == id ){
            if (member[i].active == false){
                cout << endl << "ID deactivated, contact librarian"; return 0;
            }
            else {
            cout << endl << "Name: " << member[i].name;
            cout << endl << "Enter Password: ";
            cin >> password;
                for(int j = 3; j > 0; j--){
                    if(password == member[i].password){
                        while(true){
                        cout << endl << "1. Browse All Books\n2. Search Book\n3. My Borrowed Books\n4. Borrow Book\n5. Return Book\n6. Deactivate Membership\n7. Logout\n";
                        cin >> initial;
                        switch(initial){
                            case 1: browse_all_books(i); break;
                            case 2: search_book(i); break;
                            case 3: my_borrowed_books(i); break;
                            case 4: borrow_book(i, 0); break;
                            case 5: return_book(i, 0); break;
                            case 6: deactivate_membership(i); break;
                            case 7: return 0;
                            default: cout << endl << "Invalid Input";
                        }
                        }
                    }
                    else {
                        cout << endl << "Incorrect password. Try Again. " << j-1 << " attempts left:";
                        cin >> password;
                    }
                } cout << endl << "Too many incorrect attempts... Account deactivated, contact manager";
                  member[i].active = false; return 0;
            }
        }
    } 
    cout << endl << "No Member Found"; return 0;
}

int browse_all_books(int user){
    int book_id;
    cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
    for (int i = 0; i < no_of_different_books; i++){
        cout << endl << setw(4) << index[i].id << setw(20) << index[i].title << setw(20) << index[i].author << setw(20) << index[i].genre << setw(20) << (index[i].quantity > 0 ? "Available" : "Not Available");
    }
    cout << endl << "Enter book id to borrow(-1 to go back): ";
    cin >> book_id;
    while (book_id != -1 && (book_id < 1 || book_id > no_of_different_books)){
        cout << endl << "Enter a valid input: ";
        cin >> book_id;
    }
    switch(book_id){
        case -1: return 0;
        default: borrow_book(user, book_id); return 0;
    }
}

int search_book(int user){
    int initial, borrow;
    string search;
    bool found = false;
    cout << endl << "Enter Search Type:\n1. Title\n2. Author\n3. Genre\n4. Exit\n";
    cin >> initial; 
    while(initial < 1 || initial > 4){
        cout << "Invalid Input. Try Again: ";
        cin >> initial;
    }
    switch (initial){
        case 1: cout << endl << "Search Title: ";
                cin >> search;
                cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
                for (int i = 0; i < no_of_different_books; i++){
                    if(index[i].title == search){
                        cout << endl << setw(4) << index[i].id << setw(20) << index[i].title << setw(20) << index[i].author << setw(20) << index[i].genre << setw(20) << (index[i].quantity > 0 ? "Available" : "Not Available");                     
                        found = true;   
                    }
                } break;
        case 2: cout << endl << "Search Author: ";
                cin >> search;
                cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
                for (int i = 0; i < no_of_different_books; i++){
                    if(index[i].author == search){
                        cout << endl << setw(4) << index[i].id << setw(20) << index[i].title << setw(20) << index[i].author << setw(20) << index[i].genre << setw(20) << (index[i].quantity > 0 ? "Available" : "Not Available");        
                        found = true;                
                    } 
                } break;
        case 3: cout << endl << "Search Genre: ";
                cin >> search;
                cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
                for (int i = 0; i < no_of_different_books; i++){
                    if(index[i].genre == search){
                        cout << endl << setw(4) << index[i].id << setw(20) << index[i].title << setw(20) << index[i].author << setw(20) << index[i].genre << setw(20) << (index[i].quantity > 0 ? "Available" : "Not Available");               
                        found = true;         
                    } 
                } break;
        case 4: return 0;
        }
    if (found == true){
        cout << endl << "Enter book id to borrow(-1 to go back): ";
        cin >> borrow;
        while (borrow != -1 && (borrow < 1 || borrow > no_of_different_books)){
        cout << endl << "Enter a valid input: ";
        cin >> borrow;
        }
        switch(borrow){
            case -1: return 0;
            default: borrow_book(user, borrow); return 0;
        }
    }
    else {
        cout << endl << "No Book Found"; return 0;
    }
}

int my_borrowed_books(int user){
    int book;
    cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre";
    if (member[user].borrowed_quantity > 0){
        for(int i = 0; i < no_of_different_books; i++){
            for(int j = 0; j < 3; j++){
                if (member[user].borrowed_book[j] == index[i].id){
                cout << endl << setw(4) << index[i].id << setw(20) << index[i].title << setw(20) << index[i].author << setw(20) << index[i].genre; 
                }
            }
        }
        cout << endl << "Enter book id you want to return(-1 to go back): ";
        cin >> book;
        switch (book){
            case -1: return 0;
            default: return_book(user, book); return 0;
        }
    }
    else {
        cout << endl << "No books borrowed. Enter 1 to borrow books(-1 to go back): ";
        cin >> book;
        while (book != 1 && book != -1){
            cout << endl << "Enter a valid input: ";
            cin >> book;
        }
        switch (book){
            case 1: borrow_book(user, 0); return 0;
            case -1: return 0;
        }
        }
    }

int borrow_book(int user, int book){
    return 0;
}

int return_book(int user, int book){
    return 0;
}

int deactivate_membership(int user){
    return 0;
}

int librarian_login(){
return 0;
}

int register_new_member(){
return 0;
}
