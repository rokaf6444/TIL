#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int count[26] = { 0, };
	int max = -1; // 알파벳 사용 횟수의 최댓값
	char result; // 사용 횟수가 max인 알파벳
	int check = 0; // 가장 많은 알파벳 체크

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A'; // 소문자는 대문자로 처리

		if (++count[str[i] - 'A'] > max)
		{
			max = count[str[i] - 'A'];
			result = str[i];
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == count[i])
			check++;
	}

	if (check == 1)
		cout << result;
	else
		cout << "?";

	return 0;
}