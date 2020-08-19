#include<iostream>
#include<vector>
#define debug 0

using namespace std;


int value(char ch)
{
    if(ch=='(')
        return 0;
    if(ch == '+'||ch=='-')
        return 1;
    if(ch == '*'||ch=='/')
        return 2;
    if(ch == '^')
        return 3;
    return 0;
}

int main()
{

    int N;
    // cin>>N;
    string infix  = "A+(B*C-(D/E^F)*G)*H";
    N = infix.length();
    // cout<<N;
    vector<char> postfix;
    vector<char> temp;
    for(int i=0;i<N;i++)
    {
        // cout<<i<<endl;
        if((infix[i]>='A' && infix[i]<='Z')||(infix[i]>='a' && infix[i]<='z'))
        {
            // cout<<"push alha\n";
            postfix.push_back(infix[i]);
        }
        else if(infix[i]=='(')
        {
            temp.push_back(infix[i]);
        }
        else if(infix[i]==')')
        {
            // cout<<"closing\n";
            while(temp.size()!=0 && temp.back()!='(')
            {
                // cout<<"Add -> "<<temp.back()<<endl;
                postfix.push_back(temp.back());
                temp.pop_back();
            }
            // cout<<temp.size()<<endl;
            if(temp.size()!=0)
                temp.pop_back();
        }
        else
        {
            // cout<<"op\n";
            if(temp.size()==0)
            {
                temp.push_back(infix[i]);
            }
            else if(value(infix[i])>=value(temp.back()))
            {
                // cout<<"low pri op\n";
                temp.push_back(infix[i]);
            }
            else
            {
                // cout<<"high pri op\n";
                while(value(infix[i])<value(temp.back()))
                {
                    postfix.push_back(temp.back());
                    temp.pop_back();
                }
                temp.push_back(infix[i]);
            }
        }
        // string ss(postfix.begin(),postfix.end());
        // cout<<ss<<"\t"<<temp.size()<<endl;
    }
    while(temp.size()!=0)
    {
        postfix.push_back(temp.back());
        temp.pop_back();
    }
    string ss(postfix.begin(),postfix.end());
    cout<<ss<<endl;
    
    return 0;
}