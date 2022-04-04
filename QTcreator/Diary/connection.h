#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QTimer>


inline bool createConnection(QString role, QString password){
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");

    db.setDatabaseName("DiaryDB");
    db.setUserName(role);
    db.setPassword(password);
    //db.setUserName("roleConfirm");
    //db.setPassword("pgsecret1");

    //db.setUserName("postgres");
    //db.setPassword("1");
    if (!db.open()){

        QMessageBox::warning(0,"Ошибка БД", "Something with DB Wrong");
        return false;
    }
    else{

        return true;
    }



}

#endif // CONNECTION_H
