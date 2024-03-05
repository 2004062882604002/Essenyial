# include<iostream>
# include<string>

using namespace std;

int main()
{
    string first_name,last_name;
    cout<<"Please enter your first name and last_name:";
    cin>>first_name>>last_name;
    cout<<'\n'<<"Hello,"<<last_name<<" "<<first_name<<"… and goodbye! \n";

    system("pause");
    return 0;
}