#pragma once
#include "AlgManager.h"

#define EXPORT_DLL _declspec(dllexport)

#ifdef __cplusplus
extern "C"
{
#endif

	AlgManager EXPORT_DLL *Create();
	void EXPORT_DLL DoSomething(AlgManager* mgr);
	void EXPORT_DLL SetCallback(AlgManager* mgr, void *callback);
	void EXPORT_DLL Destroy(AlgManager* mgr);

#ifdef __cplusplus
}
#endif