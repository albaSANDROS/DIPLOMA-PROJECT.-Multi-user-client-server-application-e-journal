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

    if (!db.open()){

        QMessageBox::warning(0,"DataBase Error", "Something wrong with DB");
        return false;
    }
    else{

        return true;
    }

}

inline bool checkConnection(){

    QSqlQuery query;
    QString question_to_db = "null";

    question_to_db = "select usename from pg_shadow where usename like 'postgres'";
    query.exec(question_to_db);
    if (!query.next()){

        QMessageBox::warning(0,"DataBase Error", "Something wrong with DB");
        return false;
    }else{

        return true;
    }
}



#endif // CONNECTION_H
