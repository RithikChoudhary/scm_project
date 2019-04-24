//***************************************************************
// HEADER FILE USED IN PROJECT
//****************************************************************
#include&lt;conio.h&gt;
#include&lt;stdio.h&gt;
#include&lt;process.h&gt;
#include&lt;fstream.h&gt;
//***************************************************************
// CLASS USED IN PROJECT
//****************************************************************
class product
{
intpno;
char name[50];
float price,qty,tax,dis;
public:
void create_product()
{
cout<<”\nPlease Enter The Product No. of The Product “;
cin>>pno;
cout<<”\n\nPlease Enter The Name of The Product “;
gets(name);
cout<<”\nPlease Enter The Price of The Product “;
cin>>price;
cout<<”\nPlease Enter The Discount (%) “;
cin>>dis;
}

