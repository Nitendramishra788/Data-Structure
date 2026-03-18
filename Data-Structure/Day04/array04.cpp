# include <iostream>
using namespace std;

int main()
{
    int array[6];

    cout<<"Enter Your Element ";
    for (int i = 0; i < 6; i++)
    {
        cin>>array[i];
    }

    cout<<"Duplicate Element are ";

    for (int i = 0; i <6; i++)
    {
        for (int  j = i+1;  j<i; j++)
        {
            if (array[i]==array[j])
            {
                cout<<array[i]<<" ";
                 break;
            }
            
        }
        
    }
    
    
    return 0;
}
