// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // ��������� ����� ������������ ���������� �� ���������� Windows
#define _CRT_SECURE_NO_WARNINGS


// ����� ���������� Windows:
#include <windows.h>
#include <TlHelp32.h>


// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������

typedef VOID	(WINAPI* SERVICEMAIN)(DWORD, LPTSTR*);
typedef VOID	(WINAPI* SVCHOSTPUSHSERVICEGLOBALS)(VOID*);
typedef HRESULT (WINAPI* SLGETWINDOWSINFORMATIONDWORD)(PCWSTR, DWORD*);