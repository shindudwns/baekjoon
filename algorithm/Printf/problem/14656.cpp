#include <iostream>

using namespace std;

 

int main(void)

{

        ios_base::sync_with_stdio(0);

        cin.tie(0); //cin 실행속도 향상

        int N;

        cin >> N;

 

        int result = 0;

        for (int i = 1; i <= N; i++)

        {

                 int num;

                 cin >> num;

 

                 if (num != i)

                         result++;

        }

        cout << result << "\n";

        return 0;

}
