//#include "LabirintoTeste.h"
#include "RoboB9.h"
//#include "GL.h"
#include "Labirinto1.h"
#include <iostream>
#include <sstream>
#include<fstream>
using namespace std;

int main()
{
    /*GL::init();
    // Carga do labirinto*/
    //Labirinto* lab = new LabirintoTeste();
	Labirinto* lab = new Labirinto1();
	lab->loadMaze("labirinto.txt");

   Point posIni = lab->getIniPos();
    cout << "Pos ini: " << posIni.getX() << " , " << posIni.getY() << endl;
    RoboB9* robo = new RoboB9(posIni, lab, 200); // 200 passos no maximo

    /*GL::setLabirintoRobo(lab, robo);
	// Inicializa janela grafica e inicia programa
	GL::loop();*/
}
