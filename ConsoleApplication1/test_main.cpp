// test_main.cpp
#include "stdafx.h"
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include "cppunit/TextOutputter.h"
#include "cppunit/XmlOutputter.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

int _tmain()
{
	CPPUNIT_NS::TestResult tr;
	CPPUNIT_NS::TestResultCollector trc;
	tr.addListener(&trc);

	CPPUNIT_NS::BriefTestProgressListener progress;
	tr.addListener(&progress);

	CPPUNIT_NS::TestRunner runner;
	CPPUNIT_NS::TestFactoryRegistry &reg = CppUnit::TestFactoryRegistry::getRegistry("aTest");
	runner.addTest(reg.makeTest());
	runner.run(tr);




	/*CPPUNIT_NS::CompilerOutputter outputter(&trc, CPPUNIT_NS::stdCOut());
	outputter.write();*/

	CPPUNIT_NS::TextOutputter textOutputter(&trc, std::cout);
	textOutputter.write();
	// 打印到 xml 文件，以便 xUnit 插件处理
	std::ofstream fout("TEST-Calculator.xml");
	if (fout)
	{
		CPPUNIT_NS::XmlOutputter xmlOutputter(&trc, fout);
		xmlOutputter.write();
		fout.close();
	}

	//system("pause");
	return 0;
}