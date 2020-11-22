#ifndef CONNECTION_H
#define CONNECTION_H
#include<QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connection
{
public:
    connection();
     bool creat_cnx();
};

#endif // CONNECTION_H
