#include "chesspiece.h"

ChessPiece::ChessPiece() {
    pieceType = NONEType;
    pieceColor = NONEColor;
    this->coords = std::make_pair(0,0);
}

void ChessPiece::move(unsigned int i, unsigned int j){
    this->coords = std::make_pair(i,j);
}

ChessType ChessPiece::getType(){ return this->pieceType; }
ChessColor ChessPiece::getColor(){ return this->pieceColor; }

void ChessPiece::setType(ChessType type){ this->pieceType = type; }
void ChessPiece::setColor(ChessColor color){ this->pieceColor = color; }

