#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

/*
 This program simulates a simple directory system.
 It allows user to:
 1. Add folders
 2. Add files to folders
 3. Display directory contents
*/

int main()
{
    map<string, vector<string> > dir;
    int choice;
    string folder, file;

    do
    {
        cout<<"\n1. Add Folder";
        cout<<"\n2. Add File to Folder";
        cout<<"\n3. Display Directory";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        cin.ignore(); // clear buffer

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter folder name: ";
                getline(cin, folder);

                if(dir.find(folder) == dir.end())
                {
                    dir[folder] = vector<string>(); // no C++11 needed
                    cout<<"Folder added";
                }
                else
                {
                    cout<<"Folder already exists";
                }
                break;
            }

            case 2:
            {
                cout<<"Enter folder name: ";
                getline(cin, folder);

                if(dir.find(folder) != dir.end())
                {
                    cout<<"Enter file name: ";
                    getline(cin, file);

                    bool exists = false;
                    for(int i = 0; i < dir[folder].size(); i++)
                    {
                        if(dir[folder][i] == file)
                        {
                            exists = true;
                            break;
                        }
                    }

                    if(!exists)
                    {
                        dir[folder].push_back(file);
                        cout<<"File added";
                    }
                    else
                    {
                        cout<<"File already exists in folder";
                    }
                }
                else
                {
                    cout<<"Folder not found";
                }
                break;
            }

            case 3:
            {
                cout<<"\n--- Directory Contents ---\n";

                map<string, vector<string> >::iterator it;

                for(it = dir.begin(); it != dir.end(); it++)
                {
                    cout<<"Folder: "<<it->first<<endl;

                    if(it->second.empty())
                    {
                        cout<<"  (No files)"<<endl;
                    }
                    else
                    {
                        vector<string>::iterator vit;

                        for(vit = it->second.begin(); vit != it->second.end(); vit++)
                        {
                            cout<<"  "<<*vit<<endl;
                        }
                    }
                }
                break;
            }

            case 4:
            {
                cout<<"Exiting...";
                break;
            }

            default:
            {
                cout<<"Invalid choice";
            }
        }

    } while(choice != 4);

    return 0;
}
