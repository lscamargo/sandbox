#ifndef _STRING_UTILS_H_
#define _STRING_UTILS_H_
#include <vector>
#include <string>
using namespace std;

vector<string> string_split(string str, string delim)
{
	size_t last = 0;
	size_t next = 0;
	vector<string> out;
	string token = "";

	while (next != string::npos) {
		next = str.find(delim, last);
		token = str.substr(last, next - last);
		if (!token.empty()) {
			out.push_back(token);
		}
		last = next + delim.length();
	}
	return out;
}

#endif /* _STRING_UTILS_H_ */
