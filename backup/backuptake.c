#include <my_global.h>
#include <mysql.h>
#include <string.h>
void finish_with_error(MYSQL *con)
{
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);        
}
char*take(char* server, char* user ,char* password ,char* dbname,char* nm_table)
{      
  MYSQL *con = mysql_init(NULL);

  if (con == NULL)
  {
      fprintf(stderr, "mysql_init() failed\n");
      exit(1);
  }  
  
  if (mysql_real_connect(con, server, user, password, 
          dbname, 0, NULL, 0) == NULL) 
  {
      finish_with_error(con);
  }    
char select[100];
 sprintf(select,"select*from  %s ",nm_table); 
 if (mysql_query(con,select)) 

 { 
      finish_with_error(con);
 }
 MYSQL_RES *result = mysql_store_result(con);  
 if (result == NULL) 
 {
      finish_with_error(con);
 }

MYSQL_ROW  row;
char *data[100]; 
  while(row = mysql_fetch_row(result)) 
     {

     for(int i=0; i<3; i++)
{    
    
      data[i]=row[i];
      data[i]=row[i];
     printf("data_L %s ",data[i]);
     }
     printf("\n");

}

return* data;
}

