#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
int data(int argc, char **argv)
{
MYSQL *con = mysql_init(NULL);
if (con == NULL)
{
fprintf(stderr, "%s\n", mysql_error(con));
exit(1);
}
if (mysql_real_connect(con, "localhost","root","root",NULL,0,NULL,0)==NULL)
{
fprintf(stderr, "%s\n", mysql_error(con));
mysql_close(con);
exit(1);
}
if (mysql_query(con, "CREATE DATABASE coba"))
{
fprintf(stderr, "%s\n", mysql_error(con));
mysql_close(con);
exit(1);
}
mysql_close(con);
exit(0);
}
