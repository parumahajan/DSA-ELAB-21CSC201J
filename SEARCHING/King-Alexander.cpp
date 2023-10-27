#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wwrite-strings"

//char *gems[]={"NONE","Garnet","Amethyst","Aquamarine","Diamond","Emerald","Pearl","Ruby","Peridot","Sapphire","Tourmaline","Topaz","Lapis",0};
string gems[]={"Garnet","Amethyst","Aquamarine","Diamond","Emerald","Pearl","Ruby","Peridot","Sapphire","Tourmaline","Topaz","Lapis"};
int index(string s){
    for (int i = 11; i>0; i--) {
        if(s.find(" "+gems[i]) != string::npos||s.find(gems[i]+" ") != string::npos){
            return 11-i;
        }
    }
    return 12;
}
int main()
{
    vector<string> arr[13];
    string temp;
    while(1){
        getline(cin,temp);
        if(temp=="END") break;
        arr[index(temp)].push_back(temp);
    }
    for (int i = 0; i < 13; i++) {
        sort(arr[i].begin(),arr[i].end());
        for(auto s:arr[i]){
            cout<<s<<endl;
        }
        //cout<<endl;
    }

    return 0;
    printf("char ponies[MAXP][BUFLEN];strcmp(ponies[a],ponies[b])>0;");
    //printf("THIS IS THE PROBLEM char *gems[]={" NONE ", " Garnet " , " Amethyst " , " Aquamarine " , " Diamond " , " Emerald " , " Pearl " , " Ruby " , " Peridot " , " Sapphire " , " Tourmaline " , " Topaz " , " Lapis ", 0};");
    char *gems[]={"NONE","Garnet","Amethyst","Aquamarine","Diamond","Emerald","Pearl","Ruby","Peridot","Sapphire","Tourmaline","Topaz","Lapis",0};
   // char *gems[]={" NONE " , " Garnet " , " Amethyst " , " Aquamarine " , " Diamond " , "Emerald " , " Pearl " , " Ruby " , " Peridot " , " Sapphire " , " Tourmaline " , " Topaz " , " Lapis ", 0};
    char x = gems[0][0];
    printf("%c",x);
}