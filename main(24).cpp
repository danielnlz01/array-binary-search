#include <iostream>

using namespace std;

bool binarySearch(int d[], int ll, int hl, int key);

int main() 
{
	int d[10] = {14, 18, 27, 32, 37, 60, 64, 70, 90, 95};
	int hl = 9;
	int key = 18;
	int ll = 0;
	int pos = 0;
	
	pos = binarySearch(d, ll, hl, key);
	
	//check return of function
	if(pos == true)
   {
      cout << boolalpha << true << endl;
   }
  else
   {
     cout << boolalpha << false << endl;
   }
	
  return 0;
}

bool binarySearch(int d[], int ll, int hl, int key)
{
	int mid;
	
	if(hl >= ll)
  {
    mid = (ll + hl)/2; //half of array
    //check if the element is at middle
    if(d[mid] == key)
    {
      return true;
    }
    //check if key is in greater half
    else if(d[mid] < key)
    {
    	return binarySearch(d, mid+1, hl, key); //update lower limit 
    }
    //check if key element is in lower half
    else
    {
      return binarySearch(d, ll, mid-1, key); //update higher limit
    }
  }
  return false;
}