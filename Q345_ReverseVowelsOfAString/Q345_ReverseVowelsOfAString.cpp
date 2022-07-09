#include <iostream>
#include <set>
#include <stack>

using namespace std;

string reverseVowels(string s) {
    set<char> vowels = { 'a','e','i','o','u','A','E','I','O','U' };
    stack<char> stack;
    for (char c : s)
    {
        if (vowels.count(c)) stack.push(c);
    }
    for (char& c : s)
    {
        if (vowels.count(c))
        {
            c = stack.top();
            stack.pop();
        }
    }
    return s;
}

int main()
{
    string s = reverseVowels("cppsolu");
    cout << s << endl;

    return 0;
}