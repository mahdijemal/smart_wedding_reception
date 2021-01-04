#include "connection.h"

connection::connection()
{

}
bool connection::ouvrirConnect()
{bool test=false;

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("weedingmania");
db.setUserName("weedingmania");
db.setPassword("weedingmania");

if(db.open())
    test=true;
return test;
}

void connection::fermerConnect()
{ db.close();}
