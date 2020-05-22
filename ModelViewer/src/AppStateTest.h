/**
 * @file Test implementation for an application state.
 * An application state is responsible for holding relevant information, and providing methods needed for the main loop.
 *
 * @author Olivier Falconnet
 */

#pragma once

#include "AppStateBase.h"

class AppStateTest : public AppStateBase {

public:
	/**
	 * TestState constructor
	 */
	AppStateTest(AppBase* pApp);

	/**
	 *
	 */
	~AppStateTest();

	/**
	 * Initializes the state and make it do some clean-up if needed
	 */
	virtual void init();

	/**
	 * Re-Initializes a state without reallocating everything inside.
	 * This function should be called whenever a state is reset.
	 */
	virtual void reinit();

	/**
	 *
	 */
	virtual void updateFixed();

	/**
	 *
	 */
	virtual void updateVariable(float elapsedTime);

	/**
	 *
	 */
	virtual void draw();

	/**
	 *
	 */
	virtual void handleCleanup();

private:
};