#include "PalindromeCounter.h"
#include <vector>
#include <string>
#include <numeric>

using namespace std;
int PalindromeCounter(const wchar_t * text)
{
	wstring textString(text);
	vector<int> even(textString.size(), 0);
	vector<int> odd(textString.size(), 1);
	for (int i = 0; i < textString.size(); i++)
	{
		while (i >= odd[i] && i + odd[i] < textString.size() &&
			textString[i - odd[i]] == textString[i + odd[i]])
		{
			odd[i]++;
		}
		while (i > even[i] && i + even[i] < textString.size() &&
			textString[i - even[i] - 1] == textString[i + even[i]])
		{
			even[i]++;
		}
	}
	return accumulate(even.begin(), even.end(), 0) +
		accumulate(odd.begin(), odd.end(), 0);
}
