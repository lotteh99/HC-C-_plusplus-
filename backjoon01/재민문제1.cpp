#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a >= 1 && a <= 500)
    {
        if (a % 2 == 0) //2�� ������ �������� 
        {
            cout << 'a';
        }
        else
            cout << 'b';

        if (a % 3 == 0) //3�� ������ �������� 
        {
            cout << 'c';
        }
        else
            cout << 'd';

        int cnt = 0;

        for (int i = 1; i <= a; i++)
        {
            if (i % 7 == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    else
        cout << "1~500������ ���� �Է�";
}