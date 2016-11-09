#ifndef __LABIRINTO_H__
#define __LABIRINTO_H__
class Labirinto{
	public:

	virtual bool isEmpty(const Point& ponto) = 0;
	virtual int getWidth() = 0;
	virtual int getHeight() = 0;
	virtual int getRobot() = 0;
	virtual Point getIniPos() = 0;
	virtual void loadMaze(string arquivo) = 0;
};

#endif
