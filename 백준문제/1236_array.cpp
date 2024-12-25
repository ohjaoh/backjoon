#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //반례
    /*
    3 4
    ..X.
    .X..
    ....
    */

    int N, M;
    int neednum = 0;

    // 사용자로부터 행과 열의 개수를 입력받음
    cout << "데이터 입력 (행 개수와 열 개수):\n";
    cin >> N >> M;

    cin.ignore();  // 이전 입력의 개행 문자를 무시

    // N x M 크기의 2차원 문자 배열을 생성
    char strArray[50][50];  // 최대 크기로 배열 선언

    // 사용자로부터 여러 줄의 문자열을 입력받음
    cout << "문자열 입력 (여러 줄):\n";
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < M; j++) {
            strArray[i][j] = line[j];
        }
    }

    // 각 행과 각 열에 'X'가 있는지 체크하고 그 결과를 담는 배열을 생성
    bool rowHasX[50] = { false };
    bool colHasX[50] = { false };

    // 행과 열에 'X'가 있는지 확인
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (strArray[i][j] == 'X') {
                rowHasX[i] = true;
                colHasX[j] = true;
                cout << i << ' ' << j <<'\n';
            }
        }
    }
    // 체크해보니 잘 들어감
    cout << "rowHasX : ";
    for (int i = 0; i < 50; i++) {
        cout << rowHasX[i] << ' ';
    }
    cout << '\n' << "colHaX : ";
    for (int i = 0; i < 50; i++) {
        cout << colHasX[i]<< ' ';
    }

    // 최소구역당 'X'를 추가
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
            // 해당 열에 'X'를 추가하지 않았다면 첫번째 행에 'X'를 추가
            if (!addedX) {
                strArray[0][j] = 'X';
                neednum++;
                rowHasX[0] = true;
                colHasX[j] = true;
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
