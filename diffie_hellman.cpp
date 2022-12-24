// ConsoleApplication28.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>

const int64_t g_g = 6;
const int64_t g_a = 6;
const int64_t g_b = 8;
const int64_t g_p = 23;

int64_t calc_a()
{
    const int64_t ga = (int64_t)pow(g_g, g_a);
    return ga;
}

int64_t calc_b()
{
    const int64_t gb = (int64_t)pow(g_g, g_b);
    return gb;
}

int64_t calc_a_with_mod()
{
    const int64_t ga = (int64_t)pow(g_g, g_a);
    return ga % g_p;
}

int64_t calc_b_with_mod()
{
    const int64_t gb = (int64_t)pow(g_g, g_b);
    return gb % g_p;
}


int64_t calc_ab()
{
    const int64_t gab = calc_a() * calc_b();
    return (gab) % g_p;
}

int64_t calc_ab_with_mod()
{
    const int64_t gab = calc_a_with_mod() * calc_b_with_mod();
    return (gab) % g_p;
}

int main()
{
    int64_t a = calc_a();
    int64_t b = calc_b();
    int64_t ab1 = calc_ab();
    int64_t ab2 = calc_ab_with_mod();
    std::cout << ab1 << ", " << ab2 << std::endl;
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
