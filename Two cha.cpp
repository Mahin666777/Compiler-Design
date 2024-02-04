#include<iostream>
using namespace std;

 int main()

{
    int x,y,z,m,w;
    cout<<" Enter first name size :"<<endl;
    cin>>m;
    char arr[m];
    cout<<" Enter your first name alphabet by alphabet :"<<endl;
    for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
    cout<<" Enter last name size :"<<endl;
    cin>>w;
    char arr1[w];
    cout<<" Enter your last name alphabet by alphabet :"<<endl;
    for(int i=0;i<w;i++)
        {
            cin>>arr1[i];
        }
    string full_name = string(arr, m) + " " + string(arr1, w);
    cout<<"Your name is ="<<full_name<<endl; }
