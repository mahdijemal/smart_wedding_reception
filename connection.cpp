#include "connection.h"

connection::connection()
{

}
bool connection::creat_cnx(){

    bool test=false ;
QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");
db.setUserName("mahdi");
db.setPassword("mahdi");
if(db.open())
    test=true;
return test ;
}
