#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

template<typename T>

class HyperLogLog
{
  private:
  int _inetial_zeros;
  int Number_ofbuckets;
  T _Value; 
  vector<int>buckets;
  
  //using shift left
  int Make_Numofbuckets(int numofzeros)
  {
    return 1 << numofzeros;
  }
  
  public:
  
    HyperLogLog(int inetial_zeros )
    {
      _inetial_zeros = inetial_zeros;
      
      Number_ofbuckets = Make_Numofbuckets(_inetial_zeros);
      buckets.resize(Number_ofbuckets,0);
    }
      
      
      
      
    void Add_Element(const T& value)
    {
      _Value = value;      
    }
    
    
    
  
  int main()
  {
    HyperLogLog H(4);
    
  return 0;
  }
  
  
  
  
};
