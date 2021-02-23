#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QModelIndex>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    QSqlQueryModel *qmodel;
    QSqlQuery *query;
    QModelIndex curentIndexModel;

};

#endif // WIDGET_H
