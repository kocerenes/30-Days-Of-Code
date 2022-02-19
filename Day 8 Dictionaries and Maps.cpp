int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map <string, long> phoneBook;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> num;
        phoneBook[name] = num;
    }
    while(cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}