#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}

dialog::~dialog()
{
    delete ui;
}

void dialog::on_btn_ok_clicked()
{

}
