#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        int point = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if ((i <= 9 && j == 0) || (i == 0 && j <= 9) || (i <= 9 && j == 9) || (i == 9 && j <= 9))
                    {
                        point++;
                    }
                    else if ((i > 0 && i < 9 && j == 1) || (i == 1 && j > 0 && j < 9) || (i > 0 && i < 9 && j == 8) || (i == 8 && j > 0 && j < 9))
                    {
                        point += 2;
                    }
                    else if ((i > 1 && i < 8 && j == 2) || (i == 2 && j > 1 && j < 8) || (i > 1 && i < 8 && j == 7) || (i == 7 && j > 1 && j < 8))
                    {
                        point += 3;
                    }
                    else if ((i > 2 && i < 7 && j == 3) || (i == 3 && j > 2 && j < 7) || (i > 2 && i < 7 && j == 6) || (i == 6 && j > 2 && j < 7))
                    {
                        point += 4;
                    }
                    else if ((i > 3 && i < 6 && j == 4) || (i == 4 && j > 3 && j < 6) || (i > 3 && i < 6 && j == 5) || (i == 5 && j > 3 && j < 6))
                    {
                        point += 5;
                    }
                }
            }
        }
        cout << point << endl;
    }
}