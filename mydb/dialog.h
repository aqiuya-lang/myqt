#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

namespace Ui {
class dialog;
}

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private slots:
    void on_btn_ok_clicked();

private:
    Ui::dialog *ui;
};

#endif // DIALOG_H
