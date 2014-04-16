#include <string>
#include <sqlite3.h>

using namespace std;

class GDTStore {

    private:
        sqlite3 *db;

    public:
        GDTStore(const char *dbname);

        ~GDTStore();
};
