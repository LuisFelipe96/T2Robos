#ifndef __ROBO_H__
#define __ROBO_H__

#include <Labirinto.h>
class Robo{
	public:
	Robo(const Point& posIni, Labirinto* lab, int maxSteps){
		this->posIni=posIni;
		this->lab=lab;
		this->maxSteps=maxSteps;
	}
	virtual void draw() = 0;
	void move(const Point& pos) { this->pos = pos; }
	virtual void generateSteps() = 0;
	vector<Point> getSteps() { return steps; }

	protected:
	Point posIni;
	Labirinto* lab;
	int maxSteps;
	vector<Point> steps;
};

#endif
