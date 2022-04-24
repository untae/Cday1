// Cdialog01.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Cdialog01.h"



// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.

INT_PTR CALLBACK   Dlgproc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1),NULL, Dlgproc);
    return 0;
}




INT_PTR CALLBACK Dlgproc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        (LOWORD(wParam) == IDC_PLUS) ? SetDlgItemInt(hDlg, IDC_SHOW, 123, TRUE) : NULL;
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
