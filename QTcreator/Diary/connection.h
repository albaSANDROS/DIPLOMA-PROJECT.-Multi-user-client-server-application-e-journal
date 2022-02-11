#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>

inline bool createConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("DiaryDB");
    db.setUserName("postgres");
    db.setPassword("1");
    if (!db.open()){
        QMessageBox::warning(0,"Ошибка БД", "Something Wrong");
        return false;
    }
    else{
        QMessageBox::information(0, "Успешно", "Соединение с БД установлено!");
        return true;
    }



}

#endif // CONNECTION_H
