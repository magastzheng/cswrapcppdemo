#include "AlgManager.h"


AlgManager::AlgManager(void)
{
	alg = new Algorithm;
}


AlgManager::~AlgManager(void)
{
	delete alg;
}

void AlgManager::DoSomething()
{
	alg->Add(1, 2);
	alg->Abs(5, 3);
	alg->Mul(2, 3);
}

void AlgManager::SetCallback(void* callback)
{
	alg->status = (AlgStatus)callback;
}
