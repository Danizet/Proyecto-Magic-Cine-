#ifndef SALA_1_H
#define SALA_1_H

#include <QDialog>

namespace Ui {
class Sala_1;
}

class Sala_1 : public QDialog
{
    Q_OBJECT

public:
    explicit Sala_1(QWidget *parent = nullptr);
    ~Sala_1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_3_pressed();

    void on_pushButton_4_released();

    void on_pushButton_5_toggled(bool checked);

private:
    Ui::Sala_1 *ui;

};

#endif // SALA_1_H
