#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num = 0;
int count(char word[200]);

int main() {
	char word[200] = {0};

	scanf("%s", &word);

	count(word);

	printf("%d", num);

	return 0;
}

int count(char word[200]) {
	for (int i = 0; i < 200; i++) {
		if (word[i] == '\0') {
			return num;
		}
		else if (word[i] == 'c' && word[i + 1] == '=' ||
			word[i] == 'c' && word[i + 1] == '-' ||
			word[i] == 'd' && word[i + 1] == '-' ||
			word[i] == 'l' && word[i + 1] == 'j' ||
			word[i] == 'n' && word[i + 1] == 'j' ||
			word[i] == 's' && word[i + 1] == '=' ||
			word[i] == 'z' && word[i + 1] == '=') {
			num += 1;
			i += 1;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
			num += 1;
			i += 2;
		}
		else {
			num += 1;
		}
	}
}