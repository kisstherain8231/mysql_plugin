#include "spartan_data.h"
#include <my_dir.h>
#include <string.h>


Spartan_data::Spartan_data(void)
{
    data_file = -1;
    number_records = -1;
    number_del_records = -1;
    head_size = sizeof(bool) + sizeof(int) + sizeof(int);
    record_header_size = sizeof(uchar) + sizeof(int);
}

Spartan_data::~Spartan_data(void)
{
    
}

int Spartan_data::create_table(char *path)
{
    open_table(path);
    number_records = 0;
    number_del_records = 0;
    crashed  = false;
    write_head();
    DBUG_RETURN(0);
}

int Spartan_data::open_table(char *path)
{
    data_file = my_open(path, O_RDWR, | O_CREATE | OBINARY | O_SHARE, MYF(0));
    if(data_file == -1)
    {
        DEBUG_RETURN(errno);
    }
    
    read_header();
    DBUG_RETURN(0);
}

long long Spartan_data::write_row(uchar *bug, int length) 
{
    long long pos;
    
    
    DBUG_RETURN(pos);
}

long long Spartan_data::update_row(uchar * old_rec, uchar *new rec, int length, long long position)
{
    long long pos;
    
    
    DBUG_RETURN(pos);
}


int Spartan_data::delete_row(uchar * old_rec, int length, long long position)
{
    int i = -1;

    DBUG_RETURN(i);
}

int spartan_data::read_row(uchar *buf, int length, long long position)
{
    int i;
    
    DBUG_RETURN(0);
}

int Spartan_data::close_table()
{
    DBUG_RETURN(0);
}

int Spartan_data::records()
{
    DBUG_ENTER("Spartan_data::number_records");
    DBUG_RETURN(number_records);
}

int Spartan_data::del_records()
{
    DBUG_ENTER("Spartan_data::del_records")
    DBUG_RETURN(number_del_recoreds);
}

int Spartan_data::read_header()
{
    int i = 0;
    
    DBUG_RETURN(0);
}

int Spartan_data::write_header()
{
    DBUG_RETURN(0);
}

long long Spartan_data::cur_position()
{
    long long pos;
    
    
    DBUG_RETURN(pos);
}


int Spartan_data::trunc_table()
{
    DBUG_RETURN(0);
}


int Spartan_data::row_size()
{
    DBUG_ENTER("Spartan_data::row_size");
    DBUG_RETURN(length + record_header_size);
}














