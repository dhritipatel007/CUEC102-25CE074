#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    string filename;

    while(true)
    {
        cout<<"Enter file name (or type exit): ";
        cin>>filename;

        if(filename == "exit")
        {
            cout<<"Program terminated";
            return 0;
        }

        fin.open(filename.c_str());

        if(!fin)
        {
            cout<<"Error: File not found. Try again.\n";
        }
        else
        {
            break;
        }
    }

    float num, sum=0;
    int count=0, line=1;

    cout<<"\nProcessing file...\n";

    while(!fin.eof())
    {
        fin>>num;

        if(fin.fail())
        {
            cout<<"Invalid data at line "<<line<<" skipped\n";

            fin.clear();
            string temp;
            fin>>temp;
        }
        else
        {
            sum = sum + num;
            count++;
        }

        line++;
    }

    fin.close();

    cout<<"\n--- Result ---\n";

    if(count>0)
    {
        cout<<"Sum = "<<sum<<endl;
        cout<<"Average = "<<sum/count<<endl;
    }
    else
    {
        cout<<"No valid numeric data found";
    }

    return 0;
}
