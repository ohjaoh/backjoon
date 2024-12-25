#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //�ݷ�
    /*
    3 4
    ..X.
    .X..
    ....
    */

    int N, M;
    int neednum = 0;

    // ����ڷκ��� ��� ���� ������ �Է¹���
    cout << "������ �Է� (�� ������ �� ����):\n";
    cin >> N >> M;

    cin.ignore();  // ���� �Է��� ���� ���ڸ� ����

    // N x M ũ���� 2���� ���� �迭�� ����
    char strArray[50][50];  // �ִ� ũ��� �迭 ����

    // ����ڷκ��� ���� ���� ���ڿ��� �Է¹���
    cout << "���ڿ� �Է� (���� ��):\n";
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < M; j++) {
            strArray[i][j] = line[j];
        }
    }

    // �� ��� �� ���� 'X'�� �ִ��� üũ�ϰ� �� ����� ��� �迭�� ����
    bool rowHasX[50] = { false };
    bool colHasX[50] = { false };

    // ��� ���� 'X'�� �ִ��� Ȯ��
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (strArray[i][j] == 'X') {
                rowHasX[i] = true;
                colHasX[j] = true;
                cout << i << ' ' << j <<'\n';
            }
        }
    }
    // üũ�غ��� �� ��
    cout << "rowHasX : ";
    for (int i = 0; i < 50; i++) {
        cout << rowHasX[i] << ' ';
    }
    cout << '\n' << "colHaX : ";
    for (int i = 0; i < 50; i++) {
        cout << colHasX[i]<< ' ';
    }

    // �ּұ����� 'X'�� �߰�
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
            // �ش� ���� 'X'�� �߰����� �ʾҴٸ� ù��° �࿡ 'X'�� �߰�
            if (!addedX) {
                strArray[0][j] = 'X';
                neednum++;
                rowHasX[0] = true;
                colHasX[j] = true;
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
