#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>

class COctoLang
{
private:

public:
	COctoLang()
	{
	}

	~COctoLang()
	{

	}




	void Communicate()
	{
		while (true)
		{
			std::string inputStr;
			std::getline(std::cin, inputStr);

			if (inputStr == "#")
			{
				break;
			}
			else
			{
				printTranslation(inputStr);
			}
		}
	}

	void printTranslation(const std::string str)
	{
		std::stack<long long>OctStack;
		std::stringstream ss(str);

		for (auto i = 0; i < str.length(); i++)
		{
			char tempChar;
			ss >> tempChar;
			int tempNum;

			switch (tempChar)
			{
			case '-':
			{
				tempNum = 0;
				break;
			}
			case '\\':
			{
				tempNum = 1;
				break;
			}
			case '(':
			{
				tempNum = 2;
				break;
			}
			case '@':
			{
				tempNum = 3;
				break;
			}
			case '?':
			{
				tempNum = 4;
				break;
			}
			case '>':
			{
				tempNum = 5;
				break;
			}
			case '&':
			{
				tempNum = 6;
				break;
			}
			case '%':
			{
				tempNum = 7;
				break;
			}
			case '/':
			{
				tempNum = -1;
				break;
			}
			default:
				/* 에러 처리*/
				break;
			}
			OctStack.push(tempNum);
		}

		int answer = 0;
		int power8 = 0;
		while (!OctStack.empty())
		{
			const int tempVal = OctStack.top();
			OctStack.pop();
			answer += tempVal * pow(8, power8);
			power8++;
		}

		std::cout << answer << "\n";

	}
};

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	COctoLang* cOctoLang = new COctoLang();

	cOctoLang->Communicate();
}
