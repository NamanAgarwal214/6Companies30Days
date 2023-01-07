#include <bits/stdc++.h>
using namespace std;

// #1 - You are given an array of strings tokens that represents an arithmetic expression
//      in a Reverse Polish Notation.

long resolves(int a, int b, char Operator)
{
    if (Operator == '+')
        return a + b;
    else if (Operator == '-')
        return a - b;
    else if (Operator == '*')
        return (long)a * b;
    return a / b;
}

int evalRPN(vector<string> &tokens)
{
    stack<long> st;

    for (auto i : tokens)
    {
        if (i != "+" && i != "-" && i != "*" && i != "/")
        {
            st.push(stol(i, nullptr, 10));
        }
        else
        {
            long int2 = st.top();
            st.pop();
            long int1 = st.top();
            st.pop();

            string Operator = i;
            long resolvedAns = resolves(int1, int2, Operator[0]);
            st.push(resolvedAns);
        }
    }

    return st.top();
}

int main()
{
    return 0;
}