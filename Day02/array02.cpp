# include <iostream>
using namespace std;


//  Searching Element index in the array


// int main()
// {
//     int n, SearchNum;
//     // part one take size of array
//     cout<<"Enter Your Element size";
//     cin>>n;

//     int array[100];
//     // take a Elemant by the user in arrry

    

//     cout<<"Enter Element ";
//     for (int i = 0; i<=n; i++)
//                               {
//         cin>>array[i];
//     }

//     // step 03 search Your element 

//     cout<<"Search Your Element";
//     cin>>SearchNum;

//     for (int i = 0; i <=n; i++)
//     {
//         if (array[i]==SearchNum)
//         {
//             cout<<"Your Element Found on index"<<i;
//             return 0;
//         }
        
//     }

//     cout<<"Element Not Found";
    

    

//     return 0;
// }


// Print the Reverse of array?

// int main()
// {
//    int array[5];
//    cout<<"Enter Your Element";

//    for (int i = 0; i<5; i++)
//    {
//     cin>>array[i];
//    }

//    cout<<"Your array after Reverse";
//    for (int i=4; i>=0; i--)
//    {
//     cout<<array[i]<<" ";
//    }
   
   
//     return 0;
// }


// How many even and how many odd numbers are there in the array?



int main()
{
    int n;
    int array[100];
    int even=0;
    int odd=0;

    cout<<"Enter the size of array";
    cin>>n;

    cout<<"Enter Your Element";
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }

    for (int i = 0; i <n; i++)
    {   
        if (array[i]%2==0)
        {
            even++;
        }

        else{
            odd++;
        };
        
    }

    cout<<"even="<<even;
    cout<<"Odd="<<odd;
    
    
    return 0;
}
