#include "widget.h"
#include "ui_widget.h"
#include "dialog.h" //子窗口头文件
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建数据库文件
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("aqiuya.db");
    db.open();

    //创建数据库
    query = new QSqlQuery();
    query->exec("create table studentsinfo(username,number,sex,age,college)");
    qmodel = new QSqlQueryModel();

    //展示用户信息
    qmodel->setQuery("select * from studentsinfo");
    ui->tableView->setModel(qmodel);
    qmodel->setHeaderData(0,Qt::Horizontal,"姓名");
    qmodel->setHeaderData(1,Qt::Horizontal,"学号");
    qmodel->setHeaderData(2,Qt::Horizontal,"性别");
    qmodel->setHeaderData(3,Qt::Horizontal,"年龄");
    qmodel->setHeaderData(4,Qt::Horizontal,"院系");
}

Widget::~Widget()
{
    delete ui;
}

//添加学生的函数
void Widget::on_pushButton_clicked()
{
    //获取输入框中的输入的值
    QString username = ui->lineEdit->text();
    QString number = ui->lineEdit_2->text();
    QString sex = ui->lineEdit_3->text();
    QString age = ui->lineEdit_4->text();
    QString college = ui->lineEdit_5->text();
    QString sql = "insert into studentsinfo(username,number,sex,age,college) values('"+username+"','"+number+"','"+sex+"','"+age+"','"+college+"')";
    query->exec(sql);

    //提示添加成功
    QMessageBox::about(this,"消息","添加成功");


    //更新下方学生信息并展现到表格中
    qmodel->setQuery("select * from studentsinfo");

    //清除表单内容
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
}

//表格点击事件函数，展现选中的学生信息到表单
void Widget::on_tableView_clicked(const QModelIndex &index)
{
    //获得当前选中的列数
   int column = ui->tableView->currentIndex().column();
   //获得当前选中的列数
   int row = ui->tableView->currentIndex().row();

   //把点击选中的学生展现到表单中
   QString username = index.sibling(row,column).data().toString();
   QString number = index.sibling(row,(column+1)).data().toString();
   QString sex = index.sibling(row,(column+2)).data().toString();
   QString age = index.sibling(row,(column+3)).data().toString();
   QString college = index.sibling(row,(column+4)).data().toString();

   //重新设定选中学生的信息
   ui->lineEdit->setText(username);
   ui->lineEdit_2->setText(number);
   ui->lineEdit_3->setText(sex);
   ui->lineEdit_4->setText(age);
   ui->lineEdit_5->setText(college);
   curentIndexModel = index;


}

//更新学生信息函数
void Widget::on_pushButton_2_clicked()
{
    //重新获取表单中的信息
    QString username = ui->lineEdit->text();
    QString number = ui->lineEdit_2->text();
    QString sex = ui->lineEdit_3->text();
    QString age = ui->lineEdit_4->text();
    QString college = ui->lineEdit_5->text();

    //更新信息
    QString sql1 = "update studentsinfo set number='"+number+"' where username ='"+username+"'";
    QString sql2 = "update studentsinfo set sex='"+sex+"' where username ='"+username+"'";
    QString sql3 = "update studentsinfo set age='"+age+"' where username ='"+username+"'";
    QString sql4 = "update studentsinfo set college='"+college+"' where username ='"+username+"'";

    //执行更新
    query->exec(sql1);
    query->exec(sql2);
    query->exec(sql3);
    query->exec(sql4);

    //提示更新成功
    QMessageBox::about(this,"消息","更新成功");

    //重新展示学生信息表格
    qmodel->setQuery(("select * from studentsinfo"));

    //清除表单内容
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();

}

void Widget::on_pushButton_3_clicked()
{
    //选中要删除学生的姓名
    QString username = ui->lineEdit->text();

    //删除学生
    QString sql = "delete from studentsinfo where username = '"+username+"'";

    //执行
    query->exec(sql);

    //提示删除成功
    QMessageBox::about(this,"消息","删除成功");

    //重新展示学生信息表格
    qmodel->setQuery("select * from studentsinfo");

    //清除表单内容
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();

}
