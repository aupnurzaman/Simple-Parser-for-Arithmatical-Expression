#include <iostream>

using namespace std;

int main()
{
    string inputan;
    string ar[100];
    int i,z,n;
    getline(cin,inputan);
    z=inputan.length();
    i=0;
    n=0;
    while(i<z){
        if(inputan[i]=='-'||inputan[i]=='+'){
            if(inputan[i+1]=='0'||inputan[i+1]=='1'||inputan[i+1]=='2'||inputan[i+1]=='3'||inputan[i+1]=='4'||inputan[i+1]=='5'||inputan[i+1]=='6'||inputan[i+1]=='7'||inputan[i+1]=='8'||inputan[i+1]=='9'){
                i++;
            }
            else{
                    i++;
                    ar[n]="operator";
            }


        }
        else if (inputan[i]=='0'||inputan[i]=='1'||inputan[i]=='2'||inputan[i]=='3'||inputan[i]=='4'||inputan[i]=='5'||inputan[i]=='6'||inputan[i]=='7'||inputan[i]=='8'||inputan[i]=='9'){
              while(inputan[i]!=' ' && inputan[i]!='\0'){
                    if(inputan[i]=='0'||inputan[i]=='1'||inputan[i]=='2'||inputan[i]=='3'||inputan[i]=='4'||inputan[i]=='5'||inputan[i]=='6'||inputan[i]=='7'||inputan[i]=='8'||inputan[i]=='9'||inputan[i]=='E'||inputan[i]=='e'||inputan[i]=='+' || inputan[i] == ','){
                        i++;
                        ar[n]="num";
                    }
              }
        }
        else if(inputan[i]=='x'||inputan[i]==':'){
            i++;
            ar[n]="operator";
        }
        else if(inputan[i]=='('){
                    i++;
                    ar[n]="kurung buka";
        }
        else if(inputan[i]==')'){
            i++;
            ar[n]="kurung tutup";
        }else if(inputan[i]==' '){
            i++;
        }else{
            i++;
            ar[n]="error";
        }

        n++;
    }

    for(int j=0;j < i;j++){
        cout<<ar[j];
        cout<<" ";
    }

    return 0;

}
