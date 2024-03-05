# include<iostream>

using namespace std;

int main()
{
    cout<<"ÇëÊäÈëÄúµÄÃû×Ö£º"<<endl;
    char user_name[1000];
    cin>>user_name;
    int a;
    a=sizeof(user_name);
    if(sizeof(user_name)>2)
    {
        cout<<"You are great.Thankyou!"<<endl;
    }
    else
    {
        cout<<"Error!Error!"<<endl;
    }
    system("pause");
    return 0;
}