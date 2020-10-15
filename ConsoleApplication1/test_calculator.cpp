// test_calculator.cpp
#include "stdafx.h"
#include "test_calculator.h"
#include "calculator.h"
#include <iostream>
using namespace std;
// 将测试包注册为aTest
CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(test_calculator, "aTest");

test_calculator::test_calculator() {}
test_calculator::~test_calculator() {}
void test_calculator::setUp()
{
	cout << "begin test" << endl;
}
void test_calculator::tearDown() {
	cout << "end test" << endl;
}

void test_calculator::test_calculator1()
{
	Calculator cal;  // 创建一个计算器类
	cal.add(100);
	CPPUNIT_ASSERT(cal.get_result() == 100);
}
void test_calculator::test_calculator2()
{
	Calculator cal;
	cal.add(123);
	cal.multiply(100);
	CPPUNIT_ASSERT(cal.get_result() == 12300);
}

void test_calculator::test_calculator3()
{
	Calculator cal;
	cal.add(123);
	cal.divide(123);
	CPPUNIT_ASSERT(cal.get_result() == 1);
}