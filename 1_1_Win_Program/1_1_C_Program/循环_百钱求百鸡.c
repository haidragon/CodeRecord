﻿

#include <stdio.h>

int main() {
	/*
	��̽���������⣺����һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ���
	�ʼ��̣���ĸ�����������Σ�
	http://www.linuxidc.com/Linux/2012-03/56653.htm
	�蹫��Ϊx��ĸ��Ϊy��С��Ϊz
	���Եó����µĲ������̣�
	x+y+z=100,
	5x+3y+z/3=100��
	*/

	/*
	�ϻ������¼
	1��FOR���������;(�ֺ�)
	2��\n(���з�)��ҪСд��д��\N�ǲ������õģ�
	*/


	static int x, y, z;
	for (z = 0;z <= 100;z++)
	{
		for (y = 0; y <= 100; y++)
		{
			for (x = 0; x <= 100; x++)
			{
				if (100 == x + y + z && 100 == 5 * x + 3 * y + z / 3 && 0 == z % 3)
				{
					printf("x=%d,y=%d,z=%d \n", x, y, z);
				}
			}
		}
	}
	return 0;
}