// test_calculator.h
#pragma once
#include <cppunit/extensions/HelperMacros.h>  // ͷ�ļ�

class test_calculator : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(test_calculator);
	// ����������Ժ���
	CPPUNIT_TEST(test_calculator1);
	CPPUNIT_TEST(test_calculator2);
	CPPUNIT_TEST(test_calculator3);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp();
	void tearDown();
	test_calculator();
	~test_calculator();
	void test_calculator1();
	void test_calculator2();
	void test_calculator3();
};