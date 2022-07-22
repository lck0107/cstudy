/*
	
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr[100001];
	char* p = NULL;
	
	gets(arr);
	p = strtok(arr, " ");

	while (p != 0) {
		printf("%s", p);
		p = strtok(NULL, " ");
	}

	return 0;
}