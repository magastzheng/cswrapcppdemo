#pragma once
#include "Algorithm.h"

class AlgManager
{
public:
	AlgManager(void);
	~AlgManager(void);

public:
	void DoSomething();
	void SetCallback(void *callback);

public:
	Algorithm* alg;  
};

