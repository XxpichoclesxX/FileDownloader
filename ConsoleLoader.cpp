#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")

using namespace std;

//Login Details
string username;
string password;

//Login Correct
string usernameC = "Demo";
string passwordC = "1234";

int choice;
bool menu = true;

void downloadFILE() {

    try {
        // The URL to download from the website you want
        const wchar_t* srcURL = L"https://download.com/your-link";

        // The destination file 
        const wchar_t* destFile = L"RenameMe.lua";

        // URLDownloadToFile returns S_OK on success 
        if (S_OK == URLDownloadToFile(NULL, srcURL, destFile, 0, NULL))
        {
            cout << "Lua descargado!"; // Message when download is done
        }

        else
        {
            cout << "Importacion fallida";

            if (remove("Error.lua") != 0) //Change to your file name to delete it when failed
                perror("Error borrando archivo");
            else
                puts("Archivo borrado!");
        }
    }
    catch (const std::exception& e)
    {
        cout << e.what();
    }

}

int main()
{
    // Console headers and name of the window
    SetConsoleTitleA("Made by Pichocles");

    cout << "-- Downloader -- \n";

    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    cout << "--------------------- \n";

    if (username == usernameC && password == passwordC)
    {
        // Some fake auth to a external server if you dont want to use it just delete this shit, is for giving some pro details
        cout << "Comprobando detalles con el servidor...";
        Sleep(6000);
        system("CLS");
        cout << "Detalles exitosos! Entrando...";
        Sleep(2500);

        std::string window{ "" }; std::string module{ "" }; std::string dllname{ "" };

        system("CLS");

        while (menu == true)
        {
            cout << "1 - Feature1 \n";
            cout << "2 - Feature2 \n";
            cout << "3 - Feature3 \n";
            cout << "4 - Exit \n";
            cout << "Selecciona tu opcion: ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Feature1 \n";
                //code
                {
                    cout << "Descargando archivo...\n";
                    downloadFILE(); //Downloads the file from the url
                    return 0;
                }
                break;
            case 2:
                cout << "Feature2 \n";
                //code
                break;
            case 3:
                cout << "Feature3 \n";
                //code
                break;
            case 4:
                cout << "Saliendo de la app ... \n";
                Sleep(2500);
                menu = false;
                break;
            default:
                cout << "Opcion invalida, intentalo de nuevo. \n";
                cin >> choice;
                break;
            }
        }
    }
    else {
        cout << "Comprobando detalles...";
        Sleep(3500);
        system("CLS");
        cout << "Detalles falsos, tonto!";
        Sleep(1500);
        return 0;
    }

    return 0;
}

//MIT License
//
//Copyright(c) 2022 XxpichoclesxX
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.
