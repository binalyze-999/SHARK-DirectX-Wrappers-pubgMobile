#pragma once

#include "Includes.h"
#include "Algorithm.h"
#include "Utility.h"
#include "Data.h"
#include "Esp.h"

namespace Memory
{
	extern	bool IsMagicInitialized;// = false;
	extern bool ipaddeactivate;
	extern bool Xdeactivate;

	int AimFindBestTarget();
	//	VECTOR2 GetMagicCoordinate();
	VOID RestoreHook();
	VOID MemoryThread();
	VOID Instant();
	VOID FastRunn();
//	VOID FastCar();
	void flyman();
//	VOID flyCar();
//	VOID norecoil();
	/*void MagicX();
	VOID Crosshair();
	void ipadeview();
	void luffyR();*/
	//	void GoodView();
	//	void fastrunV2();

}