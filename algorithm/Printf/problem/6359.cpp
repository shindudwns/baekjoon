#include <iostream>

#include <cstring> //memset

using namespace std;

 

const int MAX = 100 + 1;

 

int N;

int cell[MAX]; //열려있으면 1, 닫혀있으면 0

 

void prisonBreak(int num)

{

        for (int i = num; i <= N; i += num)

        {

               int previous = cell[i];

               cell[i] = 1 - previous; //1 -> 0, 0 -> 1

        }

}

 

int main(void)

{

        int test_case;

        cin >> test_case;

 

        for (int i = 0; i < test_case; i++)

        {

               cin >> N;

               if (N < 5 || N >= MAX)

                       exit(-1);

 

               memset(cell, 0, sizeof(cell));

               for (int i = 1; i <= N; i++)

                       prisonBreak(i);

 

               int result = 0;

               for (int i = 1; i <= N; i++)

                       if (cell[i]) //열려있다면

                              result++;

 

               cout << result << endl;

        }

        return 0;

}
