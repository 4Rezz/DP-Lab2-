#include <iostream>

using namespace std;

void AND(int* z, int* x, int* c, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (z[i] == 1 && x[i] == 1)
            c[i] = 1;
        else
            c[i] = 0;
    }
}

void OR(int* z, int* x, int* c, const int n) {
    for (int i = 0; i < n; i++) {
        if (z[i] == 1 ^ x[i] == 1)
        {
            c[i] = 0;
        }
        else {
            c[i] = 1;
        }
    }
}
int main()
{
    const int n = 8;
    int p[n] = { 0,0,0,0,1,1,1,1 };
    int q[n] = { 0,0,1,1,0,0,1,1 };
    int r[n] = { 0,1,0,1,0,1,0,1 };
    int pq[n];
    int pr[n];
    int pqpr[n];
    AND(p, q, pq, n);
    AND(p, r, pr, n);
    OR(pq, pr, pqpr, n);
    cout << "           (p && q) + (p && r)" << endl << endl;;
    cout << "-----------------------------------------------------" << endl;
    cout << "| p | q | r | p && q | p && r | (p && q) + (p && r) |" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "| " << p[i] << " | " << q[i] << " | " << r[i] << " |   " << pq[i] << "    |    " << pr[i] << "   |" << "          " << pqpr[i] << "          |" << endl;
    }
    cout << "-----------------------------------------------------" << endl;
}