#include <iostream>
#include <string>

using namespace std;
bool enterWiFi(const std::string& password, int maxAttempts) {
    int attempts = 0;
    string input;

    while (attempts < maxAttempts) {
        cout << "Enter WiFi password: ";
        cin >> input;

        if (input == password) {
            cout << "WiFi connected!\n";
            return true;
        }
        else {
            cout << "Incorrect password. Please try again.\n";
            attempts++;
        }
    }

    cout << "Maximum number of attempts reached. WiFi connection failed.\n";
    return false;
}

int main() {
    cout << "Program WIfi (Tahap Simulasi)\n";
    string Password1 = "Farhann";
    string Password2 = "Rafiii";
    string Password3 = "Rennno";
    int maxAttempts = 3;


    char unit;
    cout << "Jaringan Wifi tersedia: " << endl << endl;
    cout << "___________________________" << endl;
    cout << "|1. Ruang tengah\n";
    cout << "|2. Kamar Tamu\n";
    cout << "|3. Kamar Pribadi\n";
    cout << "---------------------------\n";
    cout << "Mohon Pilih menggunakan nomor yang tersedia ";
    cin >> unit;

    if (unit == '1') {
        cout << "___________________________\n";
        cout << "Ruang tengah\n";
        cout << "___________________________\n";
        cout << "Masukkan Password Wifi: ";
        enterWiFi(Password1, maxAttempts);
        cout << "Wifi Tersambung";
    }
    else if (unit == '2') {
        cout << "___________________________\n";
        cout << "Kamar Tamu\n";
        cout << "___________________________\n";
        cout << "Masukkan Password Wifi: ";
        enterWiFi(Password2, maxAttempts);
        cout << "Wifi Tersambung";
    }
    else if (unit == '3') {
        cout << "___________________________\n";
        cout << "Kamar Pribadi\n";
        cout << "___________________________\n";
        cout << "Masukkan Password Wifi: ";
        enterWiFi(Password3, maxAttempts);
        cout << "Wifi Tersambung";
    }
    else {
        cout << "Mohon Masukkan menggunakan angka";
    }
    return 0;
}