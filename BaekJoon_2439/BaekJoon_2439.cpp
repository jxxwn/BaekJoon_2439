#include<iostream>

using namespace std;
int main()
{
	int n; //���� ����
	cin >> n; //n�� �Է¹ޱ�

	for (int i = n; i > 0; i--) //ù ��° for���� �� ����� ���� �ٲ��ش�.
	{
		for (int j = i - 1; j > 0; j--) //�� ��° for���� �տ� space�� �̿��Ͽ� ������ ������ش�. 
		{
			cout << ' '; 
		}
		for (int k = 0; k <= n - i; k++) //�� ��° for���� �տ� ������ ���� ���� ���� �Է��Ͽ� �� ����� ���ﰢ�� ������� ������ �Ѵ�.
		{
			cout << '*';
		}
		cout << '\n';

	}
	return 0;
}