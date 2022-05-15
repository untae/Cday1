// Calculator.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Calculator.h"



// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.

int num1 = -1, num2 = 0, current_num = 0;
int cal = 0, reset = 0;

void operation(int a_cal) {
    reset = 1;
    cal = a_cal;
}
void operation2(int a_num, HWND hDlg) {

    if (reset != 0) {
        reset = 0;
        SetDlgItemInt(hDlg, IDC_SHOW, 0, TRUE);
    }

    current_num = GetDlgItemInt(hDlg, IDC_SHOW, NULL, TRUE);
    SetDlgItemInt(hDlg, IDC_SHOW, current_num * 10 + a_num, TRUE);
    if (cal != 0) {
        num2 = current_num * 10 + a_num;
    }
    else {
        num1 = current_num * 10 + a_num;
    }
}

void cal_function(HWND hDlg) {
    if (cal == 1) {
        SetDlgItemInt(hDlg, IDC_SHOW, num1 + num2, TRUE);
        num1 = -1;
        num2 = 0;
        cal = 0;
        reset = 0;
    }
    else if (cal == 2) {
        SetDlgItemInt(hDlg, IDC_SHOW, num1 - num2, TRUE);
        num1 = -1;
        num2 = 0;
        cal = 0;
        reset = 0;
    }
    else if (cal == 3) {
        SetDlgItemInt(hDlg, IDC_SHOW, num1 * num2, TRUE);
        num1 = -1;
        num2 = 0;
        cal = 0;
        reset = 0;

    }
    else if (cal == 4 && num2 != 0) {
        SetDlgItemInt(hDlg, IDC_SHOW, num1 / num2, TRUE);
        num1 = -1;
        num2 = 0;
        cal = 0;
        reset = 0;
    }



}



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
            cal_function(hDlg);
            
        }
        switch (LOWORD(wParam))
        {
        case IDC_NUM0:
            operation2(0, hDlg);
            break;

        case IDC_NUM1:
            operation2(1, hDlg);
            break;

        case IDC_NUM2:
            operation2(2, hDlg);
            break;

        case IDC_NUM3:
            operation2(3, hDlg);
            break;

        case IDC_NUM4:
            operation2(4, hDlg);
            break;

        case IDC_NUM5:
            operation2(5, hDlg);
            break;

        case IDC_NUM6:
            operation2(6, hDlg);
            break;

        case IDC_NUM7:
            operation2(7, hDlg);
            break;

        case IDC_NUM8:
            operation2(8, hDlg);
            break;

        case IDC_NUM9:
            operation2(9, hDlg);
            break;

        case IDC_PLUS:
            operation(1);
            break;

        case IDC_MINUS:
            operation(2);
            break;

        case IDC_MULTI:
            operation(3);
            break;

        case IDC_DIV:
            operation(4);
            break;

        case IDC_CLEAR:
            SetDlgItemInt(hDlg, IDC_SHOW, 0, TRUE);
            num1 = -1;
            num2 = 0;
            cal = 0;
            reset = 1;
            break;

        case IDC_BACK:
            int origin = GetDlgItemInt(hDlg, IDC_SHOW, NULL, TRUE);
            SetDlgItemInt(hDlg, IDC_SHOW, origin / 10, TRUE);
            if (cal != 0) {
                num2 = origin / 10;
            }
            else {
                num1 = origin / 10;
            }
            break;

        }
        break;
    }
    return (INT_PTR)FALSE;
}





