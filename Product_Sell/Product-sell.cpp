# include <iostream>
# include <cstdlib>
# include <fstream>
using namespace std;

int press;
int n=0;

int manage()
{
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"  *** Please! Press one of the following options"<<endl;
    cout<<" Press 1 to Add a Product"<<endl;
    cout<<" Press 2 to View the Products"<<endl;
    cout<<" Press 3 to Sell a Product"<<endl;
    cout<<" Press 4 to View Profit"<<endl;
    cout<<" Press 5 to Exit"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<" Enter : ";
    cin>>press;

    return press;
}

struct products_listed
{
    std::string name;
    int quantity;
    float sell_price;
    float buy_price;
};

int main()
{
    products_listed arr[100];
    float profit =0;

    cout<<endl;
    cout<<"         Welcome! To Your Products Shop"<<endl<<endl;
    begin:
    manage();

    switch (press)
    {
        ///** ============ For Product listing **///
        case 1:

            cout<<"====== :: Product Listing On Your Shop :: ======"<<endl<<endl;
            for(int i = (1+n) ; i <= 100 ; i++)
            {
                if(i>100)
                {
                    cout<<"Can't listing and You exceed the number of your products"<<endl;
                }
                else
                {
                     cout<<"Enter the Name of the Product no. "<<i<<endl;
                     cin>>arr[i].name;

                     if(arr[i].name==arr[i-1].name)
                     {
                         cout<<"The Products can't have the same name"<<endl<<endl;
                     }
                     else
                     {
                         cout<<"Enter the Quantity of "<<arr[i].name<<endl;
                         cin>>arr[i].quantity;
                         cout<< "Enter the Net Price of " << arr[i].name <<endl;
                         cin>>arr[i].buy_price;
                         cout<<"Enter the Sell Price of "<<arr[i].name<<endl;
                         cin>>arr[i].sell_price;

                         cout<<endl;
                         cout<<" *** Your Product is successfully added"<<endl<<endl;

                         n++;
                         goto begin;
                     }
                  }
                }
                break;

        ///** ============ For Products View Or Check **///
        case 2:

            cout<<"====== :: View Your Products What You Stored :: ======"<<endl<<endl;
            if(n==0)
            {
                cout<<"*** You have no products yet"<<endl<<endl;
                goto begin;
            }
            else
            {
                for(int i =1 ; i <=n ; i++)
                {
                    cout<<"Product no. "<<i<<" Name is : "<<arr[i].name<<endl;
                    cout<<"Product no. "<<i<<" Quantity is: "<<arr[i].quantity<<" Pics."<<endl;
                    cout<<"Product no. "<<i<<" Net price is: "<<arr[i].buy_price<<" tk."<<endl;
                    cout<<"Product no. "<<i<<" Sell price is: "<<arr[i].sell_price<<" tk."<<endl;
                    cout<<endl<<endl;
                }
                goto begin;
             }
             break;

        ///** ============ For Products Sell **///
        case 3:

             char x[100];
             int y;

             cout<<"====== :: Product Selling On Your Shop :: ======"<<endl<<endl;
             cout<<"Enter the Product's Name to be sold"<<endl;
             cin>>x;

             for(int i=1; i<=n; i++)
             {
                if (x==arr[i].name)
                {
                    cout<<"Enter the Quantity to be sold"<<endl;
                    cin>>y;

                    if (y>arr[i].quantity)
                    {
                       cout<<"The products number shouldn't be less than the sold ones"<<endl<<endl;
                    }
                    else
                    {
                        cout<<endl;
                        cout<<" *** The Remaining Quantity is "<<arr[i].quantity-y<<" Pics."<<endl<<endl;

                        arr[i].quantity=arr[i].quantity-y;

                        cout<<" *** Total Selling price is "<<arr[i].sell_price*y<<" tk."<<endl<<endl;

                        ///* File create system *///
                        ofstream myfile("Shopping_and_Bills.txt");

                           if (myfile.is_open())
                           {
                                myfile <<"\n";
                                myfile <<"     Your Bills:              \n";
                                myfile <<"___________________________________________\n";
                                myfile <<" Product Name : "<<x<<"\n";
                                myfile <<" Total Quantity : "<<y<<" Pics. \n";
                                myfile <<" Total Selling Price is : "<<arr[i].sell_price*y<<" tk. \n";

                                myfile.close();
                            }
                            else
                                cout << "Unable to open file";
                        /// closing file system

                    }

                    profit += arr[i].sell_price - arr[i].buy_price;


                  }
                  else
                       cout<<"The Product is not found"<<endl<<endl;
                  }
                  goto begin;
                  break;

        ///** ============ For Check Profit by sell products **///
        case 4:

            cout<<"====== :: Your Profit :: ======"<<endl<<endl;
            cout<<" *** Profit: "<<profit*y<<" tk."<<endl<<endl;

            goto begin;
            break;

        ///** ============ Close The Program **///
        case 5:

            cout<<"Terminate the Program"<<endl<<endl;

            exit(0);
     }

     return 0;

}


