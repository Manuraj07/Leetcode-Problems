#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern -3

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// patern-4

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern -5
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Pattern -6
void pattern6(int n)
{

    for (int i = 0; i < 2 * n; i++)
    {
        int total_col_in_row = i > n ? 2 * n-i : i;
        for(int j=0;j<total_col_in_row;j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
}
void pattern7(int n)
{

    for (int i = 0; i < 2 * n; i++)
    {
        int total_col_in_row = i > n ? 2 * n-i : i;
        int num_space = n-total_col_in_row;
        for(int s=0;s<num_space;s++)
        {
            cout<<" ";
        }
        for(int j=0;j<total_col_in_row;j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        int space=n-
    }
}


int main()
{
    int n;
    n = 5;
    // pattern1(n);
    //  pattern2(n);
    //  pattern3(n);
    //  pattern4(n);
    // pattern5(n);
    //pattern6(10);
    // pattern7(n);
    pattern8(n);

}