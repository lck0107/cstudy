/*
	1. ���ڿ� gets()�� �Է�.
	2. strlen()���� �����ϴ� �ݺ��� ����� �������� ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr[1001] = { 0 };
	fgets(arr,1001,stdin);
	for (int i = strlen(arr)-1; i >= 0; i--) {
		printf("%c", arr[i]);
	}

	return 0;

}