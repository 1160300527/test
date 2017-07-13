#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> x;
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='(')
            x.push(ch);
        else if(ch==')')
        {
            if(x.empty())
            {
                printf("wrong");
                return 0;
            }
            else
            {
                x.pop();
            }
        }
        cout<<x.size()<<endl;
    }
    return 0;
}
