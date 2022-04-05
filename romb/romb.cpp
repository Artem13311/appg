#include <iostream>
using namespace std;

int main()
{
    int i, j, N = 9;
    int center = N / 2;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i <= center)
            {
           
                if (j >= center - i && j <= center + i)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {

                if (j >= center + i - N + 1 && j <= center - i + N - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}