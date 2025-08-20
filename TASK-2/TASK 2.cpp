#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void registerUser() {
    string user, pass;
    cout << "\n--- Register ---\n";
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    ofstream file("users.txt", ios::app);
    file << user << " " << pass << endl;
    file.close();
    cout << "Registration successful!\n";
}
void loginUser() {
    string user, pass, u, p;
    cout << "\n--- Login ---\n";
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;
    ifstream file("users.txt");
    bool success = false;
    while (file >> u >> p) {
        if (u == user && p == pass) {
            success = true;
            break;
        }
    }
    file.close();
    if (success) cout << "Login successful!\n";
    else cout << "Invalid username or password!\n";
}
int main() {
    int choice;
    while (true) {
        cout << "\n1. Register\n2. Login\n3. Exit\nChoose: ";
        cin >> choice;

        if (choice == 1) registerUser();
        else if (choice == 2) loginUser();
        else if (choice == 3) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}
