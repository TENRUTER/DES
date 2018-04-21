#pragma once
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//permutaion
//≥ı º÷√ªª
int ipPerm[64] =
{
	58,50,42,34,26,18,10,2,
	60,52,44,36,28,20,12,4,
	62,54,46,38,30,22,14,6,
	64,56,48,40,32,24,16,8,
	57,49,41,33,25,17,9,1,
	59,51,43,35,27,19,11,3,
	61,53,45,37,29,21,13,5,
	63,55,47,39,31,23,15,7,
};

//ƒÊ≥ı º÷√ªª
int fpPerm[64] =
{
	40, 8, 48, 16, 56, 24, 64, 32,
	39, 7, 47, 15, 55, 23, 63, 31,
	38, 6, 46, 14, 54, 22, 62, 30,
	37, 5, 45, 13, 53, 21, 61, 29,
	36, 4, 44, 12, 52, 20, 60, 28,
	35, 3, 43, 11, 51, 19, 59, 27,
	34, 2, 42, 10, 50, 18, 58, 26,
	33, 1, 41, 9, 49, 17, 57, 25
};

//¿©≥‰
int ePerm[48] =
{
	32, 1, 2, 3, 4, 5,
	4, 5, 6, 7, 8, 9,
	8, 9, 10, 11, 12, 13,
	12, 13, 14, 15, 16, 17,
	16, 17, 18, 19, 20, 21,
	20, 21, 22, 23, 24, 25,
	24, 25, 26, 27, 28, 29,
	28, 29, 30, 31, 32, 1
};

//÷√ªª
int pPerm[32] =
{
	16, 7, 20, 21,
	29, 12, 28, 17,
	1, 15, 23, 26, 
	5, 18, 31, 10,
	2, 8, 24, 14,
	32, 27, 3, 9,
	19, 13, 30, 6,
	22, 11, 4, 25
};

//s∫–
int S[8][64] =
{
	{
		14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,
		0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
		4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,
		15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13
	},
	{
		15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10,
		3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
		0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15,
		13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9
	},
	{
		10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8,
		13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
		13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7,
		1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12
	},
	{
		7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
		13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
		10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4,
		3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14
	},
	{
		2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,
		14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
		4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,
		11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3
	},
	{
		12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11,
		10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
		9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,
		4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13
	},
	{
		4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
		13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
		1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,
		6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12
	},
	{
		13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7,
		1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
		7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,
		2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11
	}
};

//÷√ªª—°‘Ò1
int pc1Perm[56] =
{
	57, 49, 41, 33, 25, 17, 9,
	1, 58, 50, 42, 34, 26, 18,
	10, 2, 59, 51, 43, 35, 27,
	19, 11, 3, 60, 52, 44, 36,
	63, 55, 47, 39, 31, 23, 15,
	7, 62, 54, 46, 38, 30, 22,
	14, 6, 61, 53, 45, 37, 29,
	21, 13, 5, 28, 20, 12, 4
};

//÷√ªª—°‘Ò2
int pc2Perm[48] =
{
	14, 17, 11, 24, 1, 5, 
	3, 28, 15, 6, 21, 10,
	23, 19, 12, 4, 26, 8, 
	16, 7, 27, 20, 13, 2,
	41, 52, 31, 37, 47, 55, 
	30, 40, 51, 45, 33, 48,
	44, 49, 39, 56, 34, 53, 
	46, 42, 50, 36, 29, 32
};

//—≠ª∑◊Û“∆Œª ˝
int leftShiftNum[16] = { 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1 };

//÷√ªª—°‘Ò1∫Ûµƒ√‹‘ø
int pc1PermKey[56];
//1µΩ16¬÷µƒ64Œª√‹‘ø£¨≤ª π”√9, 18,22...54
int leftShiftKey[16][64];

void copyArr(int to[], int from[], int size)
{
	for (int i = 0; i < size;i++)
		to[i] = from[i];
}


//◊Û“∆
void leftShift(int a[56])
{
	int temp1 = a[0], temp2 = a[28];
	for (int i = 0; i < 56;i++)
		a[i] = a[i + 1];
	a[27] = temp1;
	a[55] = temp2;
}

//√‹‘ø÷√ªª—°‘Ò1
void selectReplcaeKey(int key[64])
{
	//÷√ªª—°‘Ò56Œª
	for (int i = 0; i < 56;i++)
		pc1PermKey[i] = key[pc1Perm[i] - 1];
}
   
//¬÷√‹‘ø¥¢¥Ê
void storeKey()
{
	for (int i = 0; i < 16;i++)
	{
		for (int j = 0; j < leftShiftNum[i];j++)
			leftShift(pc1PermKey);
		copyArr(leftShiftKey[i], pc1PermKey, 56);
	}
}

//º”√‹
int* Encrypt(int input[64], int key[64])
{
	int i;
	int j;

	int initInput[64];
	//√˜Œƒ≥ı º÷√ªª
	for (i = 0; i < 64;i++)
		initInput[i] = input[ipPerm[i] - 1];

	//√‹‘ø÷√ªª—°‘Ò1
	//—°‘Ò56Œª
	selectReplcaeKey(key);
	storeKey();

	int leftInput[32];
	int rightInput[32];
	for (i = 0; i < 32;i++)
	{
		leftInput[i] = initInput[i];
		rightInput[i] = initInput[32 + i];
	}

	int sKey[48];
	int expInput[48];
	int XORInput[48];
	int pInput[32];
	int sInput[32];
	int leftInput2[32];
	int newInput[64];
	int invInput[64];
	//√‹‘ø—≠ª∑◊Û“∆
	for (i = 0; i < 16;i++)
	{
		//√‹‘ø÷√ªª—°‘Ò2aw
		for (j = 0; j < 48;j++)
			sKey[j] = leftShiftKey[i][pc2Perm[j] - 1];
		for (j = 0; j < 48;j++)
			expInput[j] = rightInput[ePerm[j] - 1];

		for (j = 0; j < 48;j++)
			XORInput[j] = sKey[j] ^ expInput[j];
		
		for (j = 0; j < 48; j += 6)
		{
			int s = j / 6;
			int selectS = XORInput[j] * 2 + XORInput[j + 5];
			int selectNum = XORInput[j + 1] * 8 + XORInput[j + 2] * 4 + XORInput[j + 3] * 2 + XORInput[j + 4] * 1;
			int num = S[s][selectS * 16 + selectNum];
			for (int k = 3; k >= 0; k--)
				sInput[s * 4 + 3 - k] = ((num & (1 << k)) == pow(2, k));
		}

		for (j = 0; j < 32;j++)
			pInput[j] = sInput[pPerm[j] - 1];
		copyArr(leftInput2, rightInput, 32);

		for (j = 0; j < 32;j++)
			rightInput[j] = leftInput[j] ^ pInput[j];
		copyArr(leftInput, leftInput2, 32);
		
	}

	//32Œªª•ªª
	for (i = 0; i <32;i++)
	{
		newInput[i] = rightInput[i];
		newInput[32 + i] = leftInput[i];
	}
	
	//ƒÊ≥ı º÷√ªª
	for (i = 0; i < 64;i++)	
		invInput[i] = newInput[fpPerm[i] - 1];
	int *output = new int[64];
	copyArr(output, invInput, 64);
	return output;
}

//Ω‚√‹
int * Decrypt(int input[64], int key[64])
{
	int i;
	int j;

	int initInput[64];
	for (i = 0; i < 64;i++)
		initInput[i] = input[ipPerm[i] - 1];

	//√‹‘ø÷√ªª—°‘Ò1
	//—°‘Ò56Œª
	selectReplcaeKey(key);

	int leftInput[32];
	int rightInput[32];
	for (i = 0; i < 32;i++)
	{
		leftInput[i] = initInput[i];
		rightInput[i] = initInput[i + 32];
	}

	int sKey[48];
	int expInput[48];
	int XORInput[48];
	int pInput[32];
	int sInput[32];
	int leftInput2[32];
	int newInput[64];
	int invInput[64];
	for (i = 0; i < 16;i++)
	{
		//√‹‘ø÷√ªª—°‘Ò2
		for (j = 0; j < 48;j++)
			sKey[j] = leftShiftKey[15 - i][pc2Perm[j] - 1];

		for (j = 0; j < 48; j++)
			expInput[j] = rightInput[ePerm[j] - 1];

		for (j = 0; j < 48; j++)
			XORInput[j] = sKey[j] ^ expInput[j];

		for (j = 0; j < 48; j += 6)
		{
			int selectS = XORInput[j] * 2 + XORInput[j + 5];
			int selectNum = XORInput[j + 1] * 8 + XORInput[j + 2] * 4 + XORInput[j + 3] * 2 + XORInput[j + 4] * 1;
			int num = S[j / 6][selectS * 12 + selectNum];
			for (int k = 0; k < 4; ++k)
			{
				sInput[(j / 6) * 4 + 3 - k] = num % 2;
				num = num / 2;
			}
		}

		for (j = 0; j < 32;j++)
			pInput[j] = sInput[pPerm[j] - 1];
		copyArr(leftInput2, rightInput, 32);

		for (j = 0; j< 32;j++)
			rightInput[j] = leftInput[j] ^ pInput[j];
		copyArr(leftInput, leftInput2, 32);
	}

	//32Œªª•ªª
	for (i = 0; i < 32;i++)
	{
		newInput[i] = rightInput[i];
		newInput[i + 32] = leftInput[i];
	}

	//ƒÊ≥ı º÷√ªª
	for (i = 0; i < 64;i++)
		invInput[i] = newInput[fpPerm[i] - 1];
	int *output = new int[64];
	copyArr(output, invInput, 64);
	return output;
}

void balala(string s,int x[64])
{
	int l = s.length();
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 0; i < l; i++)
		for (int j = 7; j >=0; j--)
			x[8 * i+7-j] =((s[i] &( 1 << j))== pow(2, j));
}

string gunala(string Plaintext,string key)
{
	string s(16,NULL);
	int x[64] = { 0 }, y[64] = { 0 };
	balala(Plaintext, x);
	balala(key, y);
	int *temp=Encrypt(x,y );
	for (int i = 0; i < 16; i++)
	{
		int x = 0;
		for (int j = 0; j < 4; j++)
			if (temp[4 * i + j] == 1)x +=(int)pow(2,3-j);
		if (x > 9)s[i] = x + 55;
		else s[i] = x + 48;
	}
	return s;
}