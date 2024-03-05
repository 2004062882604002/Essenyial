#include<iostream>
#include<string>

using namespace std;

int main()
{
    string user_name;
    cout<<"请输入你的姓名："<<endl;
    cin>>user_name;
    if(user_name.size()>2)
    {
        cout<<"输入符合要求！"<<endl;
    }
    else
    {
        cout<<"error!error!"<<endl;
    }
    system("pause");
    return 0;
}
