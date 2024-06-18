#include "chessmainwindow.h"

ChessMainWindow::ChessMainWindow(QWidget *parent)
    : QMainWindow(parent){
    this->fieldWidget = new ChessField(this);
    setCentralWidget(fieldWidget);

    this->showMaximized();
}

ChessMainWindow::~ChessMainWindow() {
    delete fieldWidget;
}
