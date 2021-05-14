#include <windows.h>
#include "utileria.h"

//****************************************************************************************
void EstablecerVentana(int ancho, int alto)
{
    _COORD coord;
    coord.X = ancho;
    coord.Y = alto;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = alto - 1;
    Rect.Right = ancho - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
}
//****************************************************************************************
void MoverCursor(short x,short y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x,y};
    SetConsoleCursorPosition(handle,coord);
}
//****************************************************************************************
void CambiarCursor(EstadoCursor estado, ModoCursor modo)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf = {modo, estado};
    SetConsoleCursorInfo(hOut, &ConCurInf);
}
//****************************************************************************************
