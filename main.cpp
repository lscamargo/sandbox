#include "string_utils.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	string s = "Azul\nVermelho\nRosa";
	vector<string> sv = string_split(s, "\n");
	for (int i = 0; i < sv.size(); i++) {
		if (sv[i] == "Rosa"){
			cout << "ROSAAA!!" << endl;
		}
	}
	return 0;
}
