#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int noc=0;
class tourist
{
    int client_no;
    char name[30];
    char address[50];
    char phone[10];
    int cost;
    char place[50];
public:
        tourist(){}
        void registration();
        void display();
        void search();
        int check(int);
        void modify(int);
        void delete_rec(int);
};
void tourist::registration()
{
    noc++;
    char ch;
    int i=0;
    int r,flag;
    std::ofstream fout("record21.dat",std::ios::out|std::ios::app|std::ios::binary);
    std::cout<<"\n enter coustomer details";
    std::cout<<"\n--------------";
    std::cout<<"\n Client No:"<<noc<<"\n";
    r=noc;
    client_no=r;
    std::cout<<"Name";
    getchar();
    std::cin>>name;
    std::cout<<"address:";       //jhjhjh
    std::cin>>address;
    std::cout<<"phone number";
    std::cin>>phone;
    for(i=0;i<10;i++)
    {
        if(!(phone[i]>='0'&&phone[i]<='9'))
            {
                std::cout<<"enter a valid phone number\n";
                noc--;
                return;
            }
    }
    std::cout<<"place";
    int choice,c;
    std::cout<<"\n 1.Goa\n 2.Ooty \n3.Mumbai\n 4.Delhi\n 5.HYderabad\n 6.Pune\n 7.Chennai\n 8.coimbatore\n 9.cochin\n 10.Tirupati\n";
    std::cout<<"enter the choice:\n";
    std::cin>>choice;
    std::cout<<"also enter the cotrresponding place name\n";
    std::cin>>place;
    switch(choice)
    {
        case 1:std::cout<<"1.price by bus is 500\n";
        std::cout<<"price by train is 1500\n";
        std::cout<<"price by train is 2000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done...!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 2:std::cout<<"1.price by bus is 300\n";
        std::cout<<"2.price by train is 850\n";
        std::cout<<"3.sorry..!!No Flight facility!!!\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is not possible!!sorry..!\n";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 3:std::cout<<"1.price by bus is 1500\n";
        std::cout<<"2.price by train is 2000\n";
        std::cout<<"3.price by flight is 5000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 4:std::cout<<"sorry...!!!no bus facility...!!!\n";
        std::cout<<"2.price by train is 3000\n";
        std::cout<<"3.price by flight is 9000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration is not possible!!sorry..!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 5:std::cout<<"1.price by bus is 700\n";
        std::cout<<"2.price by train is 1000\n";
        std::cout<<"3.price by flight is 5000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 6:std::cout<<"1.price by bus is 1000\n";
        std::cout<<"2.price by train is 2000\n";
        std::cout<<"3.price by flight is 5500\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 7:std::cout<<"1.price by bus is 800\n";
        std::cout<<"2.price by train is 1000\n";
        std::cout<<"3.price by flight is 5000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 8:std::cout<<"1.price by bus is 600\n";
        std::cout<<"2.price by train is 900\n";
        std::cout<<"3.price by flight is 2000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 9:std::cout<<"1.price by bus is 900\n";
        std::cout<<"2.price by train is 1500\n";
        std::cout<<"3.price by flight is 5000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        case 10:std::cout<<"1.price by bus is 500\n";
        std::cout<<"2.price by train is 900\n";
        std::cout<<"3.price by flight is 4000\n";
        std::cout<<"enter the choice:\n";
        std::cin>>c;
        if(c==1)
        {
            std::cout<<"registration done through bus\n";
            std::cout<<"registration is done.....!!!!\n";
            std::cout<<"thank you for registering...!!!\n";
        }
        else if(c==2)
        {
            std::cout<<"registration done through train\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else if(c==3)
        {
            std::cout<<"registration is done through flight\n";
            std::cout<<"registration is done.....!!!";
            std::cout<<"thank you for registering...!!!";
        }
        else
                std::cout<<"invalid\n";
        break;
        default:std::cout<<"sorry!!no service available...!!!";
        }
        fout.write((char*)this,sizeof (tourist));
        fout.close();
        return;
}
void tourist::search()
{
    std::ifstream fin("Record21.dat",std::ios::in);
    int r,flag=0;
    std::cout<<"\n enter client number to be searched:\n";
    std::cin>>r;
    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(tourist));
        if(client_no==r)
        {
            std::cout<<"\n coustomer details:\n";
            std::cout<<"-------------------";
            std::cout<<"\n\nclient no:"<<client_no;
            std::cout<<"\nName:"<<name;
            std::cout<<"\nAddress:"<<address;
            std::cout<<"\nPhone no:"<<phone;
            std::cout<<"\nPlace:"<<place;
            std::cout<<endl;
            flag=1;
            break;
        }
    }

}



















int main()
{

    int cno;
    tourist t;
    int ch;
    std::cout<<"\t\tMAIN MENU\t\n";
    std::cout<<"1.Registration\n 2.Coustomer Record\n 3.Search Entry\n 4.Modify Entry\n 5.Delete Entry\n";
    for(;;)
    {
        std::cout<<"enter choice:\n";
        std::cin>>ch;
        switch(ch)
        {
            case 1:t.registration();
                break;
            case 2:t.display();
                break;
            case 3:t.search();
                break;
            case 4:std::cout<<"enter client no. to be modified";
                    std::cin>>cno;
                    t.modify(cno);
                    break;
            case 5:std::cout<<"enter client no. to be deleted";
                    std::cin>>cno;
                    t.delete_rec(cno);
                    break;
                    default:std::cout<<"wrong choice\n";
                    break;
        }
    }
}
