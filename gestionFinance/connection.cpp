#include "connection.h"

connection::connection()
{

}
bool connection::ouvrirConnect()
{bool test=false;

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("gestionFinance");
db.setUserName("Yassine");
db.setPassword("esprit20");

if(db.open())
    test=true;
return test;
}

void connection::fermerConnect()
{ db.close();}
