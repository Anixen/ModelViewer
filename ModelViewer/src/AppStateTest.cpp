#include "AppStateTest.h"

#include "LoggerBase.h"
#include "AppBase.h"


AppStateTest::AppStateTest(AppBase *p_app) :
	AppStateBase(p_app)
{
	GetLogStream(SeverityInfo)
		<< "AppStateTest::ctor()" << std::endl;
}

AppStateTest::~AppStateTest()
{
	GetLogStream(SeverityInfo)
		<< "AppStateTest::dtor()" << std::endl;
}

void AppStateTest::init() {
	GetLogStream(SeverityInfo)
		<< "AppStateTest::init()" << std::endl;

	AppStateBase::init();
}

void AppStateTest::reinit()
{
	GetLogStream(SeverityInfo)
		<< "AppStateTest::reinit()" << std::endl;
}

AppStateBase* AppStateTest::updateFixed()
{
	/*
	GetLogStream(SeverityInfo)
		<< "AppStateTest::updateFixed()" << std::endl;
	//*/

	return nullptr;
}

AppStateBase* AppStateTest::updateVariable(float p_elapsedTime)
{
	/*
	GetLogStream(SeverityInfo)
		<< "AppStateTest::updateVariable(" << elapsedTime << ")" << std::endl;
	//*/

	return nullptr;
}

void AppStateTest::draw()
{
	Sleep(15);
}

void AppStateTest::handleCleanup()
{
	GetLogStream(SeverityInfo)
		<< "AppStateTest::handleCleanup()" << std::endl;
}