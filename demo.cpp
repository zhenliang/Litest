#include "litest.h" 

// ��������׼����ƣ���ѡ��Ĭ��Ϊ DefaultSuite
// ���ڸö���֮��� Test �����ڸ��׼�

#define TEST_SUITE DemoSuite

// ��������

TEST(SimpleDemo)
{
    // ���������Ϣ

    FAIL("a fail msg"); 

    // �ж�

    CHECK(1 > 2); 
}

int main()
{
    std::cin.ignore();
    return 0;
}