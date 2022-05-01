// Calculator.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Calculator.h"



// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.

int num1 = -1, num2 = 0;
int cal = 0;


INT_PTR CALLBACK    DlgProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    hInst = hInstance;
    DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    return 0;
}




INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (LOWORD(wParam) == IDC_CAL) {
            if (cal == 1) {
                SetDlgItemInt(hDlg, IDC_SHOW, num1 + num2, TRUE);
                num1 = -1;
                num2 = 0;
                cal = 0;
            }
            else if(cal == 2) {
                SetDlgItemInt(hDlg, IDC_SHOW, num1 - num2, TRUE);
                num1 = -1;
                num2 = 0;
                cal = 0;
            }
            else if (cal == 3) {
                SetDlgItemInt(hDlg, IDC_SHOW, num1 * num2, TRUE);
                num1 = -1;
                num2 = 0;
                cal = 0;

            }
            else if (cal == 4) {
                SetDlgItemInt(hDlg, IDC_SHOW, num1 / num2, TRUE);
                num1 = -1;
                num2 = 0;
                cal = 0;
            }
        }
        switch (LOWORD(wParam))
        {
        case IDC_NUM0:
            SetDlgItemInt(hDlg, IDC_SHOW, 0, TRUE);
            if (cal != 0) {
                num2 = 0;
            }
            else {
                num1 = 0;
            }
            break;

        case IDC_NUM1:
            SetDlgItemInt(hDlg, IDC_SHOW, 1, TRUE);
            if (cal != 0) {
                num2 = 1;
            }
            else {
                num1 = 1;
            }
            break;

        case IDC_NUM2:
            SetDlgItemInt(hDlg, IDC_SHOW, 2, TRUE);
            if (cal != 0) {
                num2 = 2;
            }
            else {
                num1 = 2;
            }
            break;

        case IDC_NUM3:
            SetDlgItemInt(hDlg, IDC_SHOW, 3, TRUE);
            if (cal != 0) {
                num2 = 3;
            }
            else {
                num1 = 3;
            }
            break;

        case IDC_NUM4:
            SetDlgItemInt(hDlg, IDC_SHOW, 4, TRUE);
            if (cal != 0) {
                num2 = 4;
            }
            else {
                num1 = 4;
            }
            break;

        case IDC_NUM5:
            SetDlgItemInt(hDlg, IDC_SHOW, 5, TRUE);
            if (cal != 0) {
                num2 = 5;
            }
            else {
                num1 = 5;
            }
            break;

        case IDC_NUM6:
            SetDlgItemInt(hDlg, IDC_SHOW, 6, TRUE);
            if (cal != 0) {
                num2 = 6;
            }
            else {
                num1 = 6;
            }
            break;

        case IDC_NUM7:
            SetDlgItemInt(hDlg, IDC_SHOW, 7, TRUE);
            if (cal != 0) {
                num2 = 7;
            }
            else {
                num1 = 7;
            }
            break;

        case IDC_NUM8:
            SetDlgItemInt(hDlg, IDC_SHOW, 8, TRUE);
            if (cal != 0) {
                num2 = 8;
            }
            else {
                num1 = 8;
            }
            break;

        case IDC_NUM9:
            SetDlgItemInt(hDlg, IDC_SHOW, 9, TRUE);
            if (cal != 0) {
                num2 = 9;
            }
            else {
                num1 = 9;
            }
            break;

        case IDC_PLUS:
            cal = 1;
            break;

        case IDC_MINUS:
            cal = 2;
            break;

        case IDC_MULTI:
            cal = 3;
            break;

        case IDC_DIV:
            cal = 4;
            break;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
