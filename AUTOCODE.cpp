// AUTOCODE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{   string helper = "const newarr = [photo,formJ,formC,certified,memorandomOfCompony,medicalCertificate,componyName,passportCopy,leaseAgreement,powerOfAttorny,tradingLicense,applicationLetter,applicationForm,]";
    string output = "";
    output.append(helper);
    output.append("\nconst [alert, alertType, handleAle,rt, userid, showalert] = useUtilities()");
    string *str= new string[3];

    string* arr = new string[3];
    arr[0] = "rr";
    arr[1] = "rs";
    arr[2] = "rz";
  


    output.append("\n");

    cout << arr->length() << endl;
    for (int i = 0; i < arr->length(); i++)
    {
        string var = "\nconst ["; var.append(arr[i]); var.append(", set"); var.append(arr[i]); var.append("] = useState(null)") ;
        output.append(var);
    }
        
    
    cout << output;
}

