#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int N=100;
int n;
struct node
{
        string Eh,Ch;
} word[N];
namespace init
{
char unit[N]="bx1unit",ordinal[N],suffix[N]=".in";
void add(char temp[])
{
        for(int i=0; i<strlen(temp); i++)
                unit[strlen(unit)]=temp[i];
}
void main()
{
        printf("����ҪĬд�ĵ�Ԫ\nbx1unit");
        scanf("%s",ordinal);
        add(ordinal);
        add(suffix);
        ifstream read;
        read.open(unit);
        read>>n;
        for(int i=1; i<=n; i++)
                read>>word[i].Eh>>word[i].Ch;
        system("cls");
}
}
namespace zm
{

}
namespace work
{
int level,flase,ture;
bool pick[N];
void Selection()
{
        string init;
        bool k=1;
        int r=rand()%n+1;
        while(pick[r]) r=rand()%n+1;
        pick[r]=1;
FLAG:
        printf("����: %d/%d\n",level,n);
        printf("��ȷ��:%.1lf% (%d/%d)\n",ture*100.0/(ture+flase),ture,ture+flase);
        puts("����>>��������ǰ����");
        cout<<word[r].Ch<<endl;
        cin>>init;
        if(init==">>") {return;}
        if(init==word[r].Eh)
        {
                puts("��");
                Sleep(800);
        }
        else
        {
                puts("��");
                puts("��ȷ��:");
                cout<<word[r].Eh<<endl;
                system("pause");
                system("cls");
                puts("��Ĭһ�飺");
                k=0;
                flase++;
                goto FLAG;
        }
        if(!k) pick[r]=0;
        else level++;
        ture++;
}
void main()
{
        srand(time(0));
        while(level!=n)
        {
                Selection();
                system("cls");
        }
        system("cls");
        printf("��ȷ��:%.1lf% (%d/%d)\n",level*100.0/(ture+flase),ture,ture+flase);
        puts("����ˡ�����");
        system("pause");
}
}
int main()
{
        init::main();
        work::main();
}
