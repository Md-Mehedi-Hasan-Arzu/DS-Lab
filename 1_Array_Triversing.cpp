#include<iostream>
#include<cmath>
using namespace std;

void max(int num[])
{
    int mx = INT_MIN;
    for(int i=0; num[i]!='\0'; i++)
    {
        if(num[i] > mx)
            mx = num[i];
    }

    cout << "Maximum element in the array : " << mx << '\n';
}

void min(int num[])
{
    int mn = INT_MAX;
    for(int i=0; num[i]!='\0'; i++)
    {
        if(num[i] < mn)
            mn = num[i];
    }

    cout << "Minimum element in the array : " << mn << '\n';
}

int total(int num[])
{
    int sum = 0;
    for(int i=0; num[i]!='\0'; i++)
    {
        sum += num[i];
    }

    return sum;
}


int main()
{
    int num[] = {5,8,10,6,9,8,40,32,7,90};
    int n = sizeof(num)/sizeof(num[0]);

    max(num);    // finding max value

    min(num);    // finding min value

    int sum = total(num);
    cout << "Total sum = " << sum << '\n';

    cout << "Average = " << sum/n << '\n';

    cout << "Sine values :" << '\n';
    for(int i=0; i<n; i++)
        cout << num[i] << ' ' << sin(num[i]*3.1416/180) <<'\n';
}