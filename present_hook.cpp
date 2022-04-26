__int64 __fastcall sub_0(__int64 a1, void (__fastcall *a2)(char *, __int64, _QWORD), __int64 (__fastcall *a3)(char *), __int64 (__fastcall *a4)(__int64, char *))
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  bool v7; // [rsp+30h] [rbp-2A8h]
  char v8; // [rsp+31h] [rbp-2A7h]
  unsigned __int8 *v9; // [rsp+38h] [rbp-2A0h]
  int i; // [rsp+40h] [rbp-298h]
  char v11; // [rsp+44h] [rbp-294h]
  unsigned int k; // [rsp+48h] [rbp-290h]
  int j; // [rsp+4Ch] [rbp-28Ch]
  __int64 v14; // [rsp+50h] [rbp-288h]
  __int64 **v15; // [rsp+50h] [rbp-288h]
  __int64 v16; // [rsp+58h] [rbp-280h]
  __int64 **v17; // [rsp+58h] [rbp-280h]
  char v18[8]; // [rsp+60h] [rbp-278h] BYREF
  char v19[16]; // [rsp+68h] [rbp-270h] BYREF
  char v20[16]; // [rsp+78h] [rbp-260h] BYREF
  char v21[24]; // [rsp+88h] [rbp-250h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-238h]
  BOOL v23; // [rsp+A8h] [rbp-230h]
  int v24; // [rsp+ACh] [rbp-22Ch]
  int v25; // [rsp+B0h] [rbp-228h]
  int v26; // [rsp+B4h] [rbp-224h]
  int v27; // [rsp+B8h] [rbp-220h]
  BOOL v28; // [rsp+BCh] [rbp-21Ch]
  BOOL v29; // [rsp+C0h] [rbp-218h]
  BOOL v30; // [rsp+C4h] [rbp-214h]
  BOOL v31; // [rsp+C8h] [rbp-210h]
  int v32; // [rsp+CCh] [rbp-20Ch]
  int v33; // [rsp+D0h] [rbp-208h]
  _DWORD v34[8]; // [rsp+E0h] [rbp-1F8h] BYREF
  char v35; // [rsp+100h] [rbp-1D8h]
  char v36; // [rsp+101h] [rbp-1D7h]
  char v37; // [rsp+102h] [rbp-1D6h]
  char v38; // [rsp+103h] [rbp-1D5h]
  char v39; // [rsp+104h] [rbp-1D4h]
  char v40; // [rsp+105h] [rbp-1D3h]
  char v41; // [rsp+106h] [rbp-1D2h]
  char v42; // [rsp+107h] [rbp-1D1h]
  char v43; // [rsp+108h] [rbp-1D0h]
  char v44; // [rsp+109h] [rbp-1CFh]
  char v45; // [rsp+10Ah] [rbp-1CEh]
  char v46; // [rsp+10Bh] [rbp-1CDh]
  char v47; // [rsp+10Ch] [rbp-1CCh]
  char v48; // [rsp+10Dh] [rbp-1CBh]
  char v49; // [rsp+10Eh] [rbp-1CAh]
  char v50[5]; // [rsp+10Fh] [rbp-1C9h] BYREF
  char v51[28]; // [rsp+114h] [rbp-1C4h] BYREF
  int v52; // [rsp+130h] [rbp-1A8h]
  char v53; // [rsp+134h] [rbp-1A4h]
  char v54; // [rsp+135h] [rbp-1A3h]
  char v55; // [rsp+136h] [rbp-1A2h]
  char v56; // [rsp+137h] [rbp-1A1h]
  char v57; // [rsp+138h] [rbp-1A0h]
  char v58; // [rsp+139h] [rbp-19Fh]
  char v59; // [rsp+13Ah] [rbp-19Eh]
  char v60; // [rsp+13Bh] [rbp-19Dh]
  char v61; // [rsp+13Ch] [rbp-19Ch]
  char v62; // [rsp+13Dh] [rbp-19Bh]
  char v63[10]; // [rsp+13Eh] [rbp-19Ah] BYREF
  char v64[28]; // [rsp+148h] [rbp-190h] BYREF
  int v65; // [rsp+164h] [rbp-174h]
  char v66; // [rsp+168h] [rbp-170h]
  char v67; // [rsp+169h] [rbp-16Fh]
  char v68; // [rsp+16Ah] [rbp-16Eh]
  char v69; // [rsp+16Bh] [rbp-16Dh]
  char v70; // [rsp+16Ch] [rbp-16Ch]
  char v71; // [rsp+16Dh] [rbp-16Bh]
  char v72; // [rsp+16Eh] [rbp-16Ah]
  char v73; // [rsp+16Fh] [rbp-169h]
  char v74; // [rsp+170h] [rbp-168h]
  char v75; // [rsp+171h] [rbp-167h]
  char v76; // [rsp+172h] [rbp-166h]
  char v77; // [rsp+173h] [rbp-165h]
  char v78; // [rsp+174h] [rbp-164h]
  char v79; // [rsp+175h] [rbp-163h]
  char v80; // [rsp+176h] [rbp-162h]
  char v81; // [rsp+177h] [rbp-161h]
  char v82; // [rsp+178h] [rbp-160h]
  char v83; // [rsp+179h] [rbp-15Fh]
  char v84; // [rsp+17Ah] [rbp-15Eh]
  char v85; // [rsp+17Bh] [rbp-15Dh] BYREF
  char v86[28]; // [rsp+17Ch] [rbp-15Ch] BYREF
  int v87; // [rsp+198h] [rbp-140h]
  char v88; // [rsp+19Ch] [rbp-13Ch]
  char v89; // [rsp+19Dh] [rbp-13Bh]
  char v90; // [rsp+19Eh] [rbp-13Ah]
  char v91; // [rsp+19Fh] [rbp-139h]
  char v92; // [rsp+1A0h] [rbp-138h]
  char v93; // [rsp+1A1h] [rbp-137h]
  char v94; // [rsp+1A2h] [rbp-136h]
  char v95; // [rsp+1A3h] [rbp-135h]
  char v96; // [rsp+1A4h] [rbp-134h]
  char v97; // [rsp+1A5h] [rbp-133h]
  char v98[10]; // [rsp+1A6h] [rbp-132h] BYREF
  __int64 v99; // [rsp+1B0h] [rbp-128h] BYREF
  __int64 v100; // [rsp+1B8h] [rbp-120h]
  __int64 v101; // [rsp+1C8h] [rbp-110h]
  int v102; // [rsp+1D0h] [rbp-108h]
  int v103; // [rsp+1D4h] [rbp-104h]
  int v104; // [rsp+1D8h] [rbp-100h]
  __int64 v105; // [rsp+1E0h] [rbp-F8h]
  int (__fastcall *v106)(__int64, __int64 *, _QWORD, __int64 *, __int64, char *); // [rsp+1E8h] [rbp-F0h]
  __int64 v107; // [rsp+1F0h] [rbp-E8h] BYREF
  char v108[8]; // [rsp+1F8h] [rbp-E0h] BYREF
  __int64 v109; // [rsp+200h] [rbp-D8h]
  __int64 v110; // [rsp+208h] [rbp-D0h]
  __int64 v111; // [rsp+210h] [rbp-C8h]
  __int64 v112; // [rsp+218h] [rbp-C0h]
  __int64 v113; // [rsp+220h] [rbp-B8h]
  void (__fastcall *v114)(__int64); // [rsp+228h] [rbp-B0h]
  char v115[3]; // [rsp+230h] [rbp-A8h] BYREF
  __int64 *v116; // [rsp+233h] [rbp-A5h]
  __int64 v117; // [rsp+23Bh] [rbp-9Dh]
  __int64 v118; // [rsp+243h] [rbp-95h]
  __int64 v119; // [rsp+24Bh] [rbp-8Dh]
  __int64 v120; // [rsp+253h] [rbp-85h]
  __int64 v121; // [rsp+25Bh] [rbp-7Dh]
  __int64 v122; // [rsp+263h] [rbp-75h]
  int v123; // [rsp+26Bh] [rbp-6Dh]
  int v124; // [rsp+26Fh] [rbp-69h]
  char v125[3]; // [rsp+280h] [rbp-58h] BYREF
  unsigned __int8 *v126; // [rsp+283h] [rbp-55h]
  __int64 v127; // [rsp+28Bh] [rbp-4Dh]
  __int64 v128; // [rsp+293h] [rbp-45h]
  __int64 v129; // [rsp+29Bh] [rbp-3Dh]
  __int64 v130; // [rsp+2A3h] [rbp-35h]
  __int64 v131; // [rsp+2ABh] [rbp-2Dh]
  __int64 v132; // [rsp+2B3h] [rbp-25h]
  int v133; // [rsp+2BBh] [rbp-1Dh]
  int v134; // [rsp+2BFh] [rbp-19h]

  strcpy((char *)v34, "gameoverlayrenderer64.dll");
  memset((char *)&v34[6] + 2, 0, 2ui64);
  v34[7] = 15;
  v35 = 51;
  v36 = -10;
  v37 = -125;
  v38 = -27;
  v39 = -9;
  v40 = 68;
  v41 = -117;
  v42 = -59;
  v43 = -117;
  v44 = -42;
  v45 = 73;
  v46 = -117;
  v47 = -50;
  v48 = -1;
  v49 = 21;
  memset(v50, 0, sizeof(v50));
  strcpy(v51, "DiscordHook64.dll");
  memset(&v51[18], 0, 0xAui64);
  v52 = 10;
  v53 = 72;
  v54 = -119;
  v55 = -39;
  v56 = -119;
  v57 = -6;
  v58 = 65;
  v59 = -119;
  v60 = -16;
  v61 = -1;
  v62 = 21;
  memset(v63, 0, sizeof(v63));
  strcpy(v64, "overlay64.dll");
  memset(&v64[14], 0, 0xEui64);
  v65 = 19;
  v66 = 72;
  v67 = -117;
  v68 = 92;
  v69 = 36;
  v70 = 64;
  v71 = 68;
  v72 = -117;
  v73 = 68;
  v74 = 36;
  v75 = 48;
  v76 = -117;
  v77 = 84;
  v78 = 36;
  v79 = 56;
  v80 = 72;
  v81 = -117;
  v82 = -53;
  v83 = -1;
  v84 = 21;
  memset(&v85, 0, sizeof(v85));
  strcpy(v86, "DiscordHook64.dll");
  memset(&v86[18], 0, 0xAui64);
  v87 = 10;
  v88 = 68;
  v89 = -117;
  v90 = -57;
  v91 = -117;
  v92 = -42;
  v93 = 72;
  v94 = -117;
  v95 = -53;
  v96 = -1;
  v97 = 21;
  memset(v98, 0, sizeof(v98));
  v11 = 0;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( (unsigned __int64)i >= 4 )
      break;
    _mm_lfence();
    v105 = a3((char *)&v34[13 * i]);
    if ( v105 )
    {
      _mm_lfence();
      v109 = v105 + *(int *)(v105 + 60) + 24;
      v14 = *(unsigned int *)(v109 + 20) + v105;
      for ( j = 0; (unsigned int)(v34[13 * i + 7] + j) <= *(_DWORD *)(v109 + 4); ++j )
      {
        for ( k = 0;
              k < v34[13 * i + 7]
           && *(unsigned __int8 *)(v14 + (int)(k + j)) == *((unsigned __int8 *)&v34[13 * i + 8] + (int)k);
              ++k )
        {
          ;
        }
        if ( k == v34[13 * i + 7] )
        {
          strcpy(v19, "ntdll.dll");
          strcpy(v21, "NtQueryVirtualMemory");
          v5 = a3(v19);
          v106 = (int (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64, char *))a4(v5, v21);
          if ( i == 1
            && *(unsigned __int8 *)(v14 + j - 166) == 233
            && (v16 = *(_DWORD *)(v14 + j - 166 + 1) + 5 + v14 + j - 166, *(_WORD *)v16 == 9727)
            && (v17 = (__int64 **)(*(_DWORD *)(v16 + 2) + 6 + v16), **v17 == 0x2454891824448944i64) )
          {
            v15 = v17;
          }
          else
          {
            v15 = (__int64 **)((int)(k + j + *(_DWORD *)(j + v14 + (int)k) + 4) + v14);
          }
          if ( *v15 )
          {
            v23 = v106(-1i64, *v15, 0i64, &v99, 48i64, v108) < 0;
            if ( v23 || v102 != 4096 || v104 != 0x20000 || v103 != 64 || *(_DWORD *)*v15 == 1354772808 )
            {
              v115[0] = 0;
              v115[1] = 71;
              if ( i )
              {
                if ( i == 3i64 )
                  v24 = 1;
                else
                  v24 = i;
                v25 = v24 + 1;
              }
              else
              {
                v25 = 0;
              }
              v115[2] = v25;
              v116 = *v15;
              v117 = *v116;
              v118 = v116[1];
              v119 = v116[2];
              v120 = v116[3];
              if ( v23 )
                v110 = 0i64;
              else
                v110 = v100;
              v121 = v110;
              if ( v23 )
                v111 = 0i64;
              else
                v111 = v99;
              v122 = v111;
              if ( v23 )
                v26 = 0;
              else
                v26 = v101;
              v123 = v26;
              if ( v23 )
                v27 = 0;
              else
                v27 = v104 | v103 | v102;
              v124 = v27;
              a2(v115, 67i64, 0i64);
            }
            if ( !v11 )
            {
              v107 = 0i64;
              if ( a3 == (__int64 (__fastcall *)(char *))305419895 )
                sub_11D2(0i64, 0i64, 0i64);
              v22 = sub_11C2();
              v22 += *(_DWORD *)(v22 - 9) - 5;
              *(_QWORD *)(v22 + 20) = &v107;
              *(_QWORD *)(v22 + 35) = *v15;
              *v15 = (__int64 *)v22;
              strcpy(v20, "KERNEL32.dll");
              strcpy(v18, "Sleep");
              v6 = a3(v20);
              v114 = (void (__fastcall *)(__int64))a4(v6, v18);
              v114(1000i64);
              *v15 = *(__int64 **)(v22 + 35);
              if ( v107 )
              {
                v9 = *(unsigned __int8 **)(*(_QWORD *)v107 + 64i64);
                v28 = v106(-1i64, (__int64 *)v9, 0i64, &v99, 48i64, v108) < 0;
                v7 = v28;
                v8 = v28;
                if ( !v28 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( *v9 == 233 )
                      {
                        if ( *(_DWORD *)(v9 + 5) == -858993460 )
                          v8 = 1;
                        v9 += *(_DWORD *)(v9 + 1) + 5;
                      }
                      if ( *(_WORD *)v9 != 9727 )
                        break;
                      v9 = *(unsigned __int8 **)&v9[*(int *)(v9 + 2) + 6];
                    }
                    if ( *(unsigned __int16 *)v9 != 47176 || *((unsigned __int16 *)v9 + 5) != 57599 )
                      break;
                    v9 = *(unsigned __int8 **)(v9 + 2);
                    v8 = 1;
                  }
                  if ( !v8 )
                  {
                    v29 = v106(-1i64, (__int64 *)v9, 0i64, &v99, 48i64, v108) < 0;
                    v7 = v29;
                    v31 = v29
                       || v102 != 4096
                       || (v104 != 0x1000000 || v101 == 4096 && v103 == 32)
                       && (v104 != 0x20000
                        || v101 != 0x10000
                        || *((_QWORD *)v9 + 20) != 0xEBFFFFFF41058D48ui64
                        || (v9 = (unsigned __int8 *)*((_QWORD *)v9 - 3),
                            v30 = v106(-1i64, (__int64 *)v9, 0i64, &v99, 48i64, v108) < 0,
                            v7 = v30)
                        || v102 != 4096
                        || v104 != 0x1000000)
                       || v103 != 16 && v103 != 32 && v103 != 64 && v103 != 128
                       || *(_QWORD *)v9 == 0x74894808245C8948i64
                       && (*((_QWORD *)v9 + 1) == 0x4140EC8348571024i64 || *((_QWORD *)v9 + 1) == 0x5518247C89481024i64)
                       || *(_QWORD *)v9 == 0x57565520245C8948i64
                       || *(_QWORD *)v9 == 0x4157551824748948i64
                       || *(_QWORD *)v9 == 0x8D48564157565540ui64
                       || *(_DWORD *)v9 == 1220840264 && *((_WORD *)v9 + 2) == 22665
                       || *(_QWORD *)v9 == 0x5741564157565340i64
                       || *(_QWORD *)v9 == 0x5741564155C48B48i64
                       || *(_QWORD *)v9 == 0x4156415441575540i64;
                    v8 = v31;
                  }
                }
                if ( v8 )
                {
                  v125[0] = 0;
                  v125[1] = 71;
                  v125[2] = 1;
                  v126 = v9;
                  v127 = *(_QWORD *)v9;
                  v128 = *((_QWORD *)v9 + 1);
                  v129 = *((_QWORD *)v9 + 2);
                  v130 = *((_QWORD *)v9 + 3);
                  if ( v7 )
                    v112 = 0i64;
                  else
                    v112 = v100;
                  v131 = v112;
                  if ( v7 )
                    v113 = 0i64;
                  else
                    v113 = v99;
                  v132 = v113;
                  if ( v7 )
                    v32 = 0;
                  else
                    v32 = v101;
                  v133 = v32;
                  if ( v7 )
                    v33 = 0;
                  else
                    v33 = v104 | v103 | v102;
                  v134 = v33;
                  a2(v125, 67i64, 0i64);
                }
              }
              v114(100i64);
              v11 = 1;
            }
          }
          break;
        }
      }
    }
  }
  return result;
}

void *sub_11C2()
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return retaddr;
}

__int64 __fastcall sub_11D2(__int64 a1, unsigned int a2, unsigned int a3)
{
  MEMORY[0xF1F1F1F1F1F1F1F1] = a1;
  return MEMORY[0xF1F1F1F1F1F1F1F1](a1, a2, a3);
}