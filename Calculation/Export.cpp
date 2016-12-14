#include "Export.h"

AlgManager* Create()
{
	return new AlgManager;
}

void DoSomething(AlgManager* mgr)
{
	mgr->DoSomething();
}

void SetCallback(AlgManager* mgr, void* callback)
{
	mgr->SetCallback(callback);
}

void Destroy(AlgManager* mgr)
{
	delete mgr;
}