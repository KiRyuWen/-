

#include <iostream>
#include <vector>
#include "StRec.h"



int main()
{
	vector<StRec> StoreData;
	string inputOrder;
	string str_print = "print", str_insert = "insert", str_delete = "delete", str_search = "search";
	while (cin >> inputOrder)
	{
		string inputFirstname, inputLastName, inputPhone;
		bool flag = false;
		bool PhoneType = true;
		if (inputOrder == str_insert)
		{
			StRec data;
			cin >> inputFirstname >> inputLastName >> inputPhone;
			for(int i=0;i<inputPhone.size();i++)
			{
				if(inputPhone[i]<'0'||inputPhone[i]>'9')
				{
					PhoneType = false;
				}
			}

			if (inputFirstname.size()>25||inputLastName.size()>30||inputPhone.size()>15||PhoneType==false)
			{
				cout << "Input Error" << endl;
			}
			else
			{
				for (int i = 0; i < StoreData.size(); i++)
				{
					if (StoreData[i].Verify(inputFirstname, inputLastName, inputPhone))
					{
						flag = true;
					}
				}
				if (StoreData.size() >= 10 || flag)
				{
					cout << "Insert Error"<<endl;
				}
				else
				{
					data.Insert(inputFirstname, inputLastName, inputPhone);
					StoreData.push_back(data);
				}
			}
		}
		else if (inputOrder == str_delete)
		{
			cin >> inputFirstname >> inputLastName >> inputPhone;
			for (int i = 0; i < inputPhone.size(); i++)
			{
				if (inputPhone[i] < '0' || inputPhone[i]>'9')
				{
					PhoneType = false;
				}
			}

			if (inputFirstname.size() > 25 || inputLastName.size() > 30 || inputPhone.size() > 15 || PhoneType == false)
			{
				cout << "Input Error" << endl;
			}
			else
			{
				for (int i = 0; i < StoreData.size(); i++)
				{
					if (StoreData[i].Verify(inputFirstname, inputLastName, inputPhone))
					{
						StoreData.erase(StoreData.begin() + i);
						flag = true;
						break;
					}
				}
				if (flag == false)
				{
					cout << "Delete Error" << endl;
				}
			}
			
		}
		else if (inputOrder == str_search)
		{
			cin >> inputFirstname >> inputLastName >> inputPhone;
			for (int i = 0; i < inputPhone.size(); i++)
			{
				if (inputPhone[i] < '0' || inputPhone[i]>'9')
				{
					PhoneType = false;
				}
			}

			if (inputFirstname.size() > 25 || inputLastName.size() > 30 || inputPhone.size() > 15 || PhoneType == false)
			{
				cout << "Input Error" << endl;
			}
			else
			{
				for (int i = 0; i < StoreData.size(); i++)
				{
					if (StoreData[i].Verify(inputFirstname, inputLastName, inputPhone))
					{
						flag = true;
						cout << i << endl;
						break;
					}
				}
				if (flag == false)
				{
					cout << "Search Error" << endl;
				}
			}
			
		}
		else if (inputOrder == str_print)
		{
			if(StoreData.size()==0)
			{
				cout << "Print Error"<<endl;
			}
			else
			{
				for(int i=0;i<StoreData.size();i++)
				{
					StoreData[i].Print();
				}
			}
		}
		else
		{
			cout << "Input Error"<<endl;
			//do nothing
		}
	}
}