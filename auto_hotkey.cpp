__int64 __fastcall sub_0(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD, _QWORD), __int64 (__fastcall *a3)(char *), __int64 (__fastcall *a4)(__int64, char *))
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  int i; // [rsp+20h] [rbp-1A8h]
  char v8[16]; // [rsp+28h] [rbp-1A0h] BYREF
  char v9[16]; // [rsp+38h] [rbp-190h] BYREF
  char v10[16]; // [rsp+48h] [rbp-180h] BYREF
  char v11[16]; // [rsp+58h] [rbp-170h] BYREF
  char v12[16]; // [rsp+68h] [rbp-160h] BYREF
  int v13; // [rsp+78h] [rbp-150h]
  __int64 v14; // [rsp+80h] [rbp-148h]
  __int64 (__fastcall *v15)(char *, _QWORD); // [rsp+88h] [rbp-140h]
  __int64 (__fastcall *v16)(__int64, int *, __int64); // [rsp+90h] [rbp-138h]
  char v17[2]; // [rsp+A0h] [rbp-128h] BYREF
  int v18[67]; // [rsp+A2h] [rbp-126h] BYREF
  __int64 v19; // [rsp+1B0h] [rbp-18h]

  strcpy(v11, "KERNEL32.dll");
  v19 = a3(v11);
  strcpy(v8, "USER32.dll");
  strcpy(v10, "FindWindowA");
  v4 = a3(v8);
  v15 = (__int64 (__fastcall *)(char *, _QWORD))a4(v4, v10);
  strcpy(v9, "AutoHotkey");
  result = v15(v9, 0i64);
  v14 = result;
  if ( result )
  {
    strcpy(v12, "GetWindowTextA");
    v6 = a3(v8);
    v16 = (__int64 (__fastcall *)(__int64, int *, __int64))a4(v6, v12);
    v13 = v16(v14, v18, 257i64);
    for ( i = 0; i < v13 - 7; ++i )
    {
      if ( *(int *)((char *)v18 + i) == 'atS\\' )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1886745714 )
          return result;
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1884648562 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1634882652 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1852132729 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1684955464 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1684947321 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 2036624961 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1684947292 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1851876179 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1398289184 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1701667143 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1886220099 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1668246627 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1970291563 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1398424147 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1668573559 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1986622020 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1699181157 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1970302537 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1851870324 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 2020557400 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1937076045 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 761556597 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1701603668 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1684632135 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1702260557 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 759517008 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1684107860 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1752459589 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1867346533 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1634034793 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 778985830 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1852400241 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 779248996 )
          return result;
      }
      if ( *(int *)((char *)v18 + i) == 1546858545 )
      {
        result = i;
        if ( *(int *)((char *)&v18[1] + i) == 1937072496 )
          return result;
      }
    }
    v17[0] = 0;
    v17[1] = 43;
    result = a2(v17, (unsigned int)(v13 + 2), 0i64);
  }
  return result;
}