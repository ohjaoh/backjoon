#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
        fill(children, children + 26, nullptr);
        isEnd = false;
    }

    ~TrieNode() {
        for (int i = 0; i < 26; ++i) {
            if (children[i]) {
                delete children[i];
            }
        }
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        delete root;
    }

    bool insert(const string& word) {
        TrieNode* node = root;
        bool isNew = false;

        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
                isNew = true;
            }
            node = node->children[idx];
            if (node->isEnd) {
                return false; // �ٸ� �ܾ��� ���λ��� ���
            }
        }

        if (!isNew) {
            return false; // �̹� �����ϴ� �ܾ��̰ų� ���λ��� ���
        }

        node->isEnd = true;
        return true;
    }

private:
    TrieNode* root;
};

int main() {
    int N;
    cin >> N;
    vector<string> words(N);

    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }

    // �ܾ ���� ������ ����
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
        });

    Trie trie;
    int count = 0;

    for (const string& word : words) {
        if (trie.insert(word)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
