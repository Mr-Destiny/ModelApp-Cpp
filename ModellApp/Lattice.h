#pragma once

#include "stdafx.h"
#include "Math.cpp"

class CLattice
{
public:
	CLattice(void);
	CLattice(POINT aPoint);
	CLattice(double _x, double _y, DWORD _flag);

	~CLattice(void);

private:
	
#pragma region LBE_params

	double m_macroDensity;
	int m_NeighCount;

	vector<double> m_microDensity;
	vector<double> m_microDensityAfterTime;
	vector<double> m_weights;
	vector<double> m_microEqDensity;
	vector<double> m_outerForce;

	vector<vector<int>> m_Directions;


public:
	vector<CLattice*> m_Neighbours;
	DWORD m_flags;
#pragma endregion LBE_params

private:
	POINT m_Coord;

	static const short m_radius = 3;
	
public:
	void Draw(CDC* pDC, int _scale_x, int _scale_y);

	

	void CreatePen(CPen& aPen)
	{
		if(!aPen.CreatePen(PS_SOLID, 2, RGB(255,0,100)))
		{
			// Pen creation failed
			AfxMessageBox(_T("Pen creation failed."), MB_OK);
			AfxAbort();
		}
	}
	void Shrink();

#pragma region LBE_methods
	void AddToNeighbours(CLattice &_lattice, int dx, int dy, int nghb);

	int Speed();
	double* f();
	double* fEq();
	double* Force();

	double GetMacroDensity();

	void UpdateDensity();
	void NewF(double nF,int i);

	//TODO: check what return value is needed!!
	vector<double> MacroVelocity();

private:
	void MacroDensity(int x, int y);
	double* MicroDensity();
	double* MicroEqDensity();
	double* Weights();
	double* m_Force;

#pragma endregion LBE_methods
};

