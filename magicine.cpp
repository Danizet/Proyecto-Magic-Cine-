#include "magicine.h"
#include "ui_magicine.h"
#include "duscene.h"
#include "duscene_2.h"
#include "duscene_3.h"
#include "duscene_4.h"
#include "duscene_5.h"

Magicine::Magicine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Magicine)
{
    ui->setupUi(this);
    mScene = new duscene(this);
    ui->graphicsView->setScene(mScene);

    mScene_2 = new duscene_2(this);
    ui->graphicsView_2->setScene(mScene_2);

    mScene_3 = new duscene_3(this);
    ui->graphicsView_3->setScene(mScene_3);

    mScene_4 = new duscene_4(this);
    ui->graphicsView_4->setScene(mScene_4);

    mScene_5 = new duscene_5(this);
    ui->graphicsView_5->setScene(mScene_5);
}

Magicine::~Magicine()
{
    delete ui;
}

