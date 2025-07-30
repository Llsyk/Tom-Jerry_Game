#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{   int x;              //user input variable to move r_x and r_y.
    int r_x=0,r_y=0;    //result values of x and y
    float total_money=0;  //find the value of money in the bag and display the final result.
    bool a;
    cout<<"Welcome to 'Collect The Bag With Jerry'" << "\nLet's start the game."<<endl;
    do
    {
        cout<<"Jerry is now at(x,y)  "<<"("<<r_x<<","<<r_y<<")"<<endl;
        cout<<"Enter the step you want between 1 and 10: ";cin>>x;                         //result calculation of x filling with x(input)
        r_x+=x;
        if(r_x>=10)
        {   r_x-=10;
            r_y++;
            if(r_x==0 && r_y==6)
            {
                cout<<"Yayy! Your Jerry reach the destination ."<<"\n Victory!! "; //win situation
                int keychain=10,earphone=20,watch=40,bicycle=60,camera=80,laptop=100;
    int i_num;bool c;

    cout<<"\nYou have "<<total_money<<"$."<<endl;
    cout<<"No"<<setw(7)<<"Item"<<setw(14)<<"Value"<<endl;
    cout<<"1"<<setw(11)<<" keychain"<<setw(12)<<"10 S"<<"\n2"<<setw(12)<<"earphone "<<setw(11)<<"20 $"<<
          "\n3"<<setw(8)<<"watch"<<setw(15)<<"40 $"<<"\n4"<<setw(10)<<"bicycle"<<setw(13)<<"60 $"<<
          "\n5"<<setw(9)<<"camera"<<setw(14)<<"80 $"<<"\n6"<<setw(9)<<"laptop"<<setw(14)<<"100 $"<<endl;
    do{
    cout<<"Enter the item number you want to buy: ";cin>>i_num;
    if(i_num==1)
        {
            total_money-=10;
        }
    else if(i_num==2)
        {
            total_money-=20;
        }
    else if(i_num==3)
    {
        total_money-=40;
    }
    else if(i_num==4)
    {
        total_money-=60;
    }
    else if(i_num==5)
    {
        total_money-=80;
    }
    else if(i_num==6)
    {
        total_money-=100;
    }
    switch(i_num)
    {
        case 1:cout<<"\nNow you have keychain.";break;
        case 2:cout<<"\nNow you have earphone.";break;
        case 3:cout<<"\nNow you have watch.";break;
        case 4:cout<<"\nNow you have bicycle.";break;
        case 5:cout<<"\nNow you have camera.";break;
        case 6:cout<<"\nNow you have laptop.";break;
    }
        cout<< "Do you want to buy more? yes (1)/ no(0):"<<endl;
        cin>> c;
    }
    while (c==1);
                break;
            }
            else if((r_y>=6)&&(r_x>0))                                          //over the limit of(0,6)-->win situation
            {
                cout<<"Jerry is now in the space."<<endl;
                break;
            }
        }
        //start the trap process
        else if(r_x==5 && r_y==0)
        {   r_x-=2;
            cout<<"Ohh! Jerry found a bomb."<<"\nBack 2 steps."<<endl;    //trap1
        }
        else if(r_x==3 && r_y==2)
        {   r_x-=2;
            cout<<"Jerry is in danger. Back to 2 steps. "<<endl;       //trap2
        }
        else if((r_x==1 && r_y==1)||(r_x==0 && r_y==4))
        {   r_y++;
            cout<<"There is a ladder. Up to one floor."<<endl;                              //trap 3
        }
        else if(r_x==9 && r_y==3)
            {
                r_x+=4;
                cout<<"Omg! There is Tom.Run forwards next 4 steps."<<endl;
                   /*if(r_x>=10)
                {
                    r_x-=10;
                    r_y++;
                }*/
            }                                                                                //trap 4

        //end of the trap process
        //double process
        else if ((r_x == 9 && r_y == 4) || (r_x == 2 && r_y == 5))
        {
        total_money = total_money * 2;
        cout<< "Jerry got double $."<<"\nYou have "<<total_money<<"$"<<endl;
        }

        //start the found money bag process-->money got
        else if((r_x==2 && r_y==2)||(r_x==3 && r_y==3)||(r_x==4 && r_y==4)||(r_x==5 && r_y==5))     //money got process
        {   cout<<"A bag is found."<<endl;
            if(r_x==2 && r_y==2)
            {   total_money+=20;
                cout<<"Jerry got 20$."<<endl;                              //process 1
            }
            else if(r_x==3 && r_y==3)
            {   total_money+=30;
                cout<<"Jerry got 30$."<<endl;                             //process 2
            }
            else if(r_x==4 && r_y==4)
            {   total_money+=40;
                cout<<"Jerry got 40$."<<endl;                             //process 3
            }
            else if(r_x==5 && r_y==5)
            {   total_money+=50;
                cout<<"Jerry got 50$."<<endl;                              //process 4
            }

            cout<<"Now you have "<<total_money<<" $"<<endl;
        }//end of the money got
        //found money bag process--> the money lose
        if((r_x==7 && r_y==2)||(r_x==5 && r_y==3)||(r_x==7 && r_y==4)||(r_x==6 && r_y==5))         //4 conditions
        {   cout<<"Jerry need to pay the money to pass this area."<<endl;
            if(r_x==7 && r_y==2)
            {   total_money-=2;
                cout<<"Jerry lost 2$."<<endl;                              //process 5
            }
            else if(r_x==5 && r_y==3)
            {   total_money-=5;
                cout<<"Jerry lost 5$."<<endl;                              //process 6
            }
            else if(r_x==7 && r_y==4)
            {   total_money-=20;
                cout<<"Jerry lost 20$."<<endl;                              //process 6
            }
            else if(r_x==6 && r_y==5)
            {   total_money-=50;
                cout<<"Jerry lost 50$."<<endl;                              //process 7
            }
            cout<<"Now you have "<<total_money<<" $"<<endl;               //end of the money process
        }


        cout<<"Do you want to stop the game(0)/not(1):";cin>>a;           //condition for do-while loop
        cout<<endl;
        }
    while(a==1);
    if(a==0)
    {
        cout<<"Game Over.\n"<<"You lost."<<endl;                          //Give up process

    }
    cout<<"You left total "<< total_money<<" $."<<endl;                    //demonstrate both win and lose situations
    cout<<"Thank you for including in GP F project."<<endl;
return 0;
}

