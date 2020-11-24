#include <bits/stdc++.h>
using namespace std;
 
int feedback[111][9];
bool pass;
bool fullPass;
int cnt;
int main()
{
    int N;
    cin >> N;
 
    for (int i = 1; i <= N; ++i)
    {
        int num;
        cin >> num >> feedback[i][4] >> feedback[i][5];
        feedback[i][1] = num / 100;
        feedback[i][2] = (num) / 10 % 10;
        feedback[i][3] = num % 10;
    }
 
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            if (i == j)
                continue;
            for (int k = 1; k <= 9; ++k)
            {
                if (i == k)
                    continue;
                if (j == k)
                    continue;
                 
                fullPass = true;
                for (int x = 1; x <= N; ++x)
                {
                    pass = false;
                    if (feedback[x][4] == 3)
                    {
                        cout << 1 << endl;
                        return 0;
                    }
                    if (feedback[x][4] == 2)
                    {
                        if (feedback[x][5] == 0)
                        {
                            
                            if (i == feedback[x][1] && j == feedback[x][2])
                            {
                                if (k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][2] && k == feedback[x][3])
                            {
                                if (i != feedback[x][1])
                                    pass = true;
                            }
                            else if (i == feedback[x][1] && k == feedback[x][3])
                            {
                                if (j != feedback[x][2])
                                    pass = true;
                            }
                        }
                    }
                    if (feedback[x][4] == 1)
                    {
                        if (feedback[x][5] == 0)
                        {
                            
                            if (i == feedback[x][1])
                            {
                                if (j != feedback[x][2] && j != feedback[x][3] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i != feedback[x][1] && i != feedback[x][3] && k != feedback[x][1] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && j != feedback[x][1] && j != feedback[x][2])
                                    pass = true;
                            }
                        }
                        else if (feedback[x][5] == 1)
                        {
                            
                            if (i == feedback[x][1])
                            {
                                if (j == feedback[x][3])
                                {
                                    if (k != feedback[x][2])
                                        pass = true;
                                }
                                else if (k == feedback[x][2])
                                {
                                    if (j != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i == feedback[x][3])
                                {
                                    if (k != feedback[x][1])
                                        pass = true;
                                }
                                else if (k == feedback[x][1])
                                {
                                    if (i != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i == feedback[x][2])
                                {
                                    if (j != feedback[x][1])
                                        pass = true;
                                }
                                else if (j == feedback[x][1])
                                {
                                    if (i != feedback[x][2])
                                        pass = true;
                                }
                            }
                        }
                        else
                        {
                            if (i == feedback[x][1])
                            {
                                if (j == feedback[x][3] && k == feedback[x][2])
                                    pass = true;
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i == feedback[x][3] && k == feedback[x][1])
                                    pass = true;
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i == feedback[x][2] && j == feedback[x][1])
                                    pass = true;
                            }
                        }
                    }
                    if (feedback[x][4] == 0)
                    {
                        if (feedback[x][5] == 0)
                        {
                            if ((i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3]) &&
                                (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3]) &&
                                (k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3]))
                                pass = true;
 
                        }
                        else if (feedback[x][5] == 1)
                        {
                            if (i == feedback[x][2] || i == feedback[x][3])
                            {
                                if (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3] &&
                                    k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][1] || j == feedback[x][3])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3] &&
                                    k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (k == feedback[x][1] || k == feedback[x][2])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3] &&
                                    j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3])
                                    pass = true;
                            }
                        }
                        else if (feedback[x][5] == 2)
                        {
                            
                            if (i == feedback[x][2] || i == feedback[x][3])
                            {
                                if (j == feedback[x][1] || j == feedback[x][3])
                                {
                                    if (k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                        pass = true;
                                }
                                else if (k == feedback[x][1] || k == feedback[x][2])
                                {
                                    if (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (j == feedback[x][1] || j == feedback[x][3])
                            {
                                if (k == feedback[x][1] || k == feedback[x][2])
                                {
                                    if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3])
                                        pass = true;
                                }
                            }
                        }
                        else
                        {
                            
                            if (i == feedback[x][2] || i == feedback[x][3])
                            if (j == feedback[x][1] || j == feedback[x][3])
                            if (k == feedback[x][1] || k == feedback[x][2])
                                pass = true;
                        }
                    }
                    if (!pass)
                        fullPass = false;
                    if (!fullPass)
                        break;
                }
 
                if (fullPass)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
}
