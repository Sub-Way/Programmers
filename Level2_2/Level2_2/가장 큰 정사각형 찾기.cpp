#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
	int answer = 0;

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	for (int i = 1; i < board.size(); i++) {
		for (int j = 1; j < board[i].size(); j++) {
			if (board[i][j] != 0 && board[i][j - 1] != 0 && board[i - 1][j] != 0 && board[i - 1][j - 1] != 0) {
				int k = min(board[i][j - 1], min(board[i - 1][j], board[i - 1][j - 1]));
				board[i][j] = k + 1;
			}
		}
	}

	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			if (answer < board[i][j])
				answer = board[i][j];
		}
	}
	answer = answer * answer;
	return answer;
}