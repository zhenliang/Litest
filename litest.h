#pragma once

#include <iostream>
#include <string>

typedef void (*TestFunc)(std::string suite, std::string name);
bool RunTestFunc(TestFunc func, std::string suite, std::string name) { func(suite, name); return true; }

#define TEST_SUITE DefaultSuite
#define TEST(name) TEST_UNIT(TEST_SUITE, name)
#define TEST_UNIT(suite, name) TEST_UNIT_IMPL(suite, name)
#define TEST_UNIT_IMPL(suite, name) \
void TestFunc_##suite##_##name(std::string, std::string); \
bool kTestDirver_##suite##_##name = RunTestFunc(TestFunc_##suite##_##name, #suite, #name); \
void TestFunc_##suite##_##name(std::string suite_, std::string name_) 

#define CHECK(condition) if (!(condition)) Fail(suite_, name_, __FILE__, __LINE__, #condition);
#define FAIL(msg) Fail(suite_, name_, __FILE__, __LINE__, #msg);

inline void Fail(const std::string& suite, const std::string& test, const std::string& file, long line,
                 const std::string& msg)
{
    std::cout<<"Suite: "<<suite<<std::endl;
    std::cout<<"Test : "<<test<<std::endl;
    std::cout<<"Fail : "<<msg<<std::endl;
    std::cout<<"File : "<<file<<std::endl;
    std::cout<<"Line : "<<line<<std::endl;
    std::cout<<std::endl;
}