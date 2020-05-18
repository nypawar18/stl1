/*
 * t1.cpp
 *
 *  Created on: 18-May-2020
 *      Author: nitin
 */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
	vector <int> arr{10,20,30,40,50};
	vector <int> arr1;
	vector <int> arr2(5,60);
	vector <string> arr3(5,"WELCOME");
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	cout<<arr.front()<<endl;
	cout<<arr.back()<<endl;
	arr.push_back(90);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}

	vector <int>::iterator d=arr.begin();
	arr.insert(d+2,100);
	for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<endl;
		}
	return 1;
}


