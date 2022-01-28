int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if (N%2 == 1) {
        cout<<"Weird"<<endl;
    }else if (N%2 == 0 && N>2 && N<=5) {
        cout<<"Not Weird"<<endl;
    }else if (N%2 == 0 && N>6 && N<=20) {
        cout<<"Weird"<<endl;
    }else if (N%2==0 && N>20) {
        cout<<"Not Weird"<<endl;
    }

    return 0;
}