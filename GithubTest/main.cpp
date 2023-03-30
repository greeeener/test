#include <string>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int y = x;

    while (y > 0) {
        sum += (y % 10);
        y /= 10;
    }

    if (x % sum != 0) answer = false;

    return answer;
}

int main() {
    int x = 29;
    int y = 18;

    if (solution(x))
        cout << "29�� �ϻ��� ���Դϴ�." << endl;
    else
        cout << "29�� �ϻ��� ���� �ƴմϴ�." << endl;

    if(solution(y))
        cout << "18�� �ϻ��� ���Դϴ�." << endl;
    else
        cout << "18�� �ϻ��� ���� �ƴմϴ�." << endl;

}