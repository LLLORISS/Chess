#ifndef CHESSPIECE_H
#define CHESSPIECE_H

enum ChessType{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
};

class ChessPiece{
private:
    ChessType pieceType;
public:
    ChessPiece();

    virtual void move(unsigned int, unsigned int);
};

#endif // CHESSPIECE_H
