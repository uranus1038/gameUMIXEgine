#pragma once
#include "./UMIWinMenu.h"

void menu::menuBar(HWND hWnd ,HMENU hMenu) noexcept
{
    hMenu  = CreateMenu();
    HMENU hMenuEdit = CreateMenu();
    AppendMenu(hMenu,MF_STRING,0,"File");
    AppendMenu(hMenuEdit,MF_STRING,0,"File");
    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)hMenuEdit,"Edit");
    SetMenu(hWnd,hMenu);
}