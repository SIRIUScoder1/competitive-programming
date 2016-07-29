//codechef
//karan
//transform the expression


// infix to postfix


#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	
	int test,i;
	stack <char> stack;
	cin >> test;
	while(test--)
	{
		cin >> a;
		for(i = 0;i < a.size();i++)
		{
			if(a[i] >= 'a' && a[i] <= 'z')
			{
				cout << a[i];
			}
			else if(a[i] == ')')
			{
				while(stack.top() != '(')
				{
					cout << stack.top();
					stack.pop();
				}
				stack.pop();
			}
			else
			{
				stack.push(a[i]);			
			}	
		} 
		cout << endl;
	}
	return 0;
}
