
#include "sub.h"

int dive(int x, int y)
{
    int cnt = 0;

    // y가 0이거나 음수일 때 무한 루프에 빠지는 것을 방지하는 예외 처리 (필요시)
    if (y <= 0) return 0;

    while (x >= y) // 정상 동작을 위해 x > y를 x >= y로 수정하는 것이 일반적입니다. (예: 4 / 2 = 2)
    {
        cnt++;
        x = sub(x, y); // sub.h에 정의된 뺄셈 함수 호출
    }

    return cnt;
}