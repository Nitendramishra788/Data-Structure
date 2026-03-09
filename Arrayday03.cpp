# include <iostream>
 using namespace std;


//  the Problem is find the second largest number in the array

//  int main()
//  {
//    int array[5]={12,22,2,5,13};
//    int largest=array[0];
//    int second =-1;

//    for (int i = 0; i < 5; i++)
//    {
//     if (array[i]>largest)
//     {
//         second=largest;
//         largest=array[i];
//     }

//     else if (array[i]>second && array[i]!=largest)
//     {
//         second=array[i];
//     }
    
    
//    }

//    cout<<"this is the second largest num in your array"<<second;
   
//     return 0;
//  }


// the Question is Linear Seacrch 


int main()
{
    int n;
    int array[100];
    int found =0;


    cout<<"Enter the size of array";
    cin>>n;

    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }
    
    int searchNum;
    cout<<"search your element";
    cin>>searchNum;

    for (int i = 0; i < n; i++)
    {
        if (array[i]==searchNum)
        {
            cout<<"Your elemnt is index"<<i;
            found =1;
        }

      if (found==0)
      {
        cout<<"Element not found";
      }
      
        
    }
    
    return 0;
}

 
 