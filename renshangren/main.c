#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define hh 256
int ind=0;
struct Book
{
    char name[100]  ;
    char press[100] ;
    int  price      ;
    int  number     ;
} tmp, bookss[hh];
void DuBookName ( )
{
    scanf ( "%s", tmp.name )    ;
}
void DuBookPrice ( )
{
    scanf ( "%d", &tmp.price )  ;
}
void DuBookNumber ( )
{
    scanf ( "%d", &tmp.number ) ;
}
void DuBookPress ( )
{
    scanf ( "%s", tmp.press )   ;
}
int ChaBook_name ( )
{
    char tmpp[hh];
    printf ( "|请输入图书名称|" );
    scanf  ( "%s",tmpp );
    for ( int i=1; i<=hh; i++ )
    {
        if ( strcmp ( bookss[i].name,tmpp ) ==0 )
        {
            ///printf ( "%d\n",i );
            ///printf ( "%d\n",bookss[i].price );
            return i;
        }
    }
    return -1;
}
int ChaBook_price ( )
{
    int tmpp;
    printf ( "请输入单价" );
    scanf  ( "%d",&tmpp );
    for ( int i=1; i<=hh; i++ )
    {
        if ( bookss[i].price==tmpp )
        {
            ///printf ( "%d\n",i );
            ///printf ( "%d\n",bookss[i].price );
            return i;
        }
    }
    return -1;
}
void XiuGai()
{
    int kk=ChaBook_name();
    printf ( "|请输入图书名称|" );
    scanf ( "%s", bookss[kk].name  );
    printf ( "|请输入单价|" )    ;
    scanf ( "%d", &bookss[kk].price );
    printf ( "|请输入出版社|" )  ;
    scanf ( "%s", bookss[kk].press );
    printf ( "|请输入数量|" )    ;
    scanf ( "%d", &bookss[kk].number );
}
void BookXinxi ( int index )
{
    printf ( "图书名称|%s\n",bookss[index].name )  ;
    printf ( "  出版社|%s\n",bookss[index].press ) ;
    printf ( "    数量|%d\n",bookss[index].number );
    printf ( "    单价|%d\n",bookss[index].price ) ;
}
int main()
{
    int index=1;
    char c = 0;
    char nmsl[hh][hh]   ;
    char name[hh]       ;
    char price[hh]      ;
    char number[hh]     ;
    char press[hh]      ;
    char stats[hh]      ;
    int n=0;
    do {
        printf ( "|1.数据输入|2.保存|3.查询|4.修改|5.读取|6.退出|" );
        scanf ( "%d", &n );
        FILE *fp;
        switch ( n )
        {
        case 1:
            system ( "cls" );
            printf ( "|数据输入|\n" )    ;
            printf ( "|请输入图书名称|" );
            DuBookName ( );
            printf ( "|请输入单价|" )    ;
            DuBookPrice ( );
            printf ( "|请输入出版社|" )  ;
            DuBookPress ( );
            printf ( "|请输入数量|" )    ;
            DuBookNumber ( );
            bookss[index++]=tmp          ;
            system ( "cls" );
            printf ( "数据输入成功\n" );
            system ( "pause" );
            system ( "cls" );
            break;
        case 2:
            system ( "cls" )         ;
            printf ( "|正在保存|" )      ;
            Sleep ( 500 );
            printf ( "。" ) ;
            Sleep ( 500 );
            printf ( "。" ) ;
            Sleep ( 500 );
            printf ( "。 \n" ) ;
            fp = fopen ( "file.txt", "w" );
            fwrite ( bookss, sizeof ( struct Book ), hh, fp );
            fclose ( fp );
            printf ( "数据保存成功\n" );
            system ( "pause" );
            system ( "cls" );
            break;
        case 3:
            system ( "cls" )         ;
            printf ( "|查询|" )      ;
            int ll;
            printf ( "|按照什么查询？|1.书名|2.单价|菜单|" ) ;
            scanf ( "%d",&ll )       ;
            if ( ll==1  )
            {
                BookXinxi ( ChaBook_name ( ) )     ;
            }
            if ( ll==2  )
            {
                BookXinxi ( ChaBook_price( ) )     ;
            }
            system ( "pause" );
            system ( "cls" );
            break;
        case 4:
            system ( "cls" );
            printf ( "|修改|" );
            XiuGai();
            system ( "pause" );
            system ( "cls" );
            break;
        case 5:
            system ( "cls" );
            printf ( "从文件读入\n" )            ;
            fp = fopen ( "file.txt", "r" )       ;
            fread ( bookss, sizeof ( struct Book ), hh, fp );
            printf ( "正在读取" )      ;
            Sleep ( 500 );
            printf ( "。" ) ;
            Sleep ( 500 );
            printf ( "。" ) ;
            Sleep ( 500 );
            printf ( "。 \n" ) ;
            printf ( "读取成功" )   ;
            system ( "pause" )      ;
            system ( "cls" )        ;
            break;
        case 6:
            system ( "cls" )        ;
            printf ( "退出" )       ;
            system ( "pause" )      ;
            return 0;
        default:
            printf ( "请不要乱搞" );
            system ( "cls" );
        }
        c=0;
        while ( c != '\r' && c != '\n' )
            c = getchar();
    }
    while ( 1 );
    return 0;
}
