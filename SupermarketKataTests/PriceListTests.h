#pragma once
#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

class PriceListTests: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(PriceListTests);
	CPPUNIT_TEST(PriceOfTinOfBeansIs40p);
	CPPUNIT_TEST(PriceOfTinOfSoupIs90p);
	CPPUNIT_TEST_SUITE_END();

public:
	void PriceOfTinOfBeansIs40p();
	void PriceOfTinOfSoupIs90p();
};