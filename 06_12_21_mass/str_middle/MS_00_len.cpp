#include "middle_str.h"

string itc_covert_num_mid_str(int number, int ss)
{
	string otv1 = "", otv2 = "";
	if ((ss > 16) || (ss < 2) || (number < 0)) {
		return "-1";
	}
	else if (ss < 10) {
		while (number > 0) {
			otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	else {
		while (number > 0) {
			if (number % ss >= 10) otv1 += ('A' + (number % ss) - 10);
			else otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	int i = itc_len(otv1);
	while (i > 0) {
		i--;
		otv2 += otv1[i];
	}
	return otv2;
}

int itc_len_num(long long a)
{
	a = itc_abs(a);
	int nol = 0;
	if (a == 0) return 1;
	while (a > 0) {
		a = a / 10;
		nol++;
	}
	return (nol);
}

int itc_stoi(string str)
{
	int number = 0, len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((number == 0) && (str[i] > '0') && (str[i] <= '9')) number = str[i] - 48;
		else if (number != 0) number = number * 10 + (str[i] - 48);
	}
	return number;
}

/*bool itc_isValidWord(string str)
{
	if (str == "")
		return false;
	int len = itc_len(str);
	bool brackets = false;
	if (str[0] == '(')
	{
		if (str[len - 1] != ')')
			return false;
		else
			brackets = true;
	}
	else if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
		return false;
	if (!brackets)
	{
		if (!((str[len - 1] >= 'a' && str[len - 1] <= 'z') || (str[len - 1] >= 'A' && str[len - 1] <= 'Z')))
		{
			if (str[len - 1] == '.' || str[len - 1] == ',' || str[len - 1] == '?' || str[len - 1] == '!')
			{
				if (!((str[len - 2] >= 'a' && str[len - 2] <= 'z') || (str[len - 2] >= 'A' && str[len - 2] <= 'Z')))
					return false;
			}
			else
				return false;
		}
	}
	for (int i = 1; i < len - 1; i++)
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return false;
	}
	return true;
}

int itc_sign_cnt(string str)
{
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++)
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			cnt++;
	return cnt;
}

string itc_get_word(string str)
{
	string result = "";
	for (int i = 0; str[i] != '\0'; i++)
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			result += str[i];
	return result;
}

bool itc_isLetter(unsigned char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}*/