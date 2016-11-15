#include "Labirinto1.h"
#include <iostream>
#include <sstream>
#include<fstream>
Labirinto1 :: Labirinto1() {
}

// Deveria carregar o labirinto de um arquivo,
// aqui so gera um espaco fechado, com uma saida na parte de baixo
void Labirinto1 :: loadMaze(string arquivo) {
	ifstream lab;
	string lixo,linha;
	char* arq;
	stringstream aux(arquivo);
	aux>>arq;
	lab.open(arq, ios::in);
	cin>>lixo>>dimx>>dimy;
	getline(lab,lixo);
	getline(lab,lixo);
	/*for(int c=0; c<dimx;c++){
		for(int l=0;l<dimy;l++){
			lab >> lab[c][l];
		}
	}
	for(int c=0;c<dimx;c++){
		for(int l=0;l<dimy;l++){
			cout<<lab[c][l]<<endl;
		}
	}*/
}

// Retorna true se a posição x,y do labirinto
// estiver livre (i.e. contenha um espaço em branco)
bool Labirinto1 :: isEmpty(const Point& pos) const {
    if(pos.getX()<0 || pos.getX()>=dimx
                    || pos.getY()<0 || pos.getY()>=dimy) return true;
    return (lab[pos.getY()][pos.getX()]==' ');
}

// Retorna dimensoes do labirinto
int Labirinto1 :: getWidth() { return dimx; }
int Labirinto1 :: getHeight() { return dimy; }

int Labirinto1::getRobot() { return robot; }

Point Labirinto1::getIniPos() { return posIni; }
