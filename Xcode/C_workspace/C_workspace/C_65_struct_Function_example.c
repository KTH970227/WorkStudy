#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <string.h>
#define NLEN 50

//구조체와 함수 연습 문제

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int  num;
};

char* s_gets(char* st, int n);

//ex)1
void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(const struct name_count*);

//ex)2
struct name_count recevie_input2();
struct name_count count_characters2(struct name_count);
void show_result2(const struct name_count);


int main()
{
	struct name_count user_name;

	//ex)1
	receive_input(&user_name);
	count_characters(&user_name);
	show_result(&user_name);

	//ex)2
	user_name = recevie_input2();
	user_name = count_characters2(user_name);
	show_result2(user_name);

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\0')
				continue;
	}

	return ret_val;
}

//ex)1
void receive_input(struct name_count* ptr_nc)
{
	int flag;

	printf("Input your first name : \n>>");

	//s_gets(ptr_nc->first, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->first);
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name : \n>>");

	//s_gets(ptr_nc->last, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->last);
	if (flag != 1)
		printf("Wrong input");
}
void count_characters(struct name_count* ptr_nc)
{
	ptr_nc->num = strlen(ptr_nc->first) + strlen(ptr_nc->last);
}
void show_result(const struct name_count* ptr_nc)
{
	printf("Hi, %s %s. Your name has %d chacaters.\n",
		ptr_nc->first, ptr_nc->last, ptr_nc->num);
}

//ex)2
struct name_count recevie_input2()
{
	struct name_count nc;

	printf("Input your first name : \n>>");
	s_gets(nc.first, NLEN);

	printf("Input your last name : \n>>");
	s_gets(nc.last, NLEN);

	return nc;
}
struct name_count count_characters2(struct name_count nc)
{
	nc.num = strlen(nc.first) + strlen(nc.last);

	return nc;
}
void show_result2(const struct name_count nc)
{
	printf("Hi, %s %s. Your name has %d chacaters.\n",
		nc.first, nc.last, nc.num);
}

