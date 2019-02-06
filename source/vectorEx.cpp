#include<iostream>
#include <vector>
 
using namespace std;
 
int main()
{

	int temp;
	vector<int> myVector;//{1,-2,3,-4,5,-6,7,-8,9,-10};

	cout<<"enter the integers and press 'x' to finish input of the vector"<<endl;
	while (cin>>temp&&temp!=120)
	{
		myVector.emplace_back(temp);
	};
	
		
	if (myVector.empty()) cout<<"vetor is empty";
	else
		{
		cout<<"Initial munber of elements is "<<myVector.size()<<endl;
		auto it=myVector.begin();
		while (it!=myVector.end())
			{
				if (*it<0)
					it=myVector.erase(it);
				else
				{
					it++;
				}
				
			}
		cout<<"Final munber of elements is "<<myVector.size()<<endl;
		for(const auto &it:myVector) cout<<it<<"\t";
		}
    return 0;	
}
