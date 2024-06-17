#include "chesspiece.h"

ChessPiece::ChessPiece() {
    pieceType = NONE;
}

ChessType ChessPiece::getType(){ return this->pieceType; }

void ChessPiece::setType(ChessType& type){ this->pieceType = type; }
