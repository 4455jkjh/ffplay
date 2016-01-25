#include "index.h"
Index::Index(){
	total=0;
	cur=0;
}
void Index::addIndex(int in){
	if(total==4)
		return;
	index[total]=in;
	total++;
}
int Index::getIndex(){
	int in=index[cur];
	cur++;
	if(cur==total)
		cur=0;
	return in;
}
void Index::clear(){
	cur=0;
	total=0;
	for(int i=0;i<4;i++){
		index[i]=0;
	}
}
