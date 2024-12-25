#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // C++ ǥ�� ��Ʈ���� C ǥ�� ��Ʈ���� ����ȭ�� ��Ȱ��ȭ
    cin.tie(NULL); // cin�� cout�� ������ �����Ͽ� ������ ����Ŵ

    int N, M;
    int neednum = 0;

    // ����ڷκ��� ��� ���� ������ �Է¹���
    cout << "������ �Է� (�� ������ �� ����):\n";
    cin >> N >> M;
    
    // N�� M�� 50 �������� Ȯ��
    if (N > 50 || M > 50) {
        cout << "N�� M�� 50 ���Ͽ��� �մϴ�.\n";
        return 1;  // ������ �������� ������ ���α׷� ����
    }

    cin.ignore();  // ���� �Է��� ���� ���ڸ� ����

    // N x M ũ���� 2���� ���� �迭�� ����
    vector<vector<char>> strArray(N, vector<char>(M));

    // ����ڷκ��� ���� ���� ���ڿ��� �Է¹���
    cout << "���ڿ� �Է� (���� ��):\n";
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < M; j++) {
            strArray[i][j] = line[j];
        }
    }

    // �� ��� �� ���� 'X'�� �ִ��� üũ�ϰ� �� ����� ��� ���͸� ����
    vector<bool> rowHasX(N, false);
    vector<bool> colHasX(M, false);

    // ��� ���� 'X'�� �ִ��� Ȯ��
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (strArray[i][j] == 'X') {
                rowHasX[i] = true;
                colHasX[j] = true;
            }
        }
    }

    // �ʿ��ϴٸ� 'X'�� �߰�
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
            // �ش� �࿡ 'X'�� �߰����� �ʾҴٸ� ù ��° ���� 'X'�� �߰�
            if (!addedX) {
                strArray[i][0] = 'X';
                neednum++;
                rowHasX[i] = true;
                colHasX[0] = true;
            }
        }
    }

    // ����� ������ ���
    cout << "\n����� ������:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << strArray[i][j];
        }
        cout << '\n';
    }

    // �߰��� 'X'�� ���� ���
    cout << neednum << '\n';

    return 0;
}
