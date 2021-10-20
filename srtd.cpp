#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int num[23];
 int n;

void sortString(string &str)
{
sort(str.begin(), str.end());
cout << str;
}

void getNumbers()
{

    cout<<"Enter the value of n :"<<endl;
    cin>>n;


cout<<"Enter the number :"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>num[i];
    }
}

void sortNumbers(int bum[])
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                if(bum[i]>bum[j])
                    {
                       temp=bum[i];
                       bum[i]=bum[j];
                       bum[j]=temp;
                    }
            }
    }

    cout<<"The sorted array is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<" "<<bum[i];
            }
    }

int main()
{
    string s;
    int temp,i,j,a;
    cout<<"1. Sort characters  2. Sort Numbers"<<endl;
    cin>>a;

    if(a==1)
    {
        cout<<"Enter the string in small letters or big letters only"<<endl;
        cin>>s;

	     sortString(s);
    }


    else
    {
    getNumbers();
    sortNumbers(num);
    }
    return 0;
}
