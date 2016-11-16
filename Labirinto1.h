#ifndef LABIRINTO1_H
#define LABIRINTO1_H

#include <fstream>
#include "Labirinto.h"

using namespace std;

class Labirinto1 : public Labirinto {
	public:
	Labirinto1();	// Construtor
        bool isEmpty(const Point& ponto) const;
    	int  getWidth();
    	int  getHeight();
    	void loadMaze(const char *arquivo);
        int  getRobot();
        Point getIniPos();
	private:
	int dimx, dimy;		// Tamanho do labirinto
        char lab[100][100];	// O labirinto em si
        int robot;
        Point posIni;
};

#endif
