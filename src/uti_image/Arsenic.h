#ifndef ARSENIC_H
#define ARSENIC_H
//#include "StdAfx.h"


class Param3Chan
{
public:
	Param3Chan(){}
	~Param3Chan(){}
    vector<double> parRed, parBlue, parGreen;
	int size(){return this->parRed.size();};
private:
  
};


class PtsHom
{
	public:
	PtsHom(){}
	~PtsHom(){}
    vector<double> Gr1,Gr2,R1,G1,B1,R2,G2,B2,X1,Y1,X2,Y2,Dist1,Dist2;
	vector<int> NbPtsCouple;
	Pt2di SZ;
	int size(){	return this->Gr1.size();};
private:
  
};


#endif // ARSENIC_H
