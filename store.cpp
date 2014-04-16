#include <iostream>
#include <store.hpp>

using namespace std;

GDTStore::GDTStore(const char *dbname)
{
    char *err_msg = 0;
    const char *sql = 0;
    int rc = 0;

    rc = sqlite3_open(dbname, &db);

    if (rc) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
    } else {
        cout << "Opened database successfully" << endl;
    }
   
    sql = "CREATE TABLE GDT(" \
          "LANE INT PRIMARY KEY   NOT NULL," \
          "DAY      INT   NOT NULL," \
          "MONTH    INT   NOT NULL," \
          "YEAR     INT   NOT NULL," \
          "HOUR     INT   NOT NULL," \
          "MINUTE   INT   NOT NULL," \
          "SECOND   INT   NOT NULL," \
          "SPEED    INT   NOT NULL," \
          "LENGTH   INT   NOT NULL);";

   rc = sqlite3_exec(db, sql, NULL, 0, &err_msg);
   if (rc != SQLITE_OK) {
       cout << "SQL error: " << err_msg << endl;
       sqlite3_free(err_msg);
   } else {
       cout << "SQL OK!" << endl;
   }
}

GDTStore::~GDTStore()
{
    sqlite3_close(db);
}
