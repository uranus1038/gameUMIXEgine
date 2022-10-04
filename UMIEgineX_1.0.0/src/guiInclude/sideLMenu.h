#pragma once
#include "./UMIWinMenu.h"

void menu::sideL(HWND hWnd ) noexcept
{
    CreateWindowW(L"static",L"FlieSystem",WS_VISIBLE|WS_CHILD , 200,100,100,50,hWnd ,NULL,NULL,NULL);
}