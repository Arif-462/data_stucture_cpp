/*
#include<bits/stdc++.h>
using namespace std;
void display(int *array, int size) {
   for(int i = 1; i<=size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; //the max element from the array
}
void countSort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1];     //create count array (max+1 number of elements)
   for(int i = 0; i<=max; i++)
      count[i] = 0;     //initialize count array to all zero
   for(int i = 1; i <=size; i++)
      count[array[i]]++;     //increase number count in count array.
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];     //find cumulative frequency
   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1; //decrease count for same numbers
   }
   for(int i = 1; i<=size; i++) {
      array[i] = output[i]; //store output array to main array
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n+1];       //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 1; i<=n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   countSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}


*/
#include<bits/stdc++.h>
using namespace std;

int get_max(vector<int>a)
{
    int maxi=a[0];
    for(int i=1; i<a.size(); i++)
    {
        if(maxi<a[i])
            maxi=a[i];
    }
    return maxi;
}

vector<int> counting_sort(vector<int>a)
{
    int maxi = get_max(a);
    //cout<<maxi<<endl;
    vector<int>output;
    vector<int>counter;

    for(int i=0; i<=maxi; i++)
    {
        counter[i]= 0;
    }
    for(int i=1; i<=a.size(); i++)
    {
        counter[a[i]]++;
    }
    cout<<endl;
    for(int i=1; i<=maxi; i++)
    {
        counter[i] = counter[i] + counter[i-1];
    }

    for(int i=a.size()-1; i>=1; i--)
    {
        output[counter[a[i]]] = a[i];
        counter[a[i]]--;
    }
    return output;

}
 void sorted_array(vector<int>a)
 {
     for(int i=0; i<a.size(); i++)
     {
         cout<<a[i]<<" ";
     }
 }

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
    }
    cout<<get_max(a)<<endl;
    sorted_array(a);
    vector<int>ans = counting_sort(a);
    sorted_array(ans);

    return 0;
}
//*/
