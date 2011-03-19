#include "litest.h" 

// 定义测试套件名称，可选，默认为 DefaultSuite
// 凡在该定义之后的 Test 都属于该套件

#define TEST_SUITE DemoSuite

// 测试样例

TEST(SimpleDemo)
{
    // 输出错误信息

    FAIL("a fail msg"); 

    // 判断

    CHECK(1 > 2); 
}

int main()
{
    std::cin.ignore();
    return 0;
}