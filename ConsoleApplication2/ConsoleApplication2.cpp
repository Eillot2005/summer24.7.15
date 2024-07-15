//杭州电子科技大学-1050

#include<iostream>
using namespace std;
int main()
{
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		int count[402] = {};
		for (int j = 0; j < N; j++)
		{
			int start, end;
			cin >> start >> end;
			if (start > end)//初末位置大小关系不重要
			{
				int temp = end;
				end = start;
				start = temp;
			}
			if (start % 2 == 0)start -= 1;//据图可知
			if (end % 2 != 0)end += 1;
			for (int k = start; k <= end; k++)count[k] += 10;//说明此区块要占用10分钟
		}
		int max = 0;
		for (int j = 0; j <= 400; j++)//寻找最大需要占用时间的位置即是最少的时间
		{
			if (count[j] > max)max = count[j];
		}
		cout << max << endl;
	}
}