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
		printf("文件出错，物品管理系统暂停开放。");
		exit(0);
		return 0;
	}
	if((ma=fopen("manager.txt","a+"))==NULL)
	{
		printf("文件出错，物品管理系统暂停开放。");
		exit(0);
		return 0;
	}
	if((ts=fopen("tushu.txt","r+"))==NULL)
	{
		printf("文件出错，物品管理系统暂停开放。");
		exit(0);
		return 0;
	}
	printf("+++++++++物品管理系统+++++++++\n"); 
	printf("是否已有账号\n");
	printf("A.是\n");
	printf("B.否\n"); 
	printf("请输入A或者B:\n");
	fflush(stdin);
	scanf("%c",&a);
	fflush(stdin);
	system("cls");
	
	
	if(a=='B')
	{
		printf("~~~~~~~~~~~~~~~账号注册系统~~~~~~~~~~~~~~~~~~~\n");
		printf("请选择你的身份\n");
		printf("A.学生\n");
		printf("B.管理员\n");
		scanf("%c",&a);
		fflush(stdin);
		system("cls");
		
		
		if(a=='A')
		{
			printf("请输入你注册的账号:\n");
			scanf("%s",stu1.name);
			printf("请输入你注册的密码:\n");
			scanf("%d",&stu1.sce);
			fprintf(st,"%s %d\n",stu1.name,stu1.sce);
		}
		else
		{
			printf("请输入你注册的账号:\n");
		  	scanf("%s",mag1.name);
			printf("请输入你注册的密码:\n");  	
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
	printf("是否进入登陆空间\n");
	printf("A.是的\n");
	printf("B.残忍拒绝\n");
	printf("请输入A或者B:\n");
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
	printf("          登陆空间\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("请输入你的用户名:\n");
	
begin:scanf("%s",&b);
	
	for(i=0;i<20;i++)
	{
		if(strcmp(b,stu[i].name)==0)
		{
			printf("请输入你的密码:\n");
			scanf("%d",&c);
			while(c!=stu[i].sce)
			{
				system("cls");
				printf("密码错误,请重新输入。\n");
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
			printf("请输入你的密码:\n");
			scanf("%d",&c);
			while(c!=mag[i].sce)
			{
				system("cls");
				printf("密码错误,请重新输入。\n");
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
	printf("用户名错误，请重新输入。\n");
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
	
	
	printf("===============欢迎来到物品管理学生系统==============\n");
	printf("请选择你要进行的操作:\n");
	printf("A.借物品\n");
	printf("B.还物品\n");
	printf("C.浏览物品\n");
	printf("D.我要离开\n");
	printf("请输入A或者B或者C或者D:\n");
	if((ts=fopen("tushu.txt","r+"))==NULL)
	{
		printf("文件出错，物品管理系统暂停开放。");
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
	printf("本仓库的所有物品如下：\n");
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
	printf("有想用的物品，就去借物品吧！\n");
	printf("A.我要去借物品\n");
	printf("B.没有好用的物品，我要离开。\n");
	printf("C.我要去还书\n");
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
	 
	
	printf("输入你要借的物品的物品名\n"); 
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
		printf("没有此物品，再看看别的吧\n");
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
				printf("没有库存了哦，\n"); 
				printf("最近的还物品日期是：");
				printf("%d",shu[a].date);
				printf("看看其他物品吧！\n");
				liulan();
			}
		
		
		
		printf("请输入你还物品的日期\n");
		scanf("%d",&c);
		fprintf(da,"%d\n",c);
		if(c<shu[a].date)
		shu[a].date=c;
		system("cls"); 
		printf("借物品成功了，赶快去使用吧！\n");
		rewind(ts);
	
		for(i=0;i<=a;i++)
		{
			fprintf(ts,"%s %d %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
		}
		fclose(ts);
		fclose(da);
	}
	printf("是否返回学生操作界面。\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	printf("选你要还的物品的物品名\n"); 
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
		printf("没有此物品。\n");
		printf("是否返回学生操作界面。\n");
		printf("\n");
		printf("A.是\n");
		printf("\n");
		printf("B.否，我要离开\n");
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
	printf("还物品成功，欢迎再次借物品。\n");
	
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
	printf("是否返回学生操作界面。\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	
	
	printf("===============欢迎来到物品管理管理员系统==============\n");
	printf("请选择你要进行的操作:\n");
	printf("A.删除物品\n");
	printf("B.增加物品\n");
	printf("C.管理物品信息\n");
	printf("D.添加用户信息\n");
	printf("E.删除用户信息\n"); 
	printf("F.我要离开\n");
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
	printf("请输入你要增加的物品的物品名和库存量以及日期：\n");
	scanf("%s %d %d",name,&save,&date);
	fprintf(ts,"%s %d %d %d\n",name,save,date,save);
	system("cls");
	printf("增加成功！"); 
	fclose(ts);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("是否回到管理员界面\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	printf("请输入你要删除的物品名称：\n");
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
		printf("没有此物品\n");
		printf("是否返回管理员操作界面。\n");
		printf("\n");
		printf("A.是\n");
		printf("\n");
		printf("B.否，我要离开\n");
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
		printf("删除成功！");
	}
	else
	printf("该物品已经借出，无法删除。");
	fclose(ts);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("是否回到管理员界面\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	printf("请输入你要删除的用户名称：\n");
	scanf("%s",s);
	system("cls");
	for(i=0;i<100;i++)
		{
			if(strcmp(s,stu[i].name)==0)
			break;
		}
	if(i==100)
	{
		printf("没有此用户\n");
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
		printf("删除成功！");
	}
	fclose(st);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("是否回到管理员界面\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	printf("请输入你注册的账号:\n");
	scanf("%s",stu1.name);
	printf("请输入你注册的密码:\n");
	scanf("%d",&stu1.sce);
	
	st=fopen("student.txt","a+");
	fprintf(st,"%s %d\n",stu1.name,stu1.sce);
	fclose(st);
	system("cls");
	printf("添加成功\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("是否回到管理员界面\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
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
	printf("请输入你要修改的物品名称：\n");
	scanf("%s",s);
	for(i=0;i<100;i++)
	{
		if(strcmp(s,shu[i].name)==0)
		break;
	}
	printf("请从新输入你修改的物品信息\n");
	scanf("%s %d %d %d",shu[i].name,&shu[i].save,&shu[i].date,&shu[i].chuzhi);
	fclose(ts);
	ts=fopen("tushu.txt","w+");
	for(i=0;i<n;i++)
	{
		fprintf(ts,"%s %d %d %d\n",shu[i].name,shu[i].save,shu[i].date,shu[i].chuzhi);
	}
	fclose(ts);
	system("cls");
	printf("修改成功！");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("是否回到管理员界面\n");
	printf("\n");
	printf("A.是\n");
	printf("\n");
	printf("B.否，我要离开\n");
	fflush(stdin);
	scanf("%c",&a);
	system("cls"); 
	if(a=='A')
	man();
	if(a=='B')
	main();
}



