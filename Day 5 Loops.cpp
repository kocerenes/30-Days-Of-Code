int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    if (n>=2 && n<=20) {
        for (int i =1; i<=10; i++) {
            cout<<n<<" x "<<i<<" = "<< n*i<<endl;
        }
    }else {}

    return 0;
}