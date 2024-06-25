#include <iostream>
using namespace std;

int main()
{
	cout << "Chuong trinh nhap Ma tran 10x10 !!!!!\n";
	int Array[10][10];
	
	/*Duyệt mảng để nhập phần tử*/
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0)
			{
				Array[i][j] = j + 1;					/*Nhập phần tử đầu */
			}
			else if (i > 0 && j == 0)
			{
				Array[i][j] = Array[i - 1][9] + 1;		/*Phần tử dòng kế tiếp bằng phẩn tử cuối cùng dòng đầu +1 */
			}
			else Array[i][j] = Array[i][j - 1] + 1;		/*Phần tử kế tiếp bằng phần tử trước đó +1 */
		}
	}
	cout << endl << endl << endl;
	
	/*Duyệt mảng để xuất phần tử*/
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Array[i][j] << " ";
		}
		cout << endl;
	}



}