#include "chessfield.h"

unsigned int rows = 8, cols = 8;

ChessField::ChessField(QWidget *parent)
    : QMainWindow{parent}{

    field = new ChessPiece*[rows];

    for(unsigned int i = 0; i < rows; i++){
        field[i] = new ChessPiece[cols];
        for(unsigned int j = 0; j < cols; j++){
            field[i][j].setType(NONEType);
            field[i][j].setColor(NONEColor);
        }
    }
}

ChessField::~ChessField(){
    for(unsigned int i = 0; i < rows; i++){
        delete[] field[i];
    }

    delete[] field;
}
