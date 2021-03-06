/**
 * @file Entry point for the programm
 *
 * @author Olivier Falconnet
 */

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

#include "Timer.h"
#include "LoggerConsole.h"
#include "AppTest.h"

//int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
int main(int argc, char** argv)
{
	LoggerConsole logger(true, SeverityDebug);

	AppBase* app = new AppTest();

	//app->processArguments(hInstance, hPrevInstance, pCmdLine, nCmdShow);
	app->processArguments(argc, argv);
	int exitCode = app->run();

	delete app;

	return exitCode;
}

/*
int main()
{
	LoggerConsole logger(true, SeverityDebug);

	Timer timer;
	timer.init();

	Sleep(20);

	// We should have a little bit (< 1 ms) more than the sleep duration
	float elaspedTime = timer.getElapsedTime();
	GetLogStream(SeverityDebug) << "elapsedTime : " << std::to_string(elaspedTime) << std::endl;
}
//*/


/*
int main()
{
	//std::cout << "Hello world !" << std::endl;

	LoggerConsole logger(true, SeverityDebug);

	LogMessage(SeverityDebug,	"Test Debug");
	//logger.setLogLevel(SeverityWarning);
	LogMessage(SeverityInfo,	"Test Info");
	LogMessage(SeverityWarning, "Test Warning");
	LogMessage(SeverityError,	"Test Error");
	LogMessage(SeverityFatal,	"Test Fatal");

	return 0;
}
//*/

/*
int main()
{
	std::cout << "Hello world !" << std::endl;
}
//*/