#include "Labirinto1.h"
#include <iostream>
#include <sstream>
#include<fstream>
#include<string.h>

Labirinto1 :: Labirinto1():Labirinto() {
}

// Deveria carregar o labirinto de um arquivo,
// aqui so gera um espaco fechado, com uma saida na parte de baixo
void Labirinto1 :: loadMaze(const char *arquivo) {
	ifstream laba;
	string lixo,linha;
	//char* arq;
	//stringstream aux(arquivo);
	//aux>>arq;
	//strcpy(arq,arquivo.c_str());
	laba.open(arquivo, ios::in);
	laba>>lixo>>dimx>>dimy;
	int x,y;
	laba>>lixo>>x>>y;
	posIni.setX(x);
	posIni.setY(y);
	//getline(laba,lixo);
	getline(laba,lixo);
	string aux2;
	for(int c=0; c<=dimx;c++){
		getline(laba,aux2);
		strcpy(lab[c],aux2.c_str());
	}
	/*for(int c=0;c<=dimx;c++){
		for(int l=0;l<=dimy;l++){
			cout<<lab[c][l];
		}
		cout<<endl;
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
