/*
	1. gets �Լ� �Ἥ ���ڿ� �Է¹ޱ�.
	2. �ݺ���(0���� strlen/2 -1 ���� �ݺ�)�ۼ��ؼ� �Ǻ��ؼ� ������ YES, �ƴϸ� NO ���.
*/
#include<stdio.h>
#include<string.h>

int main(void) {
	int result = 1;
	char arr[1001] = { 0 };
	int len;
	fgets(arr,1001,stdin);

	len = strlen(arr);

	for (int i = 0; i <= len / 2 -1; i++) {
		if (arr[i] != arr[len - 1 - i]) {
			result = 0;
			break;
		}
	}
	// �������� �ߴµ� YES�� ����ϴ� ���� ���� ���� result�� ���� ����� ��´ܰ�� ���� �߰�.
	if (result == 0)	printf("NO");
	else if (result == 1)	printf("YES");



	return 0;
}