#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int num,count=0,temploop;
	cin>>num;
	int temp[num],temp2[num];
	for(int i=0;i<num;i++){
		temp[i]=0;
		temp2[i]=0;
	}
	temploop=pow(2,num);
	for(int i=0;i<temploop;i++){
		for(int j=num-1;j>=0;j--){
			if(temp[j]==2){
				temp[j]=0;
				temp[j-1]++;
			}
		}
		for(int j=0;j<num;j++){
			temp2[j]=temp[j];
		}
		for(int j=i;j<temploop;j++){
			for(int k=num-1;k>=0;k--){
				if(temp2[k]==2){
					temp2[k]=0;
					temp2[k-1]++;
				}
			}
			for(int k=0;k<num;k++){
				if(temp[k]!=temp2[k]){
					count++;
				}
			}
			if(count==1){
				for(int k=0;k<num;k++){
					cout<<temp[k];
				}
				cout<<" ";
				for(int k=0;k<num;k++){
					cout<<temp2[k];
				}
				cout<<endl;
			}
			count=0;
			temp2[num-1]++;	
		}
		temp[num-1]++;
	}
	return 0;
}
//141414141414141414v
14
