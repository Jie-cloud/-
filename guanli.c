#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct tushu
{
	char name[100];
	int save;
	long int date;
	int chuzhi;
}shu[100],shu2,shu1;
int n,n1,n2;

int date[20];

struct student
{
	char name[5];
	int sce;
}stu[1000],stu1;


struct manager
{
	char name[100];
	int sce;
}mag[10],mag1;


 FILE *ts,*st,*da,*ma;
 
 
int main()
{
	void std();
	void man();
	int i,j,c;
	char a;
	char b[5];


	if((st=fopen("student.txt","a+"))==NULL)
	{
		printf("�ļ�������Ʒ����ϵͳ��ͣ���š�");
		exit(0);
		return 0;
	}
	if((ma=fopen("manager.txt","a+"))==NULL)
	{
		printf("�ļ�������Ʒ����ϵͳ��ͣ���š�");
		exit(0);
		return 0;
	}
	if((ts=fopen("tushu.txt","r+"))==NULL)
	{
		printf("�ļ�������Ʒ����ϵͳ��ͣ���š�");
		exit(0);
		return 0;
	}
	printf("+++++++++��Ʒ����ϵͳ+++++++++\n"); 
	printf("�Ƿ������˺�\n");
	printf("A.��\n");
	printf("B.��\n"); 
	printf("������A����B:\n");
	fflush(stdin);
	scanf("%c",&a);
	fflush(stdin);
	system("cls");
	
	
	if(a=='B')
	{
		printf("~~~~~~~~~~~~~~~�˺�ע��ϵͳ~~~~~~~~~~~~~~~~~~~\n");
		printf("��ѡ��������\n");
		printf("A.ѧ��\n");
		printf("B.����Ա\n");
		scanf("%c",&a);
		fflush(stdin);
		system("cls");
		
		
		if(a=='A')
		{
			printf("��������ע����˺�:\n");
			scanf("%s",stu1.name);
			printf("��������ע�������:\n");
			scanf("%d",&stu1.sce);
			fprintf(st,"%s %d\n",stu1.name,stu1.sce);
		}
		else
		{
			printf("��������ע����˺�:\n");
		  	scanf("%s",mag1.name);
			printf("��������ע�������:\n");  	
			scanf("%d",&mag1.sce);
			fprintf(ma,"%s %d\n",mag1.name,mag1.sce);
		  }
	}

fseek(st,0,0);
rewind(ma);


	for(i=0;i<100;i++)
	{
		fscanf(st,"%s %d\n",stu[i].name,&stu[i].sce);
		n1=i;
		if(stu[i].sce==0)
		break;
	}
	for(i=0;i<10;i++)
	{
		fscanf(ma,"%s %d\n",mag[i].name,&mag[i].sce);
		
	}
	for(i=0,n=0;i<100;i++)
	{	
		fscanf(ts,"%s %d %d %d\n",shu[i].name,&shu[i].save,&shu[i].date,&shu[i].chuzhi);
		n=i;
		if(shu[i].date==0)
		break;
	}	
		
	
		system("cls");

	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("�Ƿ�����½�ռ�\n");
	printf("A.�ǵ�\n");
	printf("B.���ܾ̾�\n");
	printf("������A����B:\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls"); 
	if(a=='B')
	main();
	if(a!='A')
	{
		fclose(st);
		fclose(ma);
		return 0;
	}
	system("cls");
	printf("**************************\n");
	printf("          ��½�ռ�\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("����������û���:\n");
	
begin:scanf("%s",&b);
	
	for(i=0;i<20;i++)
	{
		if(strcmp(b,stu[i].name)==0)
		{
			printf("�������������:\n");
			scanf("%d",&c);
			while(c!=stu[i].sce)
			{
				system("cls");
				printf("�������,���������롣\n");
				fflush(stdin);
				scanf("%d",&c);
				
			}
			system("cls");
			fclose(ts);
			fclose(st);
			fclose(ma);
			std();
		
			
			return 0;
		}
	}
	for(i=0;i<10;i++)
	{
		if(strcmp(b,mag[i].name)==0)
		{
			printf("�������������:\n");
			scanf("%d",&c);
			while(c!=mag[i].sce)
			{
				system("cls");
				printf("�������,���������롣\n");
				scanf("%d",&c);
				
			}
			system("cls");
			fclose(st);
			fclose(ma);
			fclose(ts); 
			man();
			
			return 0;
		}
	}
	printf("�û����������������롣\n");
goto begin;

	fclose(st);
	fclose(ma);
	return 0;
}





void std()
{
	char a;
	void jieshu();
	void huanshu();
	void liulan();
	int i;
	
	
	printf("===============��ӭ������Ʒ����ѧ��ϵͳ==============\n");
	printf("��ѡ����Ҫ���еĲ���:\n");
	printf("A.����Ʒ\n");
	printf("B.����Ʒ\n");
	printf("C.�����Ʒ\n");
	printf("D.��Ҫ�뿪\n");
	printf("������A����B����C����D:\n");
	if((ts=fopen("tushu.txt","r+"))==NULL)
	{
		printf("�ļ�������Ʒ����ϵͳ��ͣ���š�");
		exit(0);
	}
	for(i=0,n=0;i<100;i++)
	{	
		fscanf(ts,"%s %d %d %d\n",shu[i].name,&shu[i].save,&shu[i].date,&shu[i].chuzhi);
		n=i;
		if(shu[i].date==0)
		break;
	}	
	fflush(stdin);
	scanf("%c",&a);
	if(a=='A')
		jieshu();
	if(a=='B')
		huanshu();
	if(a=='C')
		liulan();
	if(a=='D')
		{
			system("cls");
			main();
		}
}





void liulan()
{
	void huanshu();
	void jieshu();
	char a;
	int i;
	printf("���ֿ��������Ʒ���£�\n");
	printf("\n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",shu[i].name);
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�����õ���Ʒ����ȥ����Ʒ�ɣ�\n");
	printf("A.��Ҫȥ����Ʒ\n");
	printf("B.û�к��õ���Ʒ����Ҫ�뿪��\n");
	printf("C.��Ҫȥ����\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls");
	if(a=='A')
	jieshu();
	if(a=='B')
	main();
	if(a=='C')
	huanshu();
	
}





void jieshu()
{
	void liulan();
	int i,a,c;
	char q;
	 char m[20],r[20];
	 
	
	printf("������Ҫ�����Ʒ����Ʒ��\n"); 
	fflush(stdin);
	scanf("%s",m); 
	strcpy(r,m);
	strcat(r,".txt");
	if((da=fopen(r,"a+"))==NULL)
	{
		da=fopen(r,"w+");
	}
	
	system("cls");
	for(i=0;i<100;i++)
	{
		if(strcmp(m,shu[i].name)==0)
		break;
	}
	if(i==100)
	{
		printf("û�д���Ʒ���ٿ�����İ�\n");
		printf("\n");
		printf("\n");
		printf("\n");
	}
	else
	{
	 
		a=i;
	
	
		if(shu[a].save!=0)
			{
				shu[a].save-=1;
	
			} 
		else 
			{
				printf("û�п����Ŷ��\n"); 
				printf("����Ļ���Ʒ�����ǣ�");
				printf("%d",shu[a].date);
				printf("����������Ʒ�ɣ�\n");
				liulan();
			}
		
		
		
		printf("�������㻹��Ʒ������\n");
		scanf("%d",&c);
		fprintf(da,"%d\n",c);
		if(c<shu[a].date)
		shu[a].date=c;
		system("cls"); 
		printf("����Ʒ�ɹ��ˣ��Ͽ�ȥʹ�ðɣ�\n");
		rewind(ts);
	
		for(i=0;i<=a;i++)
		{
			fprintf(ts,"%s %d %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
		}
		fclose(ts);
		fclose(da);
	}
	printf("�Ƿ񷵻�ѧ���������档\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&q);
	system("cls");
	if(q=='A')
	std();
	if(a=='B')
	main();
	
}





void huanshu()
{
	int i,a,b,c,d;
	char q;
	char m[20],r[20]; 
	printf("ѡ��Ҫ������Ʒ����Ʒ��\n"); 
	scanf("%s",m); 
	strcpy(r,m);
	strcat(r,".txt");
	da=fopen(r,"r+");
		for(i=0;i<20;i++)
	{
		fscanf(da,"%d\n",&date[i]);
		n2=i;
		if(date[i]==0)
		break;
	}
	for(i=0;i<100;i++)
	{
		if(strcmp(m,shu[i].name)==0)
		break;
	}
	if(i==100)
	{
		printf("û�д���Ʒ��\n");
		printf("�Ƿ񷵻�ѧ���������档\n");
		printf("\n");
		printf("A.��\n");
		printf("\n");
		printf("B.����Ҫ�뿪\n");
		fflush(stdin);
		scanf("%c",&q);
		system("cls");
		if(q=='A')
		std();
		if(a=='B')
		main();
	}
	a=i;
	for(i=0;i<100;i++)
	{
		if(shu[a].date==date[i])
		break;
	}
	b=i;
	shu[a].save+=1; 
	
	
	 
	for(i=0;i<n2;i++)
	{
		if(i==b)
		continue;
		c=date[i];
		break;
	}
	
	
	for(i=0;i<n2;i++)
	{
		if(i==b)
		continue;
		c=(c<date[i])?c:date[i];
	}
	if(shu[a].chuzhi==shu[a].save)
	shu[a].date=21000101;
	else
	shu[a].date=c;
	
	system("cls");
	printf("����Ʒ�ɹ�����ӭ�ٴν���Ʒ��\n");
	
	fclose(da);
	rewind(ts);
	rewind(da);
	da=fopen(r,"w+");
	 
	for(i=0;i<=a;i++)
	{
		fprintf(ts,"%s %d %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
	}
	for(i=0;i<n2;i++)
	{
		if(i==b)
		continue;
		fprintf(da,"%d\n",date[i]);
	}
	fclose(ts);
	fclose(da);
	printf("�Ƿ񷵻�ѧ���������档\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&q);
	system("cls");
	if(q=='A')
	std();
	if(q=='B')
	main();
}





void man()
{
	char a;
	void zengjia();
	void jianshao();
	void xiugai();
	void tianjia();
	void quchu();
	int i; 
	
	
	printf("===============��ӭ������Ʒ�������Աϵͳ==============\n");
	printf("��ѡ����Ҫ���еĲ���:\n");
	printf("A.ɾ����Ʒ\n");
	printf("B.������Ʒ\n");
	printf("C.������Ʒ��Ϣ\n");
	printf("D.����û���Ϣ\n");
	printf("E.ɾ���û���Ϣ\n"); 
	printf("F.��Ҫ�뿪\n");
	for(i=0,n=0;i<100;i++)
	{	
		fscanf(ts,"%s %d %d %d\n",shu[i].name,&shu[i].save,&shu[i].date,&shu[i].chuzhi);
		n=i;
		if(shu[i].date==0)
		break;
	}	
		for(i=0;i<100;i++)
	{
		fscanf(st,"%s %d\n",stu[i].name,&stu[i].sce);
		n1=i;
		if(stu[i].sce==0)
		break;
	}
	fflush(stdin);
	scanf("%c",&a);
	if(a=='A')
		jianshao();
	if(a=='B')
		zengjia();
	if(a=='C')
		xiugai();
	if(a=='D')
		tianjia();
	if(a=='E')
		quchu();
	if(a=='F')
	{
		system("cls");
		main();
	}
}





void zengjia()
{
	char a;
	void man();
	
	fclose(ts);
	ts=fopen("tushu.txt","a+");
	char name[20];
	int save,date;
	printf("��������Ҫ���ӵ���Ʒ����Ʒ���Ϳ�����Լ����ڣ�\n");
	scanf("%s %d %d",name,&save,&date);
	fprintf(ts,"%s %d %d %d\n",name,save,date,save);
	system("cls");
	printf("���ӳɹ���"); 
	fclose(ts);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�Ƿ�ص�����Ա����\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls");
	if(a=='A')
	man();
	if(a=='B')
	main();
	
}




void jianshao()
{
	char s[20];
	char a;
	char p;
	void man();
	int q,i;
	
	
	rewind(ts);
	printf("��������Ҫɾ������Ʒ���ƣ�\n");
	fflush(stdin);
	scanf("%s",s);
	system("cls");
	for(i=0;i<100;i++)
	{
		if(strcmp(s,shu[i].name)==0)
		break;
	}
	if(i==100)
	{
		printf("û�д���Ʒ\n");
		printf("�Ƿ񷵻ع���Ա�������档\n");
		printf("\n");
		printf("A.��\n");
		printf("\n");
		printf("B.����Ҫ�뿪\n");
		fflush(stdin);
		scanf("%c",&p);
		system("cls");
		if(p=='A')
		man();
		if(p=='B')
		main();
	}
	if(shu[i].save==shu[i].chuzhi)
	{
		q=i;
		fclose(ts);
		ts=fopen("tushu.txt","w+");
		for(i=0;i<n;i++)
		{
			if(i==q)
			continue;
			fprintf(ts,"%s %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
		}
		printf("ɾ���ɹ���");
	}
	else
	printf("����Ʒ�Ѿ�������޷�ɾ����");
	fclose(ts);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�Ƿ�ص�����Ա����\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls");
	if(a=='A')
	man();
	if(a=='B')
	main();
}






void quchu()
{
	char s[20];
	char a;
	void man();
	int q,i;
	rewind(st);
	printf("��������Ҫɾ�����û����ƣ�\n");
	scanf("%s",s);
	system("cls");
	for(i=0;i<100;i++)
		{
			if(strcmp(s,stu[i].name)==0)
			break;
		}
	if(i==100)
	{
		printf("û�д��û�\n");
		printf("\n");
		printf("\n");
	}
	else
	{
		q=i;
		fclose(st);
		st=fopen("student.txt","w+");
		for(i=0;i<n1;i++)
			{
				if(i==q)
				continue;
				fprintf(st,"%s %d\n",stu[i].name,stu[i].sce);
			}
		system("cls");
		printf("ɾ���ɹ���");
	}
	fclose(st);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�Ƿ�ص�����Ա����\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls");
	if(a=='A')
	man();
	if(a=='B')
	main();
}




void tianjia()
{
	char a;
	int i;
	void man();
	
	
	system("cls");
	printf("��������ע����˺�:\n");
	scanf("%s",stu1.name);
	printf("��������ע�������:\n");
	scanf("%d",&stu1.sce);
	
	st=fopen("student.txt","a+");
	fprintf(st,"%s %d\n",stu1.name,stu1.sce);
	fclose(st);
	system("cls");
	printf("��ӳɹ�\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�Ƿ�ص�����Ա����\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls");
	if(a=='A')
	man();
	if(a=='B')
	main();
}




void xiugai()
{
	char s[20];
	char a;
	void man();
	int q,i;
	
	
	rewind(ts);
	printf("��������Ҫ�޸ĵ���Ʒ���ƣ�\n");
	scanf("%s",s);
	for(i=0;i<100;i++)
	{
		if(strcmp(s,shu[i].name)==0)
		break;
	}
	printf("������������޸ĵ���Ʒ��Ϣ\n");
	scanf("%s %d %d %d",shu[i].name,&shu[i].save,&shu[i].date,&shu[i].chuzhi);
	fclose(ts);
	ts=fopen("tushu.txt","w+");
	for(i=0;i<n;i++)
	{
		fprintf(ts,"%s %d %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
	}
	fclose(ts);
	system("cls");
	printf("�޸ĳɹ���");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�Ƿ�ص�����Ա����\n");
	printf("\n");
	printf("A.��\n");
	printf("\n");
	printf("B.����Ҫ�뿪\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls"); 
	if(a=='A')
	man();
	if(a=='B')
	main();
}



