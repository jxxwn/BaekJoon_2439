#include<iostream>

using namespace std;
int main()
{
	int n; //변수 선언
	cin >> n; //n값 입력받기

	for (int i = n; i > 0; i--) //첫 번째 for문은 별 찍기의 줄을 바꿔준다.
	{
		for (int j = i - 1; j > 0; j--) //두 번째 for문은 앞에 space을 이용하여 공백을 만들어준다. 
		{
			cout << ' '; 
		}
		for (int k = 0; k <= n - i; k++) //세 번째 for문은 앞에 공백을 만든 곳에 별을 입력하여 별 모양이 역삼각형 모양으로 나오게 한다.
		{
			cout << '*';
		}
		cout << '\n';

	}
	return 0;
}