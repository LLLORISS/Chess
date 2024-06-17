#include "chessfield.h"

ChessField::ChessField(QWidget *parent)
    : QMainWindow{parent}{
    field.resize(rows,cols);

    for(unsigned int i = 0; i < rows; i++){
        for(unsigned int j = 0; j < cols; j++){
            field[i][j].setType(NONE);
        }
    }
}
