#include<iostream>
#include<string>

using namespace std;

int main()
{
    string user_name;
    cout<<"���������������"<<endl;
    cin>>user_name;
    if(user_name.size()>2)
    {
        cout<<"�������Ҫ��"<<endl;
    }
    else
    {
        cout<<"error!error!"<<endl;
    }
    system("pause");
    return 0;
}
