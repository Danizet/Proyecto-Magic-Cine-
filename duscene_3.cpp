#include "duscene_3.h"
#include "GifAnimation.h"
#include <QLabel>
duscene_3::duscene_3(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename("C:/Users/pcgam/Downloads/3.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}