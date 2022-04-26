__int64 (__fastcall *__fastcall sub_0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(char *), __int64 (__fastcall *a4)(__int64, char *), char *a5))(__int64, __int64 (__fastcall *)())
{
  __int64 (__fastcall *result)(__int64, __int64 (__fastcall *)()); // rax
  int mm; // [rsp+30h] [rbp-3D8h]
  char v7; // [rsp+34h] [rbp-3D4h]
  int i; // [rsp+38h] [rbp-3D0h]
  char v9; // [rsp+3Ch] [rbp-3CCh] BYREF
  int l; // [rsp+40h] [rbp-3C8h]
  int j; // [rsp+44h] [rbp-3C4h]
  int n; // [rsp+48h] [rbp-3C0h]
  int jj; // [rsp+4Ch] [rbp-3BCh]
  int ll; // [rsp+50h] [rbp-3B8h]
  int k; // [rsp+54h] [rbp-3B4h]
  int m; // [rsp+58h] [rbp-3B0h]
  int ii; // [rsp+5Ch] [rbp-3ACh]
  int kk; // [rsp+60h] [rbp-3A8h]
  char v19[16]; // [rsp+68h] [rbp-3A0h] BYREF
  char v20[8]; // [rsp+78h] [rbp-390h] BYREF
  char v21[8]; // [rsp+80h] [rbp-388h] BYREF
  char v22[8]; // [rsp+88h] [rbp-380h]
  char v23[8]; // [rsp+90h] [rbp-378h]
  char v24[16]; // [rsp+98h] [rbp-370h] BYREF
  char v25[16]; // [rsp+A8h] [rbp-360h] BYREF
  char v26[16]; // [rsp+B8h] [rbp-350h]
  char v27[16]; // [rsp+C8h] [rbp-340h] BYREF
  char v28[16]; // [rsp+D8h] [rbp-330h] BYREF
  char v29[16]; // [rsp+E8h] [rbp-320h] BYREF
  char v30[16]; // [rsp+F8h] [rbp-310h] BYREF
  char v31[16]; // [rsp+108h] [rbp-300h] BYREF
  char v32[16]; // [rsp+118h] [rbp-2F0h] BYREF
  char v33[16]; // [rsp+128h] [rbp-2E0h] BYREF
  char v34[16]; // [rsp+138h] [rbp-2D0h] BYREF
  char v35[24]; // [rsp+148h] [rbp-2C0h] BYREF
  char v36[24]; // [rsp+160h] [rbp-2A8h] BYREF
  char v37[24]; // [rsp+178h] [rbp-290h] BYREF
  char v38[24]; // [rsp+190h] [rbp-278h] BYREF
  char v39[24]; // [rsp+1A8h] [rbp-260h] BYREF
  char v40[24]; // [rsp+1C0h] [rbp-248h] BYREF
  char v41[24]; // [rsp+1D8h] [rbp-230h] BYREF
  char v42[32]; // [rsp+1F0h] [rbp-218h]
  char v43[32]; // [rsp+210h] [rbp-1F8h] BYREF
  char v44[32]; // [rsp+230h] [rbp-1D8h] BYREF
  char v45[32]; // [rsp+250h] [rbp-1B8h] BYREF
  int nn; // [rsp+270h] [rbp-198h]
  __int64 v47; // [rsp+278h] [rbp-190h]
  __int64 (__fastcall *v48)(__int64); // [rsp+280h] [rbp-188h]
  int v49; // [rsp+288h] [rbp-180h]
  unsigned int v50; // [rsp+28Ch] [rbp-17Ch] BYREF
  __int64 v51; // [rsp+290h] [rbp-178h]
  void (__fastcall *v52)(__int64); // [rsp+298h] [rbp-170h]
  __int64 v53; // [rsp+2A0h] [rbp-168h]
  __int64 v54; // [rsp+2A8h] [rbp-160h]
  __int64 v55; // [rsp+2B0h] [rbp-158h]
  __int64 v56; // [rsp+2B8h] [rbp-150h]
  __int64 v57; // [rsp+2C0h] [rbp-148h]
  __int64 v58; // [rsp+2C8h] [rbp-140h]
  __int64 v59; // [rsp+2D0h] [rbp-138h]
  char *v60; // [rsp+2D8h] [rbp-130h]
  __int64 v61; // [rsp+2E0h] [rbp-128h]
  __int64 v62; // [rsp+2E8h] [rbp-120h]
  __int64 v63; // [rsp+2F0h] [rbp-118h]
  __int64 v64; // [rsp+2F8h] [rbp-110h]
  __int64 v65; // [rsp+300h] [rbp-108h] BYREF
  __int64 v66; // [rsp+308h] [rbp-100h]
  __int64 v67; // [rsp+310h] [rbp-F8h]
  __int64 (__fastcall *v68)(__int64, __int64 (__fastcall *)()); // [rsp+318h] [rbp-F0h]
  __int64 (__fastcall *v69)(__int64, __int64 (__fastcall *)()); // [rsp+320h] [rbp-E8h]
  int (__fastcall *v70)(__int64, __int64 *, __int64 *, __int64, unsigned int *); // [rsp+328h] [rbp-E0h]
  __int64 v71; // [rsp+330h] [rbp-D8h] BYREF
  void (__fastcall *v72)(__int64 (__fastcall *)(__int64, __int64 (__fastcall *)())); // [rsp+338h] [rbp-D0h]
  __int64 v73; // [rsp+340h] [rbp-C8h]
  __int64 v74[23]; // [rsp+350h] [rbp-B8h] BYREF

  strcpy(v34, "KERNEL32.dll");
  v53 = a3(v34);
  v9 = 1;
  strcpy(v36, "BEClient_x64.dll");
  v67 = a3(v36);
  if ( *(_DWORD *)(v67 + *(int *)(v67 + 60) + 8) < 0x5D7AA2AFu )
    v60 = &v9;
  else
    v60 = a5;
  strcpy(v44, "AddVectoredExceptionHandler");
  result = (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))a4(v53, v44);
  v68 = result;
  if ( result )
  {
    v48 = sub_180F;
    *(_QWORD *)((char *)sub_180F + 14) = a2;
    strcpy(v25, "ntdll.dll");
    v47 = a3(v25);
    strcpy(v39, "NtQueryVirtualMemory");
    v73 = a4(v47, v39);
    *(_QWORD *)((char *)v48 + 29) = v73;
    *(_QWORD *)((char *)v48 + 47) = a3(0i64);
    result = (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))v68(1i64, (__int64 (__fastcall *)())v48);
    v69 = result;
    if ( result )
    {
      memset(v74, 0, 0xB0ui64);
      strcpy(v30, "USER32.dll");
      v51 = a3(v30);
      strcpy(v35, "GetAsyncKeyState");
      v74[0] = a4(v51, v35);
      strcpy(v33, "GetCursorPos");
      v74[1] = a4(v51, v33);
      strcpy(v32, "IsBadReadPtr");
      v74[2] = a4(v53, v32);
      strcpy(v29, "win32u.dll");
      v66 = a3(v29);
      strcpy(v41, "NtUserGetAsyncKeyState");
      v74[3] = a4(v66, v41);
      strcpy(v38, "GetForegroundWindow");
      v74[4] = a4(v51, v38);
      strcpy(v19, "CallWindowProcW");
      v74[5] = a4(v51, v19);
      strcpy(v37, "NtUserPeekMessage");
      v74[6] = a4(v66, v37);
      strcpy(v28, "NtSetEvent");
      v74[7] = a4(v47, v28);
      for ( i = 6; i <= 7; ++i )
      {
        if ( v74[i] )
        {
          for ( j = 0; j < 32; ++j )
          {
            _mm_lfence();
            if ( *(_WORD *)(v74[i] + j) == 1295 )
            {
              _mm_lfence();
              if ( *(unsigned __int8 *)(v74[i] + j + 2) == 195 )
              {
                v74[i] += j;
                break;
              }
            }
          }
        }
      }
      v57 = a3(0i64);
      if ( *(_DWORD *)(v57 + 0xC0C07F) == 0xE801E283 && *(_DWORD *)(v57 + 10977040) == 1447122753 )
        v74[8] = v57 + 0xC0C082;
      if ( v74[2] && *(_DWORD *)v74[2] == 418153288 )
        v74[12] = v74[2] + 4;
      v42[0] = 72;
      v42[1] = -119;
      v42[2] = 69;
      v42[3] = 88;
      v42[4] = 72;
      v42[5] = -117;
      v42[6] = -51;
      v42[7] = 72;
      v42[8] = -117;
      v42[9] = 67;
      v42[10] = 88;
      v42[11] = 72;
      v42[12] = -119;
      v42[13] = 69;
      v42[14] = 96;
      v42[15] = 72;
      v42[16] = -117;
      v42[17] = 83;
      v42[18] = 88;
      v42[19] = 72;
      v42[20] = -117;
      v42[21] = 67;
      v42[22] = 80;
      v42[23] = -1;
      v42[24] = 21;
      v61 = v47 + *(int *)(v47 + 60) + 24;
      v62 = *(unsigned int *)(v61 + 20) + v47;
      for ( k = 0; k + 25i64 <= (unsigned __int64)*(unsigned int *)(v61 + 4); ++k )
      {
        for ( l = 0; (unsigned __int64)l < 0x19 && *(unsigned __int8 *)(v62 + l + k) == (unsigned __int8)v42[l]; ++l )
          ;
        if ( l == 25i64 )
        {
          v74[13] = k + v62 + l - 2;
          break;
        }
      }
      strcpy(v31, "ucrtbase.dll");
      v58 = a3(v31);
      if ( v58 )
      {
        strcpy(v20, "sqrtf");
        v74[14] = a4(v58, v20);
        strcpy(v43, "__stdio_common_vsprintf_s");
        v74[15] = a4(v58, v43);
      }
      strcpy(v24, "dxgi.dll");
      v56 = a3(v24);
      if ( v56 )
      {
        v22[0] = 72;
        v22[1] = -125;
        v22[2] = -63;
        v22[3] = 0x80;
        v22[4] = 72;
        v22[5] = -1;
        v22[6] = 37;
        v63 = v56 + *(int *)(v56 + 60) + 24;
        v64 = *(unsigned int *)(v63 + 20) + v56;
        for ( m = 0; m + 7i64 <= (unsigned __int64)*(unsigned int *)(v63 + 4); ++m )
        {
          for ( n = 0; (unsigned __int64)n < 7 && *(unsigned __int8 *)(v64 + n + m) == (unsigned __int8)v22[n]; ++n )
            ;
          if ( n == 7i64 )
          {
            v74[16] = m + v64;
            break;
          }
        }
      }
      v19[14] = 65;
      v74[18] = a4(v51, v19);
      strcpy(v27, "d3d11.dll");
      v55 = a3(v27);
      if ( v55 )
      {
        v26[0] = 0;
        v26[1] = 0;
        v26[2] = 69;
        v26[3] = 51;
        v26[4] = -55;
        v26[5] = 68;
        v26[6] = 59;
        v26[7] = -48;
        v26[8] = 119;
        v26[9] = 8;
        v59 = v55 + *(int *)(v55 + 60) + 24;
        v54 = *(unsigned int *)(v59 + 20) + v55;
        for ( ii = 0; ii + 10i64 <= (unsigned __int64)*(unsigned int *)(v59 + 4); ++ii )
        {
          for ( jj = 0; (unsigned __int64)jj < 0xA && *(unsigned __int8 *)(v54 + jj + ii) == (unsigned __int8)v26[jj]; ++jj )
            ;
          if ( jj == 10i64 )
          {
            v74[19] = v54 + ii - 19;
            break;
          }
        }
        v23[0] = 72;
        v23[1] = -125;
        v23[2] = -63;
        v23[3] = 16;
        v23[4] = 72;
        v23[5] = -1;
        v23[6] = 37;
        for ( kk = 0; kk + 7i64 <= (unsigned __int64)*(unsigned int *)(v59 + 4); ++kk )
        {
          for ( ll = 0; (unsigned __int64)ll < 7 && *(unsigned __int8 *)(v54 + ll + kk) == (unsigned __int8)v23[ll]; ++ll )
            ;
          if ( ll == 7i64 )
          {
            v74[20] = kk + v54;
            break;
          }
        }
      }
      strcpy(v21, "Sleep");
      v52 = (void (__fastcall *)(__int64))a4(v53, v21);
      strcpy(v40, "NtProtectVirtualMemory");
      v70 = (int (__fastcall *)(__int64, __int64 *, __int64 *, __int64, unsigned int *))a4(v47, v40);
      for ( mm = 0; *v60 && (unsigned __int64)mm < 0x16; ++mm )
      {
        if ( v74[mm] )
        {
          v65 = 1i64;
          v71 = v74[mm];
          if ( v70(-1i64, &v71, &v65, 64i64, &v50) >= 0 )
          {
            *((_BYTE *)v48 + 0x40) = mm;
            v7 = *(_BYTE *)v74[mm];
            *((_BYTE *)v48 + 0x45) = v7;
            *(_BYTE *)v74[mm] = 0xCC;
            if ( mm == 6 || mm == 7 || mm == 8 )
            {
              v52(1000i64);
            }
            else
            {
              for ( nn = 0; *v60; ++nn )
              {
                v49 = mm == 19 ? 400 : 200;
                if ( nn >= v49 )
                  break;
                v52(5i64);
                if ( *(unsigned __int8 *)v74[mm] != 204 )
                  *(_BYTE *)v74[mm] = 0xCC;
              }
            }
            *(_BYTE *)v74[mm] = v7;
            v52(1000i64);
            v70(-1i64, &v71, &v65, v50, &v50);
          }
        }
      }
      strcpy(v45, "RemoveVectoredExceptionHandler");
      v72 = (void (__fastcall *)(__int64 (__fastcall *)(__int64, __int64 (__fastcall *)())))a4(v53, v45);
      v72(v69);
      result = (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))((__int64 (__fastcall *)(__int64))v52)(100i64);
    }
  }
  return result;
}

__int64 __fastcall sub_180F(__int64 a1)
{
  __int64 result; // rax
  bool v2; // [rsp+31h] [rbp-197h]
  __int64 *v3; // [rsp+38h] [rbp-190h]
  int v4; // [rsp+48h] [rbp-180h]
  int v5; // [rsp+4Ch] [rbp-17Ch]
  _BYTE *v6; // [rsp+60h] [rbp-168h]
  __int64 v7; // [rsp+68h] [rbp-160h]
  __int64 v8; // [rsp+70h] [rbp-158h]
  char v9[3]; // [rsp+80h] [rbp-148h] BYREF
  __int64 *v10; // [rsp+83h] [rbp-145h]
  __int64 v11; // [rsp+8Bh] [rbp-13Dh]
  __int64 v12; // [rsp+93h] [rbp-135h]
  __int64 v13; // [rsp+9Bh] [rbp-12Dh]
  __int64 v14; // [rsp+A3h] [rbp-125h]
  __int64 v15; // [rsp+ABh] [rbp-11Dh]
  __int64 v16; // [rsp+B3h] [rbp-115h]
  int v17; // [rsp+BBh] [rbp-10Dh]
  int v18; // [rsp+BFh] [rbp-109h]
  char v19[3]; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 *v20; // [rsp+D3h] [rbp-F5h]
  __int64 v21; // [rsp+DBh] [rbp-EDh]
  __int64 v22; // [rsp+E3h] [rbp-E5h]
  __int64 v23; // [rsp+EBh] [rbp-DDh]
  __int64 v24; // [rsp+F3h] [rbp-D5h]
  __int64 v25; // [rsp+FBh] [rbp-CDh]
  __int64 v26; // [rsp+103h] [rbp-C5h]
  int v27; // [rsp+10Bh] [rbp-BDh]
  int v28; // [rsp+10Fh] [rbp-B9h]
  int (__fastcall *v29)(__int64, __int64 *, _QWORD, __int64 *, __int64, char *); // [rsp+120h] [rbp-A8h]
  __int64 v30[3]; // [rsp+128h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+140h] [rbp-88h]
  int v32; // [rsp+148h] [rbp-80h]
  int v33; // [rsp+14Ch] [rbp-7Ch]
  int v34; // [rsp+150h] [rbp-78h]
  __int64 v35; // [rsp+1B0h] [rbp-18h]
  char v36[16]; // [rsp+1B8h] [rbp-10h] BYREF

  v29 = (int (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64, char *))0xF1F1F1F1F1F1F1F1i64;
  if ( **(_DWORD **)a1 == 0x80000003 )
  {
    **(_BYTE **)(*(_QWORD *)(a1 + 8) + 0xF8i64) = 0x44;
    v35 = MEMORY[0xF1F1F1F1F1F1F22D] - 0xE0E0E0E0E0E0E0Fi64 + 0x18;
    v6 = (char *)sub_1EF0() + 3;
    if ( *v6 )
    {
      if ( (v3 = **(__int64 ***)(*(_QWORD *)(a1 + 8) + 0x98i64), v2 = v29(-1i64, v3, 0i64, v30, 48i64, v36) < 0)
        || v32 != 4096
        || v34 != 0x1000000 && v31 > 0x2000
        || *(_WORD *)v3 == 9215
        || *(_WORD *)v3 == 9983
        || *(_WORD *)v3 == 10239
        || *(_WORD *)v3 == 26111
        || *(unsigned __int16 *)v3 == 58367 )
      {
        *v6 = 0xB;
        v9[0] = 0;
        v9[1] = 49;
        v9[2] = 51;
        v10 = v3;
        v11 = *v3;
        v12 = v3[1];
        v13 = v3[2];
        v14 = v3[3];
        if ( v2 )
          v7 = 0i64;
        else
          v7 = v30[1];
        v15 = v7;
        if ( v2 )
          v8 = 0i64;
        else
          v8 = v30[0];
        v16 = v8;
        if ( v2 )
          v4 = 0;
        else
          v4 = v31;
        v17 = v4;
        if ( v2 )
          v5 = 0;
        else
          v5 = v34 | v33 | v32;
        v18 = v5;
        MEMORY[0xF1F1F1F1F1F1F1F1](v9, 67i64, 0i64);
      }
    }
    result = 0xFFFFFFFFi64;
  }
  else if ( **(_DWORD **)a1 == -2147483644 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248i64) >= 0x8000000000000000ui64 )
    {
      v19[0] = 0;
      v19[1] = 49;
      v19[2] = 51;
      v20 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 248i64);
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v25 = 0i64;
      v26 = 0i64;
      v27 = 0;
      v28 = 0;
      MEMORY[0xF1F1F1F1F1F1F1F1](v19, 67i64, 0i64);
    }
    result = 0xFFFFFFFFi64;
  }
  else
  {
    result = 0i64;
  }
  return result;
}

void *sub_1EF0()
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return retaddr;
}