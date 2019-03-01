#include<iostream>
using namespace std;
int main()

 {



RSD(1): 235,55,31,67,889
SRD(1): 31,55,67,235,889
SDR(1): 31,67,55,889,235
 }
class node{
                 public :
                 double my_info;
                 class node *my_left;
                 class node *my_right;
                 }


if (this_one.my_info<new_one)
                {
                return make_some_tree(this_one.my_right,new_one);
                }
if (this_one.my_info>new_one)
                {
                return make_some_tree(this_one.my_left,new_one);
                }
}

int RSD(node *this_one)
{
if (this_one!=NULL) {
                            cout<<this_one.my_info<<" ";
                            RSD(this_one.my_left);
                            RSD(this_one.my_right);
                                  }
}


