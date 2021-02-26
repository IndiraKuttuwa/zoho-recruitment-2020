#include<iostream>
using namespace std;

void printPattern(string str)
{
    int len,n;
    for(len=0;str[len];len++);
    int mid = len/2;
   
   for(int i=0;i<len;i++)
    {
        n=len;
        for(int j=1;j<(len-i);j++)
        {
            cout<<"\t";
            n--;
        }
        for(int k=mid;n>=1 && k<len;k++)
        {
            cout<<str[k]<<"\t";
            n--;
        }
        if(n>=1)
        {
            for(int l=0;n>=1;l++)
            {
                cout<<str[l]<<"\t";
                n--;
            }
        }
        cout<<"\n";
    }

}


int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
 
    printPattern(str);
}