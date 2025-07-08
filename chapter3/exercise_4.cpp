//
// Created by Jayce Lee on 25. 7. 8.
//

//chapter 3-4

//초 수를 정수 값(long)으로 요청하고, 그에 상당하는 시간을 일, 시, 분, 초로 디스플레이하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main() {
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTE_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;

    int day, hour, minute, second, remaining_seconds;
    long cal_second;

    cout << "초 수를 입력하시오 : ";
    cin >> cal_second;

    day = cal_second / (HOURS_PER_DAY * MINUTE_PER_HOUR * SECONDS_PER_MINUTE);
    remaining_seconds = cal_second % (HOURS_PER_DAY * MINUTE_PER_HOUR * SECONDS_PER_MINUTE);
    hour = remaining_seconds / (MINUTE_PER_HOUR * SECONDS_PER_MINUTE);
    remaining_seconds = remaining_seconds % (MINUTE_PER_HOUR * SECONDS_PER_MINUTE);
    minute = remaining_seconds / SECONDS_PER_MINUTE;
    remaining_seconds = remaining_seconds % SECONDS_PER_MINUTE;
    second = remaining_seconds;

    cout << cal_second << "초 : " << day << "일, " << hour << "시간, " << minute << "분, " << second << "초";

    return 0;
}