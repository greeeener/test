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
    int z = 108;

    if (solution(x))
        cout << "harshad : " << x << endl;
    else
        cout << "harshad : " << x << endl;

    if(solution(y))
        cout << "harshad : " << y << endl;
    else
        cout << "harshad : " << y << endl;

    if (solution(z))
        cout << "harshad : " << z << endl;
    else
        cout << "harshad : " << z << endl;

}
