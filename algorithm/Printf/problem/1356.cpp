#include <iostream>
#include <string>

int main() {
    std::string num;  // 입력을 위한 string 변수 선언
    int left = 0, right = 0, pivot = 0; // pivot = 축
    bool ans = false; // YES, NO를 출력하기 위한 변수, false로 초기화
    std::cin >> num;  // 입력
    
    // num.size() - 1에 - 1을 한 이유는 마지막 숫자(digit)은 건드릴 필요가 없기 때문
    for(int i = 0; i < num.size() - 1; i++) {
        pivot++;     // pivot(축)을 1씩 증가
        left = 1;    // 왼쪽 수를 *로 저장하기 위해 1로 초기화, 0에 *를 하면 0이기 때문
        right = 1;   // 왼쪽과 마찬가지
        ans = false; // for문이 돌아갈 때마다 ans를 false로 초기화
        
        for(int j = 0; j < pivot; j++) // 축을 기점으로 왼쪽 수들을 곱하고 left변수에 저장
            left *= num[j] - '0'; // string이기 때문에 '0'(아스키코드 48)을 빼줘야 진짜 수가 나온다
            
        for(int k = pivot; k < num.size(); k++) // k를 pivot으로 초기화하고 pivot을 기준으로 오른쪽의 수들을 곱하고 right변수에 저장
            right *= num[k] - '0'; // 위에 left와 같은 원리
            
        if(left == right) { // left와 right의 수가 같다면 
            ans = true; // ans를 true로 설정하고
            break; // 더 이상 나누고 비교할 필요가 없기때문에 for문을 나간다
        }
    }
    
    // ans가 true라면 YES, 아니라면 NO를 출력한다.
    (ans == true ? std::cout << "YES\n" : std::cout << "NO\n");
    return 0;
}
