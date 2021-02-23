/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *username;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_20;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_21;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_22;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_23;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1146, 739);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 470, 89, 24));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(450, 150, 661, 361));
        tableView->horizontalHeader()->setStretchLastSection(true);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 470, 89, 24));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 530, 89, 24));
        username = new QLabel(Widget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(56, 20, 1061, 47));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy);
        username->setLayoutDirection(Qt::LeftToRight);
        username->setStyleSheet(QLatin1String("font: 28pt \"Adobe Arabic\";\n"
"background-color: rgb(170, 255, 127);"));
        username->setScaledContents(false);
        username->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        username->setMargin(0);
        username->setIndent(0);
        layoutWidget_4 = new QWidget(Widget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(110, 340, 321, 41));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_20->addWidget(label_19);

        lineEdit_4 = new QLineEdit(layoutWidget_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_20->addWidget(lineEdit_4);

        layoutWidget_2 = new QWidget(Widget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(110, 230, 321, 41));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_21->addWidget(label_20);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        lineEdit_2->setFrame(true);
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setClearButtonEnabled(false);

        horizontalLayout_21->addWidget(lineEdit_2);

        layoutWidget_6 = new QWidget(Widget);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(110, 410, 321, 41));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_23->addWidget(label_21);

        lineEdit_5 = new QLineEdit(layoutWidget_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_23->addWidget(lineEdit_5);

        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(110, 280, 321, 41));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_24->addWidget(label_22);

        lineEdit_3 = new QLineEdit(layoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_24->addWidget(lineEdit_3);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 160, 321, 51));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_25->addWidget(label_23);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_25->addWidget(lineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\347\224\250\346\210\267\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\346\233\264\346\226\260\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\255\246\347\224\237", Q_NULLPTR));
        username->setText(QApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label_19->setText(QApplication::translate("Widget", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\271\264\351\276\204", Q_NULLPTR));
        label_20->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", Q_NULLPTR));
        label_21->setText(QApplication::translate("Widget", "\351\231\242\347\263\273\357\274\232", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\351\231\242\347\263\273", Q_NULLPTR));
        label_22->setText(QApplication::translate("Widget", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\346\200\247\345\210\253", Q_NULLPTR));
        label_23->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
