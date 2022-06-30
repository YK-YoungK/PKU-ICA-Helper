#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    cout << rand()%100000 << " " << rand()%100000 << endl;
    return 0;
}