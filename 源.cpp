#include<iostream>
using namespace std;


/*
    求和
    sum=a1*a2+a1*a3+....a1*an+a2*a3+....+an-1*an
    */
int main()
{
    int num = 0; long sum = 0; long sum2 = 0;//长整型，防止溢出
    int* L = NULL;
    cin >> num;
    L = new int[num];
    for (int i = 0; i < num; i++)//边输入边加，避免嵌套循环
    {
        cin >> L[i];
        sum2 += sum * L[i];
        sum += L[i];
    }
    cout << sum2;
    return 0;
}