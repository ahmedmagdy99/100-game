#include <iostream>

using namespace std;

int main()
{
    int P1,P2,sum=0;
    bool flag=true;
    cout<<"HOLA!! This is 100 game each player enter a number from 1 to 10 only\n";
    cout<<"and the player who get 100 first is the winner...  \n";
    while(sum<100)
    {
        //player one from here
        cout<<"\nPlayer one: ";
        cin>>P1;
        while (flag)//exception for entering from 1 to 10 only
        {
            if (P1<1 or P1>10)
            {
                cout<<"Please enter a number from 1 to 10 only\n";
                cout<<"Player one: ";
                cin>>P1;
            }
            else
            {
                break;
            }
        }
        sum=sum+P1;//summation of player one
        if (sum>100)//check if player one is the winner but have summation more than 100
        {

            while(flag)
            {
                sum=sum-P1;
                cout<<"Please enter a number from "<<"1"<<" to "<<100-sum;
                cout<<"\nThe summation now is: "<<sum;
                cout<<"\nPlayer one: ";
                cin>>P1;
                sum=sum+P1;
                if(sum<=100){
                    break;
                }
            }
        }

        if (sum==100)//check if player one is the winner
        {
            cout<<"\n                THE WINNER IS PLAYER ONE !";
            continue;
        }



        //player two from here
        cout<<"Sum = "<<sum;
        cout<<"\nPlayer two: ";
        cin>>P2;
        while(flag)//exception for entering from 1 to 10 only
        {
            if(P2<1 or P2>10)
            {
                cout<<"Please enter a number from 1 to 10 only\n";
                cout<<"Player two: ";
                cin>>P2;
            }
            else
            {
                break;
            }
        }
        sum=sum+P2;//summation of player one
        if(sum>100)//check if player one is the winner but have summation more than 100
        {
            while(flag)
            {
                sum=sum-P2;
                cout<<"Please enter a number from "<<"1"<<" to "<<100-sum;
                cout<<"\nThe summation now is: "<<sum;
                cout<<"\nPlayer two: ";
                cin>>P2;
                sum=sum+P2;
                if(sum<=100)
                {
                    break;
                }
            }
        }
        if (sum==100)//check if player one is the winner
        {
            cout<<"\n                THE WINNER IS PLAYER TWO !\n";
            continue;
        }


        cout<<"Sum= "<<sum;

    }

    return 0;
}
