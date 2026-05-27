#include<iostream>
#include<iomanip>

using namespace std;

struct library{
    int id, quantity;
    string title, author, genre;
};
library books[100];
struct person{
    int id, borrowed_book[3], borrowed_quantity;
    string name, password;
    bool active;
};
person member[20];
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
                            case 6: deactivate_membership(i); 
                                if (member[i].active == false){ 
                                    return 0;
                                }
                                else{ 
                                    break;
                                }
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
        cout << endl << setw(4) << books[i].id << setw(20) << books[i].title << setw(20) << books[i].author << setw(20) << books[i].genre << setw(20) << (books[i].quantity > 0 ? "Available" : "Not Available");
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
                    if(books[i].title == search){
                        cout << endl << setw(4) << books[i].id << setw(20) << books[i].title << setw(20) << books[i].author << setw(20) << books[i].genre << setw(20) << (books[i].quantity > 0 ? "Available" : "Not Available");                     
                        found = true;   
                    }
                } break;
        case 2: cout << endl << "Search Author: ";
                cin >> search;
                cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
                for (int i = 0; i < no_of_different_books; i++){
                    if(books[i].author == search){
                        cout << endl << setw(4) << books[i].id << setw(20) << books[i].title << setw(20) << books[i].author << setw(20) << books[i].genre << setw(20) << (books[i].quantity > 0 ? "Available" : "Not Available");        
                        found = true;                
                    } 
                } break;
        case 3: cout << endl << "Search Genre: ";
                cin >> search;
                cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre" << setw(20) << "Availability";
                for (int i = 0; i < no_of_different_books; i++){
                    if(books[i].genre == search){
                        cout << endl << setw(4) << books[i].id << setw(20) << books[i].title << setw(20) << books[i].author << setw(20) << books[i].genre << setw(20) << (books[i].quantity > 0 ? "Available" : "Not Available");               
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
    if (member[user].borrowed_quantity > 0){
    cout << endl << setw(4) << "ID" << setw(20) << "Book" << setw(20) << "Author" << setw(20) << "Genre";
        for(int i = 0; i < no_of_different_books; i++){
            for(int j = 0; j < 3; j++){
                if (member[user].borrowed_book[j] == books[i].id){
                cout << endl << setw(4) << books[i].id << setw(20) << books[i].title << setw(20) << books[i].author << setw(20) << books[i].genre; 
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
    int give_back, initial;
    string search;
    bool found = false;
    while(member[user].borrowed_quantity == 3){
        cout << endl << "Maximum books borrowed, return old ones first";
        cout << endl << "1. To return book\n2. To go back\n";
        cin >> give_back;
        while(give_back != 1 && give_back != 2){
            cout << endl << "Invalid Input. Try Again: ";
            cin >> give_back;
        }
        switch (give_back){
            case 1: return_book(user, 0); break;
            case 2: return 0;
        }
    }
    cout << endl << "Issuing book is free for the first 14 days, post 14 days Rs. 10 fine per day will be taken.\n1. Continue\n2. Go Back\n";
    cin >> initial;
    while(initial != 1 && initial != 2){
        cout << endl << "Invalid Input. Try Again: ";
        cin >> initial;
    }
    switch (initial){
        case 1: break;
        case 2: return 0;
    }
    if (book == 0){
        cout << endl << "Enter book ID you want to borrow(-1 to search by name): ";
        cin >> book;
        while (book != -1 && (book < 1 || book > no_of_different_books)){
            cout << endl << "No book found by that id. Enter a valid id: ";
            cin >> book;
        }
        if (book == -1) {
            cout << endl << "Enter Name: ";
            cin >> search;
            for (int i = 0; i < no_of_different_books; i++){
                if (books[i].title == search){
                    book = books[i].id; 
                    found = true; 
                    break;
                }
            }
            if (found == false){
                cout << endl << "No book found"; 
                return 0;
            }
        }
    }
    if(books[book-1].quantity == 0){
        cout << endl << "No copies available"; return 0; 
    }
    member[user].borrowed_book[member[user].borrowed_quantity] = books[book-1].id;
    books[book-1].quantity--;
    member[user].borrowed_quantity++;
    cout << endl << books[book-1].title << " issued to you for 14 days";
    return 0;
}

int return_book(int user, int book){
    int days, fine, pay, j;
    bool found = false;
    if(member[user].borrowed_quantity == 0){
        cout << endl << "No books issued to you. ";
        return 0;
    }
    if (book == 0){
        cout << endl << "Enter book id you want to return: ";
        cin >> book;
        while (book < 1 || book > no_of_different_books){ 
            cout << endl << "Enter a valid input: ";
            cin >> book;
        }
    }
    for (j = 0; j <3; j++){
        if(member[user].borrowed_book[j] == book){ 
            found = true; break;
        }
    }
    if (found == false){
        cout << endl << "No book found... "; return 0;
    }
    cout << endl << "Enter days: ";
    cin >> days;
    if (days > 14){
        fine = (days - 14)*10;
        cout << endl << "You exceeded the free time period by " << days-14 << " days. Pay Rs. " << fine << " or your membership will be deactivated";
        cout << endl << "1. Pay\n";
        cin >> pay;
        if (pay != 1){
            member[user].active = false; return 0;
        }
        else {
            cout << endl << "Paid successfully";
        }
    }
    member[user].borrowed_book[j] = 0;
    member[user].borrowed_quantity--;
    books[book-1].quantity++;
    for (j; j<2; j++){
        member[user].borrowed_book[j] = member[user].borrowed_book[j+1];
        member[user].borrowed_book[j+1] = 0;
    }
    cout << endl << "Book returned successfully";
    return 0;
}

int deactivate_membership(int user){
    int initial;
    cout << endl << "Note: You can not reactivate your membership by your own. You need to contact librarian.";
    cout << endl << "Are you sure you want to proceed? \n1. Yes\n2. Go Back\n";
    cin >> initial;
    while(initial != 1 && initial != 2){
        cout << "Enter a valid input: ";
        cin >> initial;
    }
    switch(initial){
        case 1: member[user].active = false; return 0;
        case 2: return 0;
    }
}

int librarian_login(){
return 0;
}

int register_new_member(){
return 0;
}
