#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // C++ 표준 스트림과 C 표준 스트림의 동기화를 비활성화
    cin.tie(NULL); // cin과 cout의 묶음을 해제하여 성능을 향상시킴

    int N, M;
    int neednum = 0;

    // 사용자로부터 행과 열의 개수를 입력받음
    cout << "데이터 입력 (행 개수와 열 개수):\n";
    cin >> N >> M;
    
    // N과 M이 50 이하인지 확인
    if (N > 50 || M > 50) {
        cout << "N과 M은 50 이하여야 합니다.\n";
        return 1;  // 조건을 만족하지 않으면 프로그램 종료
    }

    cin.ignore();  // 이전 입력의 개행 문자를 무시

    // N x M 크기의 2차원 문자 배열을 생성
    vector<vector<char>> strArray(N, vector<char>(M));

    // 사용자로부터 여러 줄의 문자열을 입력받음
    cout << "문자열 입력 (여러 줄):\n";
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < M; j++) {
            strArray[i][j] = line[j];
        }
    }

    // 각 행과 각 열에 'X'가 있는지 체크하고 그 결과를 담는 벡터를 생성
    vector<bool> rowHasX(N, false);
    vector<bool> colHasX(M, false);

    // 행과 열에 'X'가 있는지 확인
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (strArray[i][j] == 'X') {
                rowHasX[i] = true;
                colHasX[j] = true;
            }
        }
    }

    // 필요하다면 'X'를 추가
    for (int i = 0; i < N; i++) {
        if (!rowHasX[i]) {
            bool addedX = false;
            for (int j = 0; j < M; j++) {
                if (!colHasX[j]) {
                    strArray[i][j] = 'X';
                    neednum++;
                    rowHasX[i] = true;
                    colHasX[j] = true;
                    addedX = true;
                    break;
                }
            }
            // 해당 행에 'X'를 추가하지 않았다면 첫 번째 열에 'X'를 추가
            if (!addedX) {
                strArray[i][0] = 'X';
                neednum++;
                rowHasX[i] = true;
                colHasX[0] = true;
            }
        }
    }

    // 변경된 데이터 출력
    cout << "\n변경된 데이터:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << strArray[i][j];
        }
        cout << '\n';
    }

    // 추가된 'X'의 개수 출력
    cout << neednum << '\n';

    return 0;
}
