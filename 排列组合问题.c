//有数字1,2,3,4，能组成多少个互不相同且无重复数字的三位数？都是多少？(拓展项目书上57页）作者：柚子
#include<stdio.h>
int main()
{
	int i, j, k;
	printf("\n");
	for (i = 1; i < 5; i++)// i=1是初始化部分；i<5是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；
		//i++是执行完循环体语句后的操作
	{
		for (j = 1; j < 5; j++)// j=1是初始化部分；j<5是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；
			//j++是执行完循环体语句后的操作
			for (k = 1; k < 5; k++)// k=1是初始化部分；k<5是循环判断条件部分（当满足此条件时才进入执行for循环中的语句）；
				//k++是执行完循环体语句后的操作
			{
				if (i != k && i != j && j != k)//需要满足的条件
				{
					printf("%d%d%d   ", i, j, k);//提示语句，输出
				}
			}
	}
	printf("\n");
}
/*for语句循环扩展：for循环是编程语言中一种循环语句，而循环语句由循环体及循环的判定条件两部分组成，
其表达式为：for（单次表达式;条件表达式;末尾循环体）{中间循环体；}。
1.语句最简形式为:for (; ; )
2.一般形式为：for（单次表达式; 条件表达式; 末尾循环体）
{
中间循环体；
}
其中，表示式皆可以省略，但分号不可省略，因为“; ”可以代表一个空语句，省略了之后语句减少，即为语句格式发生变化，则编译器不能识别而无法进行编译。
[1]for循环小括号里第一个“; ”号前为一个为不参与循环的单次表达式，其可作为某一变量的初始化赋值语句, 用来给循环控制变量赋初值；
也可用来计算其它与for循环无关但先于循环部分处理的一个表达式。“; ”号之间的条件表达式是一个关系表达式，其为循环的正式开端，当条件表达式成立时执行中间循环体。
执行的中间循环体可以为一个语句，也可以为多个语句，当中间循环体只有一个语句时，其大括号{}可以省略，
执行完中间循环体后接着执行末尾循环体。
执行末尾循环体后将再次进行条件判断，若条件还成立，则继续重复上述循环，当条件不成立时则跳出当下for循环*/