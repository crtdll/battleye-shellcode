// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  void *v5; // rsp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 result; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v41; // [rsp-78D8h] [rbp-78E8h]
  __int64 v43; // [rsp-78D0h] [rbp-78E0h]
  unsigned __int64 v45; // [rsp-78B8h] [rbp-78C8h]
  int v46; // [rsp-78B0h] [rbp-78C0h]
  int v47; // [rsp-78ACh] [rbp-78BCh]
  int v48; // [rsp-78ACh] [rbp-78BCh]
  int v49; // [rsp-78ACh] [rbp-78BCh]
  int v50; // [rsp-78ACh] [rbp-78BCh]
  int v51; // [rsp-78ACh] [rbp-78BCh]
  int v52; // [rsp-78ACh] [rbp-78BCh]
  int v53; // [rsp-78ACh] [rbp-78BCh]
  int v54; // [rsp-78ACh] [rbp-78BCh]
  int v55; // [rsp-78ACh] [rbp-78BCh]
  int v56; // [rsp-78ACh] [rbp-78BCh]
  unsigned int v57; // [rsp-78A8h] [rbp-78B8h] BYREF
  __int64 v58; // [rsp-78A0h] [rbp-78B0h]
  unsigned __int8 v59; // [rsp-7898h] [rbp-78A8h] BYREF
  signed int i18; // [rsp-7894h] [rbp-78A4h]
  bool v61; // [rsp-7890h] [rbp-78A0h]
  unsigned int v62; // [rsp-788Ch] [rbp-789Ch] BYREF
  __int64 v63; // [rsp-7888h] [rbp-7898h]
  unsigned int v64; // [rsp-7880h] [rbp-7890h] BYREF
  char v65; // [rsp-787Ch] [rbp-788Ch]
  __int64 v66; // [rsp-7878h] [rbp-7888h]
  bool v67; // [rsp-7870h] [rbp-7880h]
  bool v68; // [rsp-786Fh] [rbp-787Fh]
  bool v69; // [rsp-786Eh] [rbp-787Eh]
  int v70; // [rsp-786Ch] [rbp-787Ch]
  unsigned int jj; // [rsp-7868h] [rbp-7878h]
  bool v72; // [rsp-7864h] [rbp-7874h]
  bool v73; // [rsp-7863h] [rbp-7873h]
  unsigned __int8 v74; // [rsp-7862h] [rbp-7872h] BYREF
  __int64 v75; // [rsp-7860h] [rbp-7870h]
  unsigned __int8 *NtReadVirtualMemory; // [rsp-7858h] [rbp-7868h]
  int v77; // [rsp-7850h] [rbp-7860h]
  bool v78; // [rsp-784Ch] [rbp-785Ch]
  bool v79; // [rsp-784Bh] [rbp-785Bh]
  char v80; // [rsp-784Ah] [rbp-785Ah]
  char v81; // [rsp-7849h] [rbp-7859h]
  void (__fastcall *v82)(__int64); // [rsp-7848h] [rbp-7858h]
  int i8; // [rsp-7840h] [rbp-7850h]
  signed int i23; // [rsp-783Ch] [rbp-784Ch]
  char *v85; // [rsp-7838h] [rbp-7848h]
  unsigned int *v86; // [rsp-7830h] [rbp-7840h]
  unsigned int *v87; // [rsp-7828h] [rbp-7838h]
  unsigned int i84; // [rsp-7820h] [rbp-7830h]
  int i31; // [rsp-781Ch] [rbp-782Ch]
  bool v90; // [rsp-7818h] [rbp-7828h]
  bool v91; // [rsp-7817h] [rbp-7827h]
  char v92; // [rsp-7816h] [rbp-7826h]
  char v93; // [rsp-7815h] [rbp-7825h]
  unsigned __int8 v94; // [rsp-7814h] [rbp-7824h]
  unsigned __int8 *kk; // [rsp-7810h] [rbp-7820h]
  int i9; // [rsp-7808h] [rbp-7818h]
  _QWORD v97[6]; // [rsp-7800h] [rbp-7810h] BYREF
  int v98; // [rsp-77D0h] [rbp-77E0h]
  int v99; // [rsp-77CCh] [rbp-77DCh]
  unsigned int i10; // [rsp-77C8h] [rbp-77D8h]
  signed int v101; // [rsp-77C4h] [rbp-77D4h]
  int j; // [rsp-77C0h] [rbp-77D0h]
  unsigned int v103; // [rsp-77BCh] [rbp-77CCh] BYREF
  __int64 (__fastcall *OpenProcess)(__int64, _QWORD, _QWORD); // [rsp-77B8h] [rbp-77C8h]
  _BYTE *v105; // [rsp-77B0h] [rbp-77C0h]
  int i37; // [rsp-77A8h] [rbp-77B8h]
  int v107; // [rsp-77A4h] [rbp-77B4h]
  int i41; // [rsp-77A0h] [rbp-77B0h]
  int thread_stack_index; // [rsp-779Ch] [rbp-77ACh]
  unsigned int v110; // [rsp-7798h] [rbp-77A8h]
  __int64 v111; // [rsp-7790h] [rbp-77A0h]
  __int64 v112; // [rsp-7788h] [rbp-7798h]
  char v113[16]; // [rsp-7780h] [rbp-7790h] BYREF
  char v114; // [rsp-7770h] [rbp-7780h] BYREF
  int v115; // [rsp-776Ch] [rbp-777Ch]
  int v116; // [rsp-7768h] [rbp-7778h]
  int v117; // [rsp-7764h] [rbp-7774h]
  int v118; // [rsp-7760h] [rbp-7770h]
  int i57; // [rsp-775Ch] [rbp-776Ch]
  unsigned int i56; // [rsp-7758h] [rbp-7768h]
  bool v121; // [rsp-7754h] [rbp-7764h]
  char is_notepad_open; // [rsp-7753h] [rbp-7763h]
  char v123; // [rsp-7752h] [rbp-7762h]
  unsigned int *v124; // [rsp-7750h] [rbp-7760h]
  _QWORD v125[2]; // [rsp-7748h] [rbp-7758h] BYREF
  unsigned __int64 i5; // [rsp-7738h] [rbp-7748h]
  int i1; // [rsp-7730h] [rbp-7740h]
  unsigned int i29; // [rsp-772Ch] [rbp-773Ch]
  int i79; // [rsp-7728h] [rbp-7738h]
  int i80; // [rsp-7724h] [rbp-7734h]
  unsigned int i47; // [rsp-7720h] [rbp-7730h]
  int i3; // [rsp-771Ch] [rbp-772Ch]
  unsigned int i20; // [rsp-7718h] [rbp-7728h]
  unsigned int (*v134)(void); // [rsp-7710h] [rbp-7720h]
  __int64 v135; // [rsp-7708h] [rbp-7718h]
  unsigned __int64 v136; // [rsp-7700h] [rbp-7710h]
  __int64 v137; // [rsp-76F8h] [rbp-7708h]
  unsigned __int8 *NtQueryVirtualMemory; // [rsp-76F0h] [rbp-7700h]
  int v139; // [rsp-76E8h] [rbp-76F8h] BYREF
  int v140; // [rsp-76E4h] [rbp-76F4h]
  char v141[16]; // [rsp-76C8h] [rbp-76D8h] BYREF
  int i25; // [rsp-76B8h] [rbp-76C8h]
  int i26; // [rsp-76B4h] [rbp-76C4h]
  int i28; // [rsp-76B0h] [rbp-76C0h]
  int i30; // [rsp-76ACh] [rbp-76BCh]
  int v146; // [rsp-76A8h] [rbp-76B8h]
  int i32; // [rsp-76A4h] [rbp-76B4h]
  int i33; // [rsp-76A0h] [rbp-76B0h]
  int i34; // [rsp-769Ch] [rbp-76ACh]
  int i35; // [rsp-7698h] [rbp-76A8h]
  int i36; // [rsp-7694h] [rbp-76A4h]
  int i38; // [rsp-7690h] [rbp-76A0h]
  int i40; // [rsp-768Ch] [rbp-769Ch]
  int i42; // [rsp-7688h] [rbp-7698h]
  int i46; // [rsp-7684h] [rbp-7694h]
  int i48; // [rsp-7680h] [rbp-7690h]
  int i45; // [rsp-767Ch] [rbp-768Ch]
  unsigned int v158; // [rsp-7678h] [rbp-7688h] BYREF
  int i50; // [rsp-7674h] [rbp-7684h]
  int i51; // [rsp-7670h] [rbp-7680h]
  int i52; // [rsp-766Ch] [rbp-767Ch]
  int v162; // [rsp-7668h] [rbp-7678h]
  int i54; // [rsp-7664h] [rbp-7674h]
  int i55; // [rsp-7660h] [rbp-7670h]
  signed int i58; // [rsp-765Ch] [rbp-766Ch]
  signed int i59; // [rsp-7658h] [rbp-7668h]
  unsigned int v167; // [rsp-7654h] [rbp-7664h] BYREF
  signed int i60; // [rsp-7650h] [rbp-7660h]
  int i61; // [rsp-764Ch] [rbp-765Ch]
  int i62; // [rsp-7648h] [rbp-7658h]
  int i63; // [rsp-7644h] [rbp-7654h]
  int i64; // [rsp-7640h] [rbp-7650h]
  int i65; // [rsp-763Ch] [rbp-764Ch]
  int i66; // [rsp-7638h] [rbp-7648h]
  int i67; // [rsp-7634h] [rbp-7644h]
  int i68; // [rsp-7630h] [rbp-7640h]
  int i70; // [rsp-762Ch] [rbp-763Ch]
  int i69; // [rsp-7628h] [rbp-7638h]
  int i71; // [rsp-7624h] [rbp-7634h]
  int i72; // [rsp-7620h] [rbp-7630h]
  int i73; // [rsp-761Ch] [rbp-762Ch]
  int i74; // [rsp-7618h] [rbp-7628h]
  int i75; // [rsp-7614h] [rbp-7624h]
  int i76; // [rsp-7610h] [rbp-7620h]
  int i77; // [rsp-760Ch] [rbp-761Ch]
  int i78; // [rsp-7608h] [rbp-7618h]
  int i81; // [rsp-7604h] [rbp-7614h]
  int i82; // [rsp-7600h] [rbp-7610h]
  unsigned int v189; // [rsp-75FCh] [rbp-760Ch] BYREF
  unsigned int v190; // [rsp-75F8h] [rbp-7608h] BYREF
  int i86; // [rsp-75F4h] [rbp-7604h]
  int i83; // [rsp-75F0h] [rbp-7600h]
  int i87; // [rsp-75ECh] [rbp-75FCh]
  int v194; // [rsp-75E8h] [rbp-75F8h]
  int i88; // [rsp-75E4h] [rbp-75F4h]
  int v196; // [rsp-75E0h] [rbp-75F0h]
  int i89; // [rsp-75DCh] [rbp-75ECh]
  char v198; // [rsp-75D8h] [rbp-75E8h]
  char v199; // [rsp-75D7h] [rbp-75E7h]
  char v200; // [rsp-75D4h] [rbp-75E4h]
  char v201; // [rsp-75D3h] [rbp-75E3h]
  char v202; // [rsp-75D0h] [rbp-75E0h]
  char v203; // [rsp-75CFh] [rbp-75DFh]
  int i; // [rsp-75CCh] [rbp-75DCh]
  int k; // [rsp-75C8h] [rbp-75D8h]
  int ii; // [rsp-75C4h] [rbp-75D4h]
  unsigned int v207; // [rsp-75C0h] [rbp-75D0h] BYREF
  unsigned int v208; // [rsp-75BCh] [rbp-75CCh] BYREF
  int ll; // [rsp-75B8h] [rbp-75C8h]
  int nn; // [rsp-75B4h] [rbp-75C4h]
  int i2; // [rsp-75B0h] [rbp-75C0h]
  int i4; // [rsp-75ACh] [rbp-75BCh]
  int i6; // [rsp-75A8h] [rbp-75B8h]
  int i11; // [rsp-75A4h] [rbp-75B4h]
  int i12; // [rsp-75A0h] [rbp-75B0h]
  int i13; // [rsp-759Ch] [rbp-75ACh]
  int i14; // [rsp-7598h] [rbp-75A8h]
  int i15; // [rsp-7594h] [rbp-75A4h]
  int i16; // [rsp-7590h] [rbp-75A0h]
  int i17; // [rsp-758Ch] [rbp-759Ch]
  signed int i19; // [rsp-7588h] [rbp-7598h]
  unsigned int v222; // [rsp-7584h] [rbp-7594h] BYREF
  signed int i21; // [rsp-7580h] [rbp-7590h]
  int v224; // [rsp-757Ch] [rbp-758Ch]
  signed int i22; // [rsp-7578h] [rbp-7588h]
  unsigned __int8 *mm; // [rsp-7570h] [rbp-7580h]
  _DWORD *v227; // [rsp-7568h] [rbp-7578h]
  __int64 (__fastcall *v228)(__int64, _QWORD, __int64 *, _QWORD, __int64, int, _QWORD, _QWORD); // [rsp-7560h] [rbp-7570h]
  char v229; // [rsp-7558h] [rbp-7568h]
  _BYTE v230[3]; // [rsp-7557h] [rbp-7567h]
  unsigned int steam_pid; // [rsp-7554h] [rbp-7564h]
  unsigned int i49; // [rsp-7550h] [rbp-7560h]
  __int64 (__fastcall *v233)(__int64, unsigned int *, __int64, unsigned int *); // [rsp-7548h] [rbp-7558h]
  unsigned int explorer_pid; // [rsp-7540h] [rbp-7550h]
  __int64 (__fastcall *v235)(__int64, __int64); // [rsp-7538h] [rbp-7548h]
  __int64 v236; // [rsp-7530h] [rbp-7540h]
  unsigned int *v237; // [rsp-7528h] [rbp-7538h]
  __int64 v238; // [rsp-7520h] [rbp-7530h]
  unsigned int v239; // [rsp-7518h] [rbp-7528h] BYREF
  int v240; // [rsp-7514h] [rbp-7524h]
  char v241[16]; // [rsp-7510h] [rbp-7520h] BYREF
  char v242[8]; // [rsp-7500h] [rbp-7510h] BYREF
  char v243[8]; // [rsp-74F8h] [rbp-7508h] BYREF
  char v244[16]; // [rsp-74F0h] [rbp-7500h] BYREF
  char v245[8]; // [rsp-74E0h] [rbp-74F0h] BYREF
  char v246[8]; // [rsp-74D8h] [rbp-74E8h] BYREF
  char v247[8]; // [rsp-74D0h] [rbp-74E0h] BYREF
  char v248[8]; // [rsp-74C8h] [rbp-74D8h] BYREF
  char v249[8]; // [rsp-74C0h] [rbp-74D0h] BYREF
  char v250[8]; // [rsp-74B8h] [rbp-74C8h] BYREF
  char v251[8]; // [rsp-74B0h] [rbp-74C0h] BYREF
  __int64 v252; // [rsp-74A8h] [rbp-74B8h] BYREF
  unsigned __int64 i27; // [rsp-74A0h] [rbp-74B0h]
  char v254[8]; // [rsp-7498h] [rbp-74A8h] BYREF
  char v255[8]; // [rsp-7490h] [rbp-74A0h] BYREF
  __int64 v256; // [rsp-7488h] [rbp-7498h]
  __int64 v257; // [rsp-7480h] [rbp-7490h]
  __int64 i7; // [rsp-7478h] [rbp-7488h]
  char v259[8]; // [rsp-7470h] [rbp-7480h] BYREF
  char v260[16]; // [rsp-7468h] [rbp-7478h] BYREF
  char v261[16]; // [rsp-7458h] [rbp-7468h] BYREF
  _BYTE v262[16]; // [rsp-7448h] [rbp-7458h]
  char v263[16]; // [rsp-7438h] [rbp-7448h] BYREF
  char v264[16]; // [rsp-7428h] [rbp-7438h] BYREF
  char v265[16]; // [rsp-7418h] [rbp-7428h] BYREF
  char v266[16]; // [rsp-7408h] [rbp-7418h] BYREF
  _BYTE v267[16]; // [rsp-73F8h] [rbp-7408h]
  char v268[16]; // [rsp-73E8h] [rbp-73F8h] BYREF
  char v269[16]; // [rsp-73D8h] [rbp-73E8h] BYREF
  char v270[16]; // [rsp-73C8h] [rbp-73D8h] BYREF
  char v271[16]; // [rsp-73B8h] [rbp-73C8h] BYREF
  char v272[16]; // [rsp-73A8h] [rbp-73B8h] BYREF
  char v273[16]; // [rsp-7398h] [rbp-73A8h] BYREF
  char v274[16]; // [rsp-7388h] [rbp-7398h] BYREF
  char v275[16]; // [rsp-7378h] [rbp-7388h] BYREF
  char v276[16]; // [rsp-7368h] [rbp-7378h] BYREF
  char v277[16]; // [rsp-7358h] [rbp-7368h] BYREF
  char v278[16]; // [rsp-7348h] [rbp-7358h] BYREF
  char v279[16]; // [rsp-7338h] [rbp-7348h] BYREF
  char v280[16]; // [rsp-7328h] [rbp-7338h] BYREF
  _BYTE v281[16]; // [rsp-7318h] [rbp-7328h]
  char v282[16]; // [rsp-7308h] [rbp-7318h] BYREF
  char v283[16]; // [rsp-72F8h] [rbp-7308h] BYREF
  char v284[16]; // [rsp-72E8h] [rbp-72F8h] BYREF
  char v285[16]; // [rsp-72D8h] [rbp-72E8h] BYREF
  char v286[16]; // [rsp-72C8h] [rbp-72D8h] BYREF
  char v287[16]; // [rsp-72B8h] [rbp-72C8h] BYREF
  char v288[16]; // [rsp-72A8h] [rbp-72B8h] BYREF
  char v289[16]; // [rsp-7298h] [rbp-72A8h] BYREF
  char v290[16]; // [rsp-7288h] [rbp-7298h] BYREF
  char v291[16]; // [rsp-7278h] [rbp-7288h] BYREF
  char v292[16]; // [rsp-7268h] [rbp-7278h] BYREF
  char v293[16]; // [rsp-7258h] [rbp-7268h] BYREF
  char v294[16]; // [rsp-7248h] [rbp-7258h] BYREF
  char v295[16]; // [rsp-7238h] [rbp-7248h] BYREF
  char v296[16]; // [rsp-7228h] [rbp-7238h] BYREF
  char v297[16]; // [rsp-7218h] [rbp-7228h] BYREF
  char v298[16]; // [rsp-7208h] [rbp-7218h] BYREF
  char v299[16]; // [rsp-71F8h] [rbp-7208h] BYREF
  char v300[16]; // [rsp-71E8h] [rbp-71F8h] BYREF
  char v301[16]; // [rsp-71D8h] [rbp-71E8h] BYREF
  char v302[16]; // [rsp-71C8h] [rbp-71D8h] BYREF
  char v303[16]; // [rsp-71B8h] [rbp-71C8h] BYREF
  char v304[16]; // [rsp-71A8h] [rbp-71B8h] BYREF
  char v305[16]; // [rsp-7198h] [rbp-71A8h] BYREF
  char v306[16]; // [rsp-7188h] [rbp-7198h] BYREF
  char v307[16]; // [rsp-7178h] [rbp-7188h] BYREF
  char v308[16]; // [rsp-7168h] [rbp-7178h] BYREF
  char v309[16]; // [rsp-7158h] [rbp-7168h] BYREF
  char v310[16]; // [rsp-7148h] [rbp-7158h] BYREF
  char v311[16]; // [rsp-7138h] [rbp-7148h] BYREF
  char v312[16]; // [rsp-7128h] [rbp-7138h] BYREF
  char v313[16]; // [rsp-7118h] [rbp-7128h] BYREF
  char v314[16]; // [rsp-7108h] [rbp-7118h] BYREF
  char v315[16]; // [rsp-70F8h] [rbp-7108h] BYREF
  char v316[24]; // [rsp-70E8h] [rbp-70F8h] BYREF
  char v317[24]; // [rsp-70D0h] [rbp-70E0h] BYREF
  char v318[24]; // [rsp-70B8h] [rbp-70C8h] BYREF
  char v319[24]; // [rsp-70A0h] [rbp-70B0h] BYREF
  char v320[24]; // [rsp-7088h] [rbp-7098h] BYREF
  char v321[24]; // [rsp-7070h] [rbp-7080h] BYREF
  char v322[24]; // [rsp-7058h] [rbp-7068h] BYREF
  char v323[24]; // [rsp-7040h] [rbp-7050h] BYREF
  char v324[24]; // [rsp-7028h] [rbp-7038h] BYREF
  char v325[24]; // [rsp-7010h] [rbp-7020h] BYREF
  char v326[24]; // [rsp-6FF8h] [rbp-7008h] BYREF
  char v327[24]; // [rsp-6FE0h] [rbp-6FF0h] BYREF
  char v328[24]; // [rsp-6FC8h] [rbp-6FD8h] BYREF
  char v329[24]; // [rsp-6FB0h] [rbp-6FC0h] BYREF
  char v330[24]; // [rsp-6F98h] [rbp-6FA8h] BYREF
  char v331[24]; // [rsp-6F80h] [rbp-6F90h] BYREF
  char v332[24]; // [rsp-6F68h] [rbp-6F78h] BYREF
  char v333[24]; // [rsp-6F50h] [rbp-6F60h] BYREF
  char v334[24]; // [rsp-6F38h] [rbp-6F48h] BYREF
  char v335[24]; // [rsp-6F20h] [rbp-6F30h] BYREF
  char v336[24]; // [rsp-6F08h] [rbp-6F18h] BYREF
  char v337[24]; // [rsp-6EF0h] [rbp-6F00h] BYREF
  char v338[24]; // [rsp-6ED8h] [rbp-6EE8h] BYREF
  char v339[24]; // [rsp-6EC0h] [rbp-6ED0h] BYREF
  char v340[24]; // [rsp-6EA8h] [rbp-6EB8h] BYREF
  char v341[24]; // [rsp-6E90h] [rbp-6EA0h] BYREF
  char v342[24]; // [rsp-6E78h] [rbp-6E88h] BYREF
  char v343[32]; // [rsp-6E60h] [rbp-6E70h] BYREF
  char v344[32]; // [rsp-6E40h] [rbp-6E50h] BYREF
  char v345[32]; // [rsp-6E20h] [rbp-6E30h] BYREF
  char v346[32]; // [rsp-6E00h] [rbp-6E10h] BYREF
  char v347[32]; // [rsp-6DE0h] [rbp-6DF0h] BYREF
  char v348[32]; // [rsp-6DC0h] [rbp-6DD0h] BYREF
  char v349[32]; // [rsp-6DA0h] [rbp-6DB0h] BYREF
  char v350[32]; // [rsp-6D80h] [rbp-6D90h] BYREF
  char v351[32]; // [rsp-6D60h] [rbp-6D70h] BYREF
  char v352[32]; // [rsp-6D40h] [rbp-6D50h] BYREF
  char v353[32]; // [rsp-6D20h] [rbp-6D30h] BYREF
  char v354[64]; // [rsp-6D00h] [rbp-6D10h] BYREF
  __int64 (__fastcall *GetWindowLongA)(__int64, __int64); // [rsp-6CC0h] [rbp-6CD0h]
  __int64 v356; // [rsp-6CB8h] [rbp-6CC8h]
  __int64 v357; // [rsp-6CB0h] [rbp-6CC0h]
  __int64 v358; // [rsp-6CA8h] [rbp-6CB8h]
  __int64 **v359; // [rsp-6CA0h] [rbp-6CB0h]
  __int64 v360; // [rsp-6C98h] [rbp-6CA8h]
  void (__fastcall *v361)(unsigned int *); // [rsp-6C90h] [rbp-6CA0h]
  unsigned int v362; // [rsp-6C88h] [rbp-6C98h]
  __int64 (*v363)(void); // [rsp-6C80h] [rbp-6C90h]
  __int64 v364; // [rsp-6C78h] [rbp-6C88h] BYREF
  int v365; // [rsp-6C70h] [rbp-6C80h]
  int v366; // [rsp-6C6Ch] [rbp-6C7Ch]
  int v367; // [rsp-6C68h] [rbp-6C78h]
  int v368; // [rsp-6C64h] [rbp-6C74h]
  unsigned int lsass_pid; // [rsp-6C60h] [rbp-6C70h]
  unsigned int cmd_pid; // [rsp-6C5Ch] [rbp-6C6Ch]
  int v371; // [rsp-6C58h] [rbp-6C68h]
  int v372; // [rsp-6C54h] [rbp-6C64h]
  int v373; // [rsp-6C50h] [rbp-6C60h]
  char v374; // [rsp-6C48h] [rbp-6C58h]
  char v375; // [rsp-6C47h] [rbp-6C57h]
  __int16 v376; // [rsp-6C46h] [rbp-6C56h]
  int v377; // [rsp-6C44h] [rbp-6C54h]
  __int64 v378; // [rsp-6C40h] [rbp-6C50h]
  unsigned int *i85; // [rsp-6C38h] [rbp-6C48h]
  __int64 v380; // [rsp-6C30h] [rbp-6C40h]
  __int64 v381; // [rsp-6C28h] [rbp-6C38h]
  __int64 v382; // [rsp-6C20h] [rbp-6C30h]
  __int64 l; // [rsp-6C18h] [rbp-6C28h]
  __int64 m; // [rsp-6C10h] [rbp-6C20h]
  __int64 v385; // [rsp-6C08h] [rbp-6C18h]
  __int64 v386; // [rsp-6C00h] [rbp-6C10h]
  int v387; // [rsp-6BF8h] [rbp-6C08h]
  int v388; // [rsp-6BF4h] [rbp-6C04h]
  BOOL v389; // [rsp-6BF0h] [rbp-6C00h]
  int v390; // [rsp-6BECh] [rbp-6BFCh]
  int v391; // [rsp-6BE8h] [rbp-6BF8h]
  int v392; // [rsp-6BE4h] [rbp-6BF4h]
  int v393; // [rsp-6BE0h] [rbp-6BF0h]
  unsigned int v394; // [rsp-6BDCh] [rbp-6BECh] BYREF
  _DWORD v395[3]; // [rsp-6BD8h] [rbp-6BE8h] BYREF
  int v396; // [rsp-6BCCh] [rbp-6BDCh]
  int v397; // [rsp-6BC8h] [rbp-6BD8h]
  int v398; // [rsp-6BC4h] [rbp-6BD4h]
  int v399; // [rsp-6BC0h] [rbp-6BD0h]
  int v400; // [rsp-6BBCh] [rbp-6BCCh]
  int v401; // [rsp-6BB8h] [rbp-6BC8h]
  int v402; // [rsp-6BB4h] [rbp-6BC4h]
  int v403; // [rsp-6BB0h] [rbp-6BC0h]
  int v404; // [rsp-6BACh] [rbp-6BBCh]
  int v405; // [rsp-6BA8h] [rbp-6BB8h]
  int v406; // [rsp-6BA4h] [rbp-6BB4h]
  BOOL v407; // [rsp-6BA0h] [rbp-6BB0h]
  int v408; // [rsp-6B9Ch] [rbp-6BACh]
  BOOL v409; // [rsp-6B98h] [rbp-6BA8h]
  int v410; // [rsp-6B94h] [rbp-6BA4h]
  BOOL v411; // [rsp-6B90h] [rbp-6BA0h]
  BOOL v412; // [rsp-6B8Ch] [rbp-6B9Ch]
  int v413; // [rsp-6B88h] [rbp-6B98h]
  BOOL v414; // [rsp-6B84h] [rbp-6B94h]
  int v415; // [rsp-6B80h] [rbp-6B90h]
  int v416; // [rsp-6B7Ch] [rbp-6B8Ch]
  BOOL v417; // [rsp-6B78h] [rbp-6B88h]
  BOOL v418; // [rsp-6B74h] [rbp-6B84h]
  int v419; // [rsp-6B70h] [rbp-6B80h]
  __int64 v420; // [rsp-6B68h] [rbp-6B78h]
  __int64 (__fastcall *v421)(unsigned int *, _QWORD); // [rsp-6B60h] [rbp-6B70h]
  void (__fastcall *v422)(__int64); // [rsp-6B58h] [rbp-6B68h]
  __int64 v423; // [rsp-6B50h] [rbp-6B60h] BYREF
  __int64 v424; // [rsp-6B48h] [rbp-6B58h]
  __int64 v425; // [rsp-6B40h] [rbp-6B50h] BYREF
  __int64 v426; // [rsp-6B38h] [rbp-6B48h]
  __int64 i44; // [rsp-6B30h] [rbp-6B40h]
  __int64 v428; // [rsp-6B28h] [rbp-6B38h] BYREF
  __int64 v429; // [rsp-6B20h] [rbp-6B30h]
  __int64 n; // [rsp-6B18h] [rbp-6B28h]
  int v431; // [rsp-6B10h] [rbp-6B20h]
  int v432; // [rsp-6B0Ch] [rbp-6B1Ch]
  BOOL v433; // [rsp-6B08h] [rbp-6B18h]
  int v434; // [rsp-6B04h] [rbp-6B14h]
  int v435; // [rsp-6B00h] [rbp-6B10h]
  BOOL v436; // [rsp-6AFCh] [rbp-6B0Ch]
  unsigned int v437; // [rsp-6AF8h] [rbp-6B08h]
  int v438; // [rsp-6AF4h] [rbp-6B04h]
  BOOL v439; // [rsp-6AF0h] [rbp-6B00h]
  unsigned __int64 v440; // [rsp-6AE8h] [rbp-6AF8h] BYREF
  unsigned __int64 v441; // [rsp-6AD0h] [rbp-6AE0h]
  int v442; // [rsp-6AC8h] [rbp-6AD8h]
  int v443; // [rsp-6AC4h] [rbp-6AD4h]
  int v444; // [rsp-6AC0h] [rbp-6AD0h]
  char v445; // [rsp-6AB8h] [rbp-6AC8h]
  char v446; // [rsp-6AB7h] [rbp-6AC7h]
  unsigned int v447; // [rsp-6AB6h] [rbp-6AC6h]
  char v448; // [rsp-6AB0h] [rbp-6AC0h]
  char v449; // [rsp-6AAFh] [rbp-6ABFh]
  int v450; // [rsp-6AAEh] [rbp-6ABEh]
  char v451; // [rsp-6AA8h] [rbp-6AB8h]
  char v452; // [rsp-6AA7h] [rbp-6AB7h]
  int v453; // [rsp-6AA6h] [rbp-6AB6h]
  char v454; // [rsp-6AA0h] [rbp-6AB0h]
  char v455; // [rsp-6A9Fh] [rbp-6AAFh]
  int v456; // [rsp-6A9Eh] [rbp-6AAEh]
  char v457; // [rsp-6A98h] [rbp-6AA8h]
  char v458; // [rsp-6A97h] [rbp-6AA7h]
  int v459; // [rsp-6A96h] [rbp-6AA6h]
  char v460; // [rsp-6A90h] [rbp-6AA0h]
  char v461; // [rsp-6A8Fh] [rbp-6A9Fh]
  int v462; // [rsp-6A8Eh] [rbp-6A9Eh]
  char v463; // [rsp-6A88h] [rbp-6A98h]
  char v464; // [rsp-6A87h] [rbp-6A97h]
  int v465; // [rsp-6A86h] [rbp-6A96h]
  char v466; // [rsp-6A80h] [rbp-6A90h]
  char v467; // [rsp-6A7Fh] [rbp-6A8Fh]
  __int16 v468; // [rsp-6A7Eh] [rbp-6A8Eh]
  int v469; // [rsp-6A7Ch] [rbp-6A8Ch]
  __int64 v470; // [rsp-6A78h] [rbp-6A88h]
  char v471; // [rsp-6A70h] [rbp-6A80h]
  char v472; // [rsp-6A6Fh] [rbp-6A7Fh]
  __int16 v473; // [rsp-6A6Eh] [rbp-6A7Eh]
  int v474; // [rsp-6A6Ch] [rbp-6A7Ch]
  char v475; // [rsp-6A68h] [rbp-6A78h]
  char v476; // [rsp-6A67h] [rbp-6A77h]
  __int16 v477; // [rsp-6A66h] [rbp-6A76h]
  int v478; // [rsp-6A64h] [rbp-6A74h]
  char v479; // [rsp-6A60h] [rbp-6A70h]
  char v480; // [rsp-6A5Fh] [rbp-6A6Fh]
  __int16 v481; // [rsp-6A5Eh] [rbp-6A6Eh]
  int v482; // [rsp-6A5Ch] [rbp-6A6Ch]
  char v483; // [rsp-6A58h] [rbp-6A68h]
  char v484; // [rsp-6A57h] [rbp-6A67h]
  __int16 v485; // [rsp-6A56h] [rbp-6A66h]
  int v486; // [rsp-6A54h] [rbp-6A64h]
  __int64 v487; // [rsp-6A50h] [rbp-6A60h]
  __int64 v488; // [rsp-6A48h] [rbp-6A58h]
  unsigned __int64 v489; // [rsp-6A40h] [rbp-6A50h]
  __int64 v490; // [rsp-6A38h] [rbp-6A48h]
  __int64 v491; // [rsp-6A30h] [rbp-6A40h]
  __int64 v492; // [rsp-6A28h] [rbp-6A38h] BYREF
  unsigned int (__fastcall *v493)(__int64, _QWORD, _BYTE *, unsigned int *); // [rsp-6A20h] [rbp-6A30h]
  char v494; // [rsp-6A18h] [rbp-6A28h]
  char v495; // [rsp-6A17h] [rbp-6A27h]
  __int16 v496; // [rsp-6A16h] [rbp-6A26h]
  int v497; // [rsp-6A14h] [rbp-6A24h]
  char v498; // [rsp-6A10h] [rbp-6A20h]
  char v499; // [rsp-6A0Fh] [rbp-6A1Fh]
  __int16 v500; // [rsp-6A0Eh] [rbp-6A1Eh]
  int v501; // [rsp-6A0Ch] [rbp-6A1Ch]
  char v502; // [rsp-6A08h] [rbp-6A18h]
  char v503; // [rsp-6A07h] [rbp-6A17h]
  __int16 v504; // [rsp-6A06h] [rbp-6A16h]
  int v505; // [rsp-6A04h] [rbp-6A14h]
  unsigned int (__fastcall *v506)(_BYTE *, _QWORD, _DWORD *); // [rsp-6A00h] [rbp-6A10h]
  int (__fastcall *NtProtectVirtualMemory)(__int64, _BYTE **, __int64 *, __int64, unsigned int *); // [rsp-69F8h] [rbp-6A08h]
  char v508; // [rsp-69E8h] [rbp-69F8h]
  char v509; // [rsp-69E7h] [rbp-69F7h]
  __int16 v510; // [rsp-69E6h] [rbp-69F6h]
  int v511; // [rsp-69E4h] [rbp-69F4h]
  char v512; // [rsp-69E0h] [rbp-69F0h]
  char v513; // [rsp-69DFh] [rbp-69EFh]
  __int16 v514; // [rsp-69DEh] [rbp-69EEh]
  int v515; // [rsp-69DCh] [rbp-69ECh]
  __int64 v516; // [rsp-69D8h] [rbp-69E8h] BYREF
  __int64 v517; // [rsp-69D0h] [rbp-69E0h] BYREF
  __int64 v518; // [rsp-69C8h] [rbp-69D8h]
  char v519; // [rsp-69C0h] [rbp-69D0h]
  char v520; // [rsp-69BFh] [rbp-69CFh]
  __int16 v521; // [rsp-69BEh] [rbp-69CEh]
  int v522; // [rsp-69BCh] [rbp-69CCh]
  char v523; // [rsp-69B8h] [rbp-69C8h]
  char v524; // [rsp-69B7h] [rbp-69C7h]
  __int16 v525; // [rsp-69B6h] [rbp-69C6h]
  int v526; // [rsp-69B4h] [rbp-69C4h]
  char v527; // [rsp-69B0h] [rbp-69C0h]
  char v528; // [rsp-69AFh] [rbp-69BFh]
  __int16 v529; // [rsp-69AEh] [rbp-69BEh]
  int v530; // [rsp-69ACh] [rbp-69BCh]
  char v531; // [rsp-69A8h] [rbp-69B8h]
  char v532; // [rsp-69A7h] [rbp-69B7h]
  __int16 v533; // [rsp-69A6h] [rbp-69B6h]
  int v534; // [rsp-69A4h] [rbp-69B4h]
  unsigned int *v535; // [rsp-69A0h] [rbp-69B0h]
  char v536; // [rsp-6998h] [rbp-69A8h]
  char v537; // [rsp-6997h] [rbp-69A7h]
  __int16 v538; // [rsp-6996h] [rbp-69A6h]
  int v539; // [rsp-6994h] [rbp-69A4h]
  char v540; // [rsp-6990h] [rbp-69A0h]
  char v541; // [rsp-698Fh] [rbp-699Fh]
  __int16 v542; // [rsp-698Eh] [rbp-699Eh]
  int v543; // [rsp-698Ch] [rbp-699Ch]
  unsigned __int8 *v544; // [rsp-6988h] [rbp-6998h]
  __int64 (__fastcall *v545)(__int64, int *, __int64); // [rsp-6980h] [rbp-6990h]
  __int64 v546; // [rsp-6978h] [rbp-6988h]
  _WORD v547[2]; // [rsp-6968h] [rbp-6978h] BYREF
  int v548; // [rsp-6964h] [rbp-6974h]
  _BYTE v549[18]; // [rsp-6960h] [rbp-6970h] BYREF
  _BYTE v550[14]; // [rsp-694Eh] [rbp-695Eh] BYREF
  __int16 v551; // [rsp-6940h] [rbp-6950h]
  int v552; // [rsp-693Ch] [rbp-694Ch]
  _BYTE v553[29]; // [rsp-6938h] [rbp-6948h] BYREF
  _BYTE v554[3]; // [rsp-691Bh] [rbp-692Bh] BYREF
  __int16 v555; // [rsp-6918h] [rbp-6928h]
  int v556; // [rsp-6914h] [rbp-6924h]
  char v557; // [rsp-6910h] [rbp-6920h]
  char v558; // [rsp-690Fh] [rbp-691Fh]
  char v559; // [rsp-690Eh] [rbp-691Eh]
  char v560; // [rsp-690Dh] [rbp-691Dh]
  char v561; // [rsp-690Ch] [rbp-691Ch]
  char v562; // [rsp-690Bh] [rbp-691Bh]
  char v563; // [rsp-690Ah] [rbp-691Ah]
  char v564; // [rsp-6909h] [rbp-6919h]
  char v565; // [rsp-6908h] [rbp-6918h]
  char v566; // [rsp-6907h] [rbp-6917h]
  char v567; // [rsp-6906h] [rbp-6916h]
  char v568; // [rsp-6905h] [rbp-6915h]
  char v569; // [rsp-6904h] [rbp-6914h]
  char v570; // [rsp-6903h] [rbp-6913h]
  char v571; // [rsp-6902h] [rbp-6912h]
  char v572; // [rsp-6901h] [rbp-6911h]
  char v573; // [rsp-6900h] [rbp-6910h]
  char v574; // [rsp-68FFh] [rbp-690Fh]
  char v575; // [rsp-68FEh] [rbp-690Eh]
  char v576; // [rsp-68FDh] [rbp-690Dh]
  char v577; // [rsp-68FCh] [rbp-690Ch]
  char v578; // [rsp-68FBh] [rbp-690Bh]
  _BYTE v579[10]; // [rsp-68FAh] [rbp-690Ah] BYREF
  __int16 v580; // [rsp-68F0h] [rbp-6900h]
  int v581; // [rsp-68ECh] [rbp-68FCh]
  char v582; // [rsp-68E8h] [rbp-68F8h]
  char v583; // [rsp-68E7h] [rbp-68F7h]
  char v584; // [rsp-68E6h] [rbp-68F6h]
  char v585; // [rsp-68E5h] [rbp-68F5h]
  char v586[8]; // [rsp-68E4h] [rbp-68F4h] BYREF
  char v587[12]; // [rsp-68DCh] [rbp-68ECh] BYREF
  char v588[8]; // [rsp-68D0h] [rbp-68E0h] BYREF
  __int16 v589; // [rsp-68C8h] [rbp-68D8h]
  int v590; // [rsp-68C4h] [rbp-68D4h]
  char v591[15]; // [rsp-68C0h] [rbp-68D0h] BYREF
  _BYTE v592[17]; // [rsp-68B1h] [rbp-68C1h] BYREF
  __int16 v593; // [rsp-68A0h] [rbp-68B0h]
  int v594; // [rsp-689Ch] [rbp-68ACh]
  char v595; // [rsp-6898h] [rbp-68A8h]
  char v596; // [rsp-6897h] [rbp-68A7h]
  char v597; // [rsp-6896h] [rbp-68A6h]
  char v598; // [rsp-6895h] [rbp-68A5h]
  char v599; // [rsp-6894h] [rbp-68A4h]
  char v600; // [rsp-6893h] [rbp-68A3h]
  char v601; // [rsp-6892h] [rbp-68A2h]
  char v602; // [rsp-6891h] [rbp-68A1h]
  char v603; // [rsp-6890h] [rbp-68A0h]
  char v604; // [rsp-688Fh] [rbp-689Fh]
  char v605; // [rsp-688Eh] [rbp-689Eh]
  char v606; // [rsp-688Dh] [rbp-689Dh]
  char v607; // [rsp-688Ch] [rbp-689Ch]
  char v608; // [rsp-688Bh] [rbp-689Bh]
  char v609; // [rsp-688Ah] [rbp-689Ah]
  char v610; // [rsp-6889h] [rbp-6899h]
  char v611; // [rsp-6888h] [rbp-6898h]
  char v612; // [rsp-6887h] [rbp-6897h]
  char v613; // [rsp-6886h] [rbp-6896h]
  char v614; // [rsp-6885h] [rbp-6895h]
  char v615; // [rsp-6884h] [rbp-6894h]
  char v616; // [rsp-6883h] [rbp-6893h]
  char v617; // [rsp-6882h] [rbp-6892h]
  char v618; // [rsp-6881h] [rbp-6891h]
  char v619; // [rsp-6880h] [rbp-6890h]
  char v620; // [rsp-687Fh] [rbp-688Fh]
  char v621; // [rsp-687Eh] [rbp-688Eh]
  char v622; // [rsp-687Dh] [rbp-688Dh]
  char v623; // [rsp-687Ch] [rbp-688Ch]
  char v624; // [rsp-687Bh] [rbp-688Bh]
  char v625; // [rsp-687Ah] [rbp-688Ah]
  char v626; // [rsp-6879h] [rbp-6889h]
  __int16 v627; // [rsp-6878h] [rbp-6888h]
  int v628; // [rsp-6874h] [rbp-6884h]
  char v629[12]; // [rsp-6870h] [rbp-6880h] BYREF
  _BYTE v630[20]; // [rsp-6864h] [rbp-6874h] BYREF
  __int16 v631; // [rsp-6850h] [rbp-6860h]
  int v632; // [rsp-684Ch] [rbp-685Ch]
  char v633[16]; // [rsp-6848h] [rbp-6858h] BYREF
  _BYTE v634[16]; // [rsp-6838h] [rbp-6848h] BYREF
  __int16 v635; // [rsp-6828h] [rbp-6838h]
  int v636; // [rsp-6824h] [rbp-6834h]
  char v637; // [rsp-6820h] [rbp-6830h]
  char v638; // [rsp-681Fh] [rbp-682Fh]
  char v639; // [rsp-681Eh] [rbp-682Eh]
  char v640; // [rsp-681Dh] [rbp-682Dh]
  char v641; // [rsp-681Ch] [rbp-682Ch]
  char v642; // [rsp-681Bh] [rbp-682Bh]
  char v643; // [rsp-681Ah] [rbp-682Ah]
  char v644; // [rsp-6819h] [rbp-6829h]
  char v645; // [rsp-6818h] [rbp-6828h]
  char v646; // [rsp-6817h] [rbp-6827h]
  char v647; // [rsp-6816h] [rbp-6826h]
  char v648; // [rsp-6815h] [rbp-6825h]
  char v649; // [rsp-6814h] [rbp-6824h]
  char v650; // [rsp-6813h] [rbp-6823h]
  char v651; // [rsp-6812h] [rbp-6822h]
  char v652; // [rsp-6811h] [rbp-6821h]
  char v653; // [rsp-6810h] [rbp-6820h]
  char v654; // [rsp-680Fh] [rbp-681Fh]
  char v655; // [rsp-680Eh] [rbp-681Eh]
  char v656; // [rsp-680Dh] [rbp-681Dh]
  char v657; // [rsp-680Ch] [rbp-681Ch]
  char v658; // [rsp-680Bh] [rbp-681Bh]
  char v659; // [rsp-680Ah] [rbp-681Ah]
  char v660; // [rsp-6809h] [rbp-6819h]
  char v661; // [rsp-6808h] [rbp-6818h]
  char v662; // [rsp-6807h] [rbp-6817h]
  char v663; // [rsp-6806h] [rbp-6816h]
  char v664; // [rsp-6805h] [rbp-6815h]
  char v665; // [rsp-6804h] [rbp-6814h]
  char v666; // [rsp-6803h] [rbp-6813h]
  char v667; // [rsp-6802h] [rbp-6812h]
  char v668; // [rsp-6801h] [rbp-6811h]
  __int16 v669; // [rsp-6800h] [rbp-6810h]
  int v670; // [rsp-67FCh] [rbp-680Ch]
  char v671; // [rsp-67F8h] [rbp-6808h]
  char v672; // [rsp-67F7h] [rbp-6807h]
  char v673; // [rsp-67F6h] [rbp-6806h]
  char v674; // [rsp-67F5h] [rbp-6805h]
  char v675; // [rsp-67F4h] [rbp-6804h]
  char v676; // [rsp-67F3h] [rbp-6803h]
  char v677; // [rsp-67F2h] [rbp-6802h]
  char v678; // [rsp-67F1h] [rbp-6801h]
  char v679; // [rsp-67F0h] [rbp-6800h]
  char v680; // [rsp-67EFh] [rbp-67FFh]
  char v681; // [rsp-67EEh] [rbp-67FEh]
  char v682; // [rsp-67EDh] [rbp-67FDh]
  char v683; // [rsp-67ECh] [rbp-67FCh]
  char v684; // [rsp-67EBh] [rbp-67FBh]
  char v685; // [rsp-67EAh] [rbp-67FAh]
  char v686; // [rsp-67E9h] [rbp-67F9h]
  char v687; // [rsp-67E8h] [rbp-67F8h]
  char v688; // [rsp-67E7h] [rbp-67F7h]
  char v689; // [rsp-67E6h] [rbp-67F6h]
  char v690; // [rsp-67E5h] [rbp-67F5h]
  char v691; // [rsp-67E4h] [rbp-67F4h]
  char v692; // [rsp-67E3h] [rbp-67F3h]
  char v693; // [rsp-67E2h] [rbp-67F2h]
  char v694; // [rsp-67E1h] [rbp-67F1h]
  char v695; // [rsp-67E0h] [rbp-67F0h]
  char v696; // [rsp-67DFh] [rbp-67EFh]
  char v697; // [rsp-67DEh] [rbp-67EEh]
  char v698; // [rsp-67DDh] [rbp-67EDh]
  char v699; // [rsp-67DCh] [rbp-67ECh]
  char v700; // [rsp-67DBh] [rbp-67EBh]
  char v701; // [rsp-67DAh] [rbp-67EAh]
  char v702; // [rsp-67D9h] [rbp-67E9h]
  __int16 v703; // [rsp-67D8h] [rbp-67E8h]
  int v704; // [rsp-67D4h] [rbp-67E4h]
  char v705; // [rsp-67D0h] [rbp-67E0h]
  char v706; // [rsp-67CFh] [rbp-67DFh]
  char v707; // [rsp-67CEh] [rbp-67DEh]
  char v708; // [rsp-67CDh] [rbp-67DDh]
  char v709; // [rsp-67CCh] [rbp-67DCh]
  char v710; // [rsp-67CBh] [rbp-67DBh]
  char v711; // [rsp-67CAh] [rbp-67DAh]
  char v712; // [rsp-67C9h] [rbp-67D9h]
  char v713; // [rsp-67C8h] [rbp-67D8h]
  char v714; // [rsp-67C7h] [rbp-67D7h]
  char v715; // [rsp-67C6h] [rbp-67D6h]
  char v716; // [rsp-67C5h] [rbp-67D5h]
  char v717; // [rsp-67C4h] [rbp-67D4h]
  char v718; // [rsp-67C3h] [rbp-67D3h]
  char v719; // [rsp-67C2h] [rbp-67D2h]
  char v720; // [rsp-67C1h] [rbp-67D1h]
  _BYTE v721[16]; // [rsp-67C0h] [rbp-67D0h] BYREF
  __int16 v722; // [rsp-67B0h] [rbp-67C0h]
  int v723; // [rsp-67ACh] [rbp-67BCh]
  char v724; // [rsp-67A8h] [rbp-67B8h]
  char v725; // [rsp-67A7h] [rbp-67B7h]
  char v726; // [rsp-67A6h] [rbp-67B6h]
  char v727; // [rsp-67A5h] [rbp-67B5h]
  char v728; // [rsp-67A4h] [rbp-67B4h]
  char v729; // [rsp-67A3h] [rbp-67B3h]
  char v730; // [rsp-67A2h] [rbp-67B2h]
  char v731; // [rsp-67A1h] [rbp-67B1h]
  char v732; // [rsp-67A0h] [rbp-67B0h]
  char v733; // [rsp-679Fh] [rbp-67AFh]
  char v734; // [rsp-679Eh] [rbp-67AEh]
  char v735; // [rsp-679Dh] [rbp-67ADh]
  char v736; // [rsp-679Ch] [rbp-67ACh]
  char v737; // [rsp-679Bh] [rbp-67ABh]
  char v738; // [rsp-679Ah] [rbp-67AAh]
  char v739; // [rsp-6799h] [rbp-67A9h]
  char v740; // [rsp-6798h] [rbp-67A8h]
  char v741; // [rsp-6797h] [rbp-67A7h]
  char v742; // [rsp-6796h] [rbp-67A6h]
  char v743; // [rsp-6795h] [rbp-67A5h]
  _BYTE v744[12]; // [rsp-6794h] [rbp-67A4h] BYREF
  __int16 v745; // [rsp-6788h] [rbp-6798h]
  int v746; // [rsp-6784h] [rbp-6794h]
  char v747[14]; // [rsp-6780h] [rbp-6790h] BYREF
  _BYTE v748[18]; // [rsp-6772h] [rbp-6782h] BYREF
  __int16 v749; // [rsp-6760h] [rbp-6770h]
  int v750; // [rsp-675Ch] [rbp-676Ch]
  char v751; // [rsp-6758h] [rbp-6768h]
  char v752; // [rsp-6757h] [rbp-6767h]
  char v753; // [rsp-6756h] [rbp-6766h]
  char v754; // [rsp-6755h] [rbp-6765h]
  char v755; // [rsp-6754h] [rbp-6764h]
  char v756; // [rsp-6753h] [rbp-6763h]
  char v757; // [rsp-6752h] [rbp-6762h]
  char v758; // [rsp-6751h] [rbp-6761h]
  char v759; // [rsp-6750h] [rbp-6760h]
  char v760; // [rsp-674Fh] [rbp-675Fh]
  char v761; // [rsp-674Eh] [rbp-675Eh]
  char v762; // [rsp-674Dh] [rbp-675Dh]
  char v763; // [rsp-674Ch] [rbp-675Ch]
  char v764; // [rsp-674Bh] [rbp-675Bh]
  _BYTE v765[18]; // [rsp-674Ah] [rbp-675Ah] BYREF
  __int16 v766; // [rsp-6738h] [rbp-6748h]
  int v767; // [rsp-6734h] [rbp-6744h]
  char v768; // [rsp-6730h] [rbp-6740h]
  char v769; // [rsp-672Fh] [rbp-673Fh]
  char v770; // [rsp-672Eh] [rbp-673Eh]
  char v771; // [rsp-672Dh] [rbp-673Dh]
  char v772; // [rsp-672Ch] [rbp-673Ch]
  char v773; // [rsp-672Bh] [rbp-673Bh]
  char v774; // [rsp-672Ah] [rbp-673Ah]
  char v775; // [rsp-6729h] [rbp-6739h]
  char v776; // [rsp-6728h] [rbp-6738h]
  char v777; // [rsp-6727h] [rbp-6737h]
  char v778; // [rsp-6726h] [rbp-6736h]
  char v779; // [rsp-6725h] [rbp-6735h]
  char v780; // [rsp-6724h] [rbp-6734h]
  char v781; // [rsp-6723h] [rbp-6733h]
  char v782; // [rsp-6722h] [rbp-6732h]
  char v783; // [rsp-6721h] [rbp-6731h]
  char v784; // [rsp-6720h] [rbp-6730h]
  char v785; // [rsp-671Fh] [rbp-672Fh]
  char v786; // [rsp-671Eh] [rbp-672Eh]
  char v787; // [rsp-671Dh] [rbp-672Dh]
  char v788; // [rsp-671Ch] [rbp-672Ch]
  char v789; // [rsp-671Bh] [rbp-672Bh]
  char v790; // [rsp-671Ah] [rbp-672Ah]
  char v791; // [rsp-6719h] [rbp-6729h]
  char v792; // [rsp-6718h] [rbp-6728h]
  char v793; // [rsp-6717h] [rbp-6727h]
  char v794; // [rsp-6716h] [rbp-6726h]
  char v795; // [rsp-6715h] [rbp-6725h]
  char v796; // [rsp-6714h] [rbp-6724h]
  char v797; // [rsp-6713h] [rbp-6723h]
  char v798; // [rsp-6712h] [rbp-6722h]
  char v799; // [rsp-6711h] [rbp-6721h]
  __int16 v800; // [rsp-6710h] [rbp-6720h]
  int v801; // [rsp-670Ch] [rbp-671Ch]
  char v802; // [rsp-6708h] [rbp-6718h]
  char v803; // [rsp-6707h] [rbp-6717h]
  _BYTE v804[30]; // [rsp-6706h] [rbp-6716h] BYREF
  __int16 v805; // [rsp-66E8h] [rbp-66F8h]
  int v806; // [rsp-66E4h] [rbp-66F4h]
  char v807; // [rsp-66E0h] [rbp-66F0h]
  char v808; // [rsp-66DFh] [rbp-66EFh]
  _BYTE v809[30]; // [rsp-66DEh] [rbp-66EEh] BYREF
  __int16 v810; // [rsp-66C0h] [rbp-66D0h]
  int v811; // [rsp-66BCh] [rbp-66CCh]
  char v812; // [rsp-66B8h] [rbp-66C8h]
  char v813; // [rsp-66B7h] [rbp-66C7h]
  _BYTE v814[30]; // [rsp-66B6h] [rbp-66C6h] BYREF
  __int16 v815; // [rsp-6698h] [rbp-66A8h]
  int v816; // [rsp-6694h] [rbp-66A4h]
  char v817[25]; // [rsp-6690h] [rbp-66A0h] BYREF
  _BYTE v818[7]; // [rsp-6677h] [rbp-6687h] BYREF
  __int16 v819; // [rsp-6670h] [rbp-6680h]
  int v820; // [rsp-666Ch] [rbp-667Ch]
  char v821[10]; // [rsp-6668h] [rbp-6678h] BYREF
  _BYTE v822[22]; // [rsp-665Eh] [rbp-666Eh] BYREF
  __int16 v823; // [rsp-6648h] [rbp-6658h]
  int v824; // [rsp-6644h] [rbp-6654h]
  char v825[11]; // [rsp-6640h] [rbp-6650h] BYREF
  _BYTE v826[21]; // [rsp-6635h] [rbp-6645h] BYREF
  __int16 v827; // [rsp-6620h] [rbp-6630h]
  int v828; // [rsp-661Ch] [rbp-662Ch]
  char v829; // [rsp-6618h] [rbp-6628h]
  char v830; // [rsp-6617h] [rbp-6627h]
  char v831[30]; // [rsp-6616h] [rbp-6626h] BYREF
  __int16 v832; // [rsp-65F8h] [rbp-6608h]
  int v833; // [rsp-65F4h] [rbp-6604h]
  char v834; // [rsp-65F0h] [rbp-6600h]
  char v835; // [rsp-65EFh] [rbp-65FFh]
  char v836; // [rsp-65EEh] [rbp-65FEh]
  char v837; // [rsp-65EDh] [rbp-65FDh]
  char v838; // [rsp-65ECh] [rbp-65FCh]
  char v839; // [rsp-65EBh] [rbp-65FBh]
  char v840; // [rsp-65EAh] [rbp-65FAh]
  char v841; // [rsp-65E9h] [rbp-65F9h]
  char v842; // [rsp-65E8h] [rbp-65F8h]
  char v843[23]; // [rsp-65E7h] [rbp-65F7h] BYREF
  __int16 v844; // [rsp-65D0h] [rbp-65E0h]
  int v845; // [rsp-65CCh] [rbp-65DCh]
  char v846; // [rsp-65C8h] [rbp-65D8h]
  char v847; // [rsp-65C7h] [rbp-65D7h]
  char v848; // [rsp-65C6h] [rbp-65D6h]
  char v849; // [rsp-65C5h] [rbp-65D5h]
  char v850; // [rsp-65C4h] [rbp-65D4h]
  char v851; // [rsp-65C3h] [rbp-65D3h]
  char v852; // [rsp-65C2h] [rbp-65D2h]
  char v853; // [rsp-65C1h] [rbp-65D1h]
  char v854; // [rsp-65C0h] [rbp-65D0h]
  char v855; // [rsp-65BFh] [rbp-65CFh]
  char v856; // [rsp-65BEh] [rbp-65CEh]
  char v857; // [rsp-65BDh] [rbp-65CDh]
  char v858; // [rsp-65BCh] [rbp-65CCh]
  char v859; // [rsp-65BBh] [rbp-65CBh]
  char v860; // [rsp-65BAh] [rbp-65CAh]
  char v861; // [rsp-65B9h] [rbp-65C9h]
  char v862; // [rsp-65B8h] [rbp-65C8h]
  char v863[15]; // [rsp-65B7h] [rbp-65C7h] BYREF
  __int16 v864; // [rsp-65A8h] [rbp-65B8h]
  int v865; // [rsp-65A4h] [rbp-65B4h]
  char v866; // [rsp-65A0h] [rbp-65B0h]
  char v867; // [rsp-659Fh] [rbp-65AFh]
  char v868; // [rsp-659Eh] [rbp-65AEh]
  _BYTE v869[29]; // [rsp-659Dh] [rbp-65ADh] BYREF
  __int16 v870; // [rsp-6580h] [rbp-6590h]
  int v871; // [rsp-657Ch] [rbp-658Ch]
  char v872[4]; // [rsp-6578h] [rbp-6588h] BYREF
  char v873[4]; // [rsp-6574h] [rbp-6584h] BYREF
  char v874[12]; // [rsp-6570h] [rbp-6580h] BYREF
  char v875[12]; // [rsp-6564h] [rbp-6574h] BYREF
  __int16 v876; // [rsp-6558h] [rbp-6568h]
  int v877; // [rsp-6554h] [rbp-6564h]
  char v878; // [rsp-6550h] [rbp-6560h]
  char v879; // [rsp-654Fh] [rbp-655Fh]
  char v880; // [rsp-654Eh] [rbp-655Eh]
  char v881; // [rsp-654Dh] [rbp-655Dh]
  char v882; // [rsp-654Ch] [rbp-655Ch]
  char v883; // [rsp-654Bh] [rbp-655Bh]
  char v884; // [rsp-654Ah] [rbp-655Ah]
  char v885; // [rsp-6549h] [rbp-6559h]
  char v886; // [rsp-6548h] [rbp-6558h]
  char v887; // [rsp-6547h] [rbp-6557h]
  char v888; // [rsp-6546h] [rbp-6556h]
  char v889; // [rsp-6545h] [rbp-6555h]
  char v890; // [rsp-6544h] [rbp-6554h]
  char v891; // [rsp-6543h] [rbp-6553h]
  char v892; // [rsp-6542h] [rbp-6552h]
  char v893; // [rsp-6541h] [rbp-6551h]
  char v894; // [rsp-6540h] [rbp-6550h]
  char v895; // [rsp-653Fh] [rbp-654Fh]
  char v896; // [rsp-653Eh] [rbp-654Eh]
  char v897; // [rsp-653Dh] [rbp-654Dh]
  char v898; // [rsp-653Ch] [rbp-654Ch]
  char v899; // [rsp-653Bh] [rbp-654Bh]
  char v900; // [rsp-653Ah] [rbp-654Ah]
  char v901; // [rsp-6539h] [rbp-6549h]
  char v902; // [rsp-6538h] [rbp-6548h]
  char v903; // [rsp-6537h] [rbp-6547h]
  char v904; // [rsp-6536h] [rbp-6546h]
  char v905; // [rsp-6535h] [rbp-6545h]
  char v906; // [rsp-6534h] [rbp-6544h]
  char v907; // [rsp-6533h] [rbp-6543h]
  char v908; // [rsp-6532h] [rbp-6542h]
  char v909; // [rsp-6531h] [rbp-6541h]
  __int16 v910; // [rsp-6530h] [rbp-6540h]
  int v911; // [rsp-652Ch] [rbp-653Ch]
  _BYTE v912[32]; // [rsp-6528h] [rbp-6538h] BYREF
  __int64 v913; // [rsp-6508h] [rbp-6518h] BYREF
  unsigned __int16 v914; // [rsp-6500h] [rbp-6510h]
  __int16 v915; // [rsp-64FEh] [rbp-650Eh]
  __int64 *v916; // [rsp-64F8h] [rbp-6508h]
  _WORD v917[8]; // [rsp-64F0h] [rbp-6500h] BYREF
  _DWORD v918[6]; // [rsp-64E0h] [rbp-64F0h] BYREF
  _WORD v919[22]; // [rsp-64C8h] [rbp-64D8h] BYREF
  unsigned __int16 v920; // [rsp-649Ch] [rbp-64ACh]
  __int16 v921; // [rsp-649Ah] [rbp-64AAh]
  __int16 v922; // [rsp-6498h] [rbp-64A8h]
  __int16 v923; // [rsp-6496h] [rbp-64A6h]
  __int16 v924; // [rsp-6494h] [rbp-64A4h]
  __int16 v925; // [rsp-6492h] [rbp-64A2h]
  __int16 v926; // [rsp-6490h] [rbp-64A0h]
  __int16 v927; // [rsp-648Eh] [rbp-649Eh]
  __int16 v928; // [rsp-648Ch] [rbp-649Ch]
  __int16 v929; // [rsp-648Ah] [rbp-649Ah]
  __int16 v930; // [rsp-6488h] [rbp-6498h]
  __int16 v931; // [rsp-6486h] [rbp-6496h]
  __int16 v932; // [rsp-6484h] [rbp-6494h]
  __int16 v933; // [rsp-6482h] [rbp-6492h]
  __int16 v934; // [rsp-6480h] [rbp-6490h]
  __int16 v935; // [rsp-647Eh] [rbp-648Eh]
  __int16 v936; // [rsp-647Ch] [rbp-648Ch]
  __int16 v937; // [rsp-647Ah] [rbp-648Ah]
  __int16 v938; // [rsp-6478h] [rbp-6488h]
  __int16 v939; // [rsp-6476h] [rbp-6486h]
  __int16 v940; // [rsp-6474h] [rbp-6484h]
  __int16 v941; // [rsp-6472h] [rbp-6482h]
  __int16 v942; // [rsp-6470h] [rbp-6480h]
  __int16 v943; // [rsp-646Eh] [rbp-647Eh]
  __int16 v944; // [rsp-646Ch] [rbp-647Ch]
  __int16 v945; // [rsp-646Ah] [rbp-647Ah]
  __int16 v946; // [rsp-6468h] [rbp-6478h]
  __int16 v947; // [rsp-6466h] [rbp-6476h]
  __int16 v948; // [rsp-6464h] [rbp-6474h]
  __int16 v949; // [rsp-6462h] [rbp-6472h]
  __int16 v950; // [rsp-6460h] [rbp-6470h]
  __int16 v951; // [rsp-645Eh] [rbp-646Eh]
  __int16 v952; // [rsp-645Ch] [rbp-646Ch]
  __int16 v953; // [rsp-645Ah] [rbp-646Ah]
  int v954; // [rsp-6458h] [rbp-6468h] BYREF
  char v955[2]; // [rsp-6454h] [rbp-6464h] BYREF
  char v956[2]; // [rsp-6452h] [rbp-6462h] BYREF
  char v957[2]; // [rsp-6450h] [rbp-6460h] BYREF
  char v958[2]; // [rsp-644Eh] [rbp-645Eh] BYREF
  _BYTE v959[16]; // [rsp-644Ch] [rbp-645Ch] BYREF
  int v960; // [rsp-643Ch] [rbp-644Ch]
  char v961[2]; // [rsp-6438h] [rbp-6448h] BYREF
  char v962[2]; // [rsp-6436h] [rbp-6446h] BYREF
  _BYTE v963[20]; // [rsp-6434h] [rbp-6444h] BYREF
  int v964; // [rsp-6420h] [rbp-6430h]
  char v965; // [rsp-641Ch] [rbp-642Ch]
  char v966; // [rsp-641Bh] [rbp-642Bh]
  char v967; // [rsp-641Ah] [rbp-642Ah]
  char v968; // [rsp-6419h] [rbp-6429h]
  char v969; // [rsp-6418h] [rbp-6428h]
  char v970; // [rsp-6417h] [rbp-6427h]
  char v971; // [rsp-6416h] [rbp-6426h]
  char v972; // [rsp-6415h] [rbp-6425h]
  char v973; // [rsp-6414h] [rbp-6424h]
  char v974; // [rsp-6413h] [rbp-6423h]
  char v975; // [rsp-6412h] [rbp-6422h]
  char v976; // [rsp-6411h] [rbp-6421h]
  char v977; // [rsp-6410h] [rbp-6420h]
  char v978; // [rsp-640Fh] [rbp-641Fh]
  char v979; // [rsp-640Eh] [rbp-641Eh]
  char v980; // [rsp-640Dh] [rbp-641Dh]
  _BYTE v981[8]; // [rsp-640Ch] [rbp-641Ch] BYREF
  int v982; // [rsp-6404h] [rbp-6414h]
  char v983[4]; // [rsp-6400h] [rbp-6410h] BYREF
  char v984[2]; // [rsp-63FCh] [rbp-640Ch] BYREF
  char v985[4]; // [rsp-63FAh] [rbp-640Ah] BYREF
  char v986[2]; // [rsp-63F6h] [rbp-6406h] BYREF
  char v987[2]; // [rsp-63F4h] [rbp-6404h] BYREF
  char v988[2]; // [rsp-63F2h] [rbp-6402h] BYREF
  char v989[4]; // [rsp-63F0h] [rbp-6400h] BYREF
  char v990[4]; // [rsp-63ECh] [rbp-63FCh] BYREF
  int v991; // [rsp-63E8h] [rbp-63F8h]
  char v992; // [rsp-63E4h] [rbp-63F4h]
  char v993; // [rsp-63E3h] [rbp-63F3h]
  char v994; // [rsp-63E2h] [rbp-63F2h]
  char v995; // [rsp-63E1h] [rbp-63F1h]
  char v996; // [rsp-63E0h] [rbp-63F0h]
  char v997; // [rsp-63DFh] [rbp-63EFh]
  char v998; // [rsp-63DEh] [rbp-63EEh]
  char v999; // [rsp-63DDh] [rbp-63EDh]
  char v1000; // [rsp-63DCh] [rbp-63ECh]
  char v1001; // [rsp-63DBh] [rbp-63EBh]
  _BYTE v1002[14]; // [rsp-63DAh] [rbp-63EAh] BYREF
  int v1003; // [rsp-63CCh] [rbp-63DCh]
  char v1004; // [rsp-63C8h] [rbp-63D8h]
  char v1005; // [rsp-63C7h] [rbp-63D7h]
  char v1006; // [rsp-63C6h] [rbp-63D6h]
  char v1007; // [rsp-63C5h] [rbp-63D5h]
  char v1008; // [rsp-63C4h] [rbp-63D4h]
  char v1009; // [rsp-63C3h] [rbp-63D3h]
  char v1010; // [rsp-63C2h] [rbp-63D2h]
  char v1011; // [rsp-63C1h] [rbp-63D1h]
  _BYTE v1012[16]; // [rsp-63C0h] [rbp-63D0h] BYREF
  __int64 v1013; // [rsp-63A8h] [rbp-63B8h]
  __int64 v1014; // [rsp-63A0h] [rbp-63B0h]
  __int64 v1015; // [rsp-6398h] [rbp-63A8h] BYREF
  __int64 v1016; // [rsp-6390h] [rbp-63A0h]
  __int64 v1017; // [rsp-6388h] [rbp-6398h]
  _DWORD *v1018; // [rsp-6380h] [rbp-6390h]
  unsigned __int64 v1019; // [rsp-6378h] [rbp-6388h]
  __int64 v1020; // [rsp-6370h] [rbp-6380h]
  __int64 v1021; // [rsp-6368h] [rbp-6378h] BYREF
  __int64 v1022; // [rsp-6360h] [rbp-6370h]
  unsigned int (__fastcall *v1023)(__int64, __int64 *, __int64 *, char *, char *); // [rsp-6358h] [rbp-6368h]
  __int64 v1024; // [rsp-6350h] [rbp-6360h]
  __int64 v1025; // [rsp-6348h] [rbp-6358h]
  unsigned __int8 *i39; // [rsp-6340h] [rbp-6350h]
  unsigned __int8 *i43; // [rsp-6338h] [rbp-6348h]
  __int64 v1028; // [rsp-6330h] [rbp-6340h]
  __int64 (*v1029)(void); // [rsp-6328h] [rbp-6338h]
  __int64 v1030; // [rsp-6320h] [rbp-6330h]
  __int64 v1031; // [rsp-6318h] [rbp-6328h]
  __int64 v1032; // [rsp-6310h] [rbp-6320h]
  int v1033; // [rsp-6308h] [rbp-6318h] BYREF
  unsigned int v1034; // [rsp-6304h] [rbp-6314h]
  int v1035; // [rsp-6300h] [rbp-6310h]
  int v1036; // [rsp-62FCh] [rbp-630Ch] BYREF
  int v1038; // [rsp-62F4h] [rbp-6304h]
  int v1039; // [rsp-62F0h] [rbp-6300h]
  int v1040; // [rsp-62ECh] [rbp-62FCh] BYREF
  int v1041; // [rsp-62E8h] [rbp-62F8h] BYREF
  int v1042; // [rsp-62E4h] [rbp-62F4h]
  int v1043; // [rsp-62E0h] [rbp-62F0h] BYREF
  __int64 v1044; // [rsp-62D8h] [rbp-62E8h]
  _DWORD v1045[4]; // [rsp-62D0h] [rbp-62E0h] BYREF
  unsigned int v1046; // [rsp-62C0h] [rbp-62D0h]
  _QWORD v1048[3]; // [rsp-62B8h] [rbp-62C8h] BYREF
  __int64 v1049; // [rsp-62A0h] [rbp-62B0h]
  int v1050; // [rsp-6298h] [rbp-62A8h]
  int v1051; // [rsp-6294h] [rbp-62A4h]
  int v1052; // [rsp-6290h] [rbp-62A0h]
  char v1053; // [rsp-6288h] [rbp-6298h]
  char v1054; // [rsp-6287h] [rbp-6297h]
  unsigned __int8 v1055; // [rsp-6286h] [rbp-6296h]
  __int64 v1056; // [rsp-6285h] [rbp-6295h]
  int v1057; // [rsp-627Dh] [rbp-628Dh]
  int v1058; // [rsp-6279h] [rbp-6289h]
  _BYTE v1059[5]; // [rsp-6275h] [rbp-6285h] BYREF
  _DWORD v1060[2]; // [rsp-6260h] [rbp-6270h] BYREF
  _DWORD v1061[2]; // [rsp-6258h] [rbp-6268h] BYREF
  char v1062[24]; // [rsp-6250h] [rbp-6260h] BYREF
  unsigned int (__fastcall *v1063)(_QWORD, char *, __int64 *); // [rsp-6238h] [rbp-6248h]
  void (__fastcall *v1064)(__int64, _QWORD, int *, _QWORD, _QWORD, _QWORD, __int64); // [rsp-6230h] [rbp-6240h]
  __int64 v1065; // [rsp-6228h] [rbp-6238h] BYREF
  __int64 (__fastcall *v1066)(__int64); // [rsp-6220h] [rbp-6230h]
  void (__fastcall *v1067)(__int64, _DWORD *); // [rsp-6218h] [rbp-6228h]
  unsigned int (__fastcall *v1068)(__int64, int *); // [rsp-6210h] [rbp-6220h]
  __int64 v1069; // [rsp-6208h] [rbp-6218h]
  unsigned __int8 *v1070; // [rsp-6200h] [rbp-6210h]
  unsigned int (__fastcall *v1071)(__int64, __int64, __int64 *); // [rsp-61F8h] [rbp-6208h]
  unsigned int (__fastcall *v1072)(__int64, int *); // [rsp-61F0h] [rbp-6200h]
  __int64 v1073; // [rsp-61E8h] [rbp-61F8h] BYREF
  __int64 (*v1074)(void); // [rsp-61E0h] [rbp-61F0h]
  __int64 v1075; // [rsp-61D8h] [rbp-61E8h]
  __int64 (__fastcall *v1076)(char *, __int64, __int64, _QWORD, int, _DWORD, _QWORD); // [rsp-61D0h] [rbp-61E0h]
  __int64 v1077; // [rsp-61C8h] [rbp-61D8h]
  __int64 v1078; // [rsp-61C0h] [rbp-61D0h]
  unsigned int (__fastcall *v1079)(_BYTE *, _BYTE *, __int64); // [rsp-61B8h] [rbp-61C8h]
  unsigned __int8 *v1080; // [rsp-61B0h] [rbp-61C0h]
  unsigned __int8 *v1081; // [rsp-61A8h] [rbp-61B8h]
  void (__fastcall *v1082)(__int64 *, __int64 *, __int64 *); // [rsp-61A0h] [rbp-61B0h]
  __int64 (__fastcall *v1083)(char *); // [rsp-6198h] [rbp-61A8h]
  unsigned int (__fastcall *v1084)(char *, _QWORD, _BYTE *); // [rsp-6190h] [rbp-61A0h]
  void (__fastcall *v1085)(_BYTE *, unsigned __int64, __int64); // [rsp-6188h] [rbp-6198h]
  __int64 v1086; // [rsp-6180h] [rbp-6190h]
  __int64 v1087; // [rsp-6178h] [rbp-6188h]
  __int64 v1088; // [rsp-6170h] [rbp-6180h]
  __int64 v1089; // [rsp-6168h] [rbp-6178h]
  __int64 v1090; // [rsp-6160h] [rbp-6170h]
  unsigned int (__fastcall *v1091)(__int64, __int64 *, __int64 *, __int64 *, __int64 *); // [rsp-6158h] [rbp-6168h]
  __int64 v1092; // [rsp-6150h] [rbp-6160h]
  unsigned __int64 i53; // [rsp-6148h] [rbp-6158h]
  __int64 v1094; // [rsp-6140h] [rbp-6150h]
  __int64 v1095; // [rsp-6138h] [rbp-6148h] BYREF
  int (__fastcall *v1096)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-6130h] [rbp-6140h]
  __int64 (__fastcall *v1097)(__int64, _QWORD); // [rsp-6128h] [rbp-6138h]
  int (__fastcall *v1098)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-6120h] [rbp-6130h]
  unsigned __int64 i24; // [rsp-6118h] [rbp-6128h]
  _BYTE *v1100; // [rsp-6110h] [rbp-6120h] BYREF
  __int64 v1101; // [rsp-6108h] [rbp-6118h]
  __int64 (__fastcall *v1102)(__int64, _QWORD, _QWORD); // [rsp-6100h] [rbp-6110h]
  unsigned int (__fastcall *GetThreadTimes)(__int64, _FILETIME *, _FILETIME *, _FILETIME *, _FILETIME *); // [rsp-60F8h] [rbp-6108h]
  __int64 v1104; // [rsp-60F0h] [rbp-6100h]
  __int64 v1105; // [rsp-60E8h] [rbp-60F8h]
  __int64 v1106; // [rsp-60E0h] [rbp-60F0h]
  __int64 v1107; // [rsp-60D8h] [rbp-60E8h] BYREF
  _BYTE *v1108; // [rsp-60D0h] [rbp-60E0h] BYREF
  int v1109; // [rsp-60C8h] [rbp-60D8h] BYREF
  char v1110; // [rsp-60C4h] [rbp-60D4h]
  char v1111; // [rsp-60C3h] [rbp-60D3h]
  char v1112; // [rsp-60C2h] [rbp-60D2h]
  char v1113; // [rsp-60C1h] [rbp-60D1h]
  _BYTE v1114[25]; // [rsp-60C0h] [rbp-60D0h] BYREF
  char v1115; // [rsp-60A7h] [rbp-60B7h]
  unsigned __int64 v1116; // [rsp-60A6h] [rbp-60B6h]
  int v1117; // [rsp-609Eh] [rbp-60AEh]
  int v1118; // [rsp-609Ah] [rbp-60AAh]
  _BYTE v1119[12]; // [rsp-6093h] [rbp-60A3h]
  char v1120; // [rsp-6087h] [rbp-6097h]
  int v1121; // [rsp-6086h] [rbp-6096h] BYREF
  int v1122; // [rsp-6082h] [rbp-6092h]
  _DWORD v1123[93]; // [rsp-607Eh] [rbp-608Eh] BYREF
  char v1124; // [rsp-5F08h] [rbp-5F18h]
  _BYTE v1125[2]; // [rsp-5F07h] [rbp-5F17h]
  __int64 v1126; // [rsp-5F05h] [rbp-5F15h]
  __int64 v1127; // [rsp-5EFDh] [rbp-5F0Dh]
  char v1128; // [rsp-5EF0h] [rbp-5F00h]
  _BYTE v1129[2]; // [rsp-5EEFh] [rbp-5EFFh]
  __int64 v1130; // [rsp-5EEDh] [rbp-5EFDh]
  __int64 v1131; // [rsp-5EE5h] [rbp-5EF5h]
  char v1132; // [rsp-5ED8h] [rbp-5EE8h]
  _BYTE v1133[2]; // [rsp-5ED7h] [rbp-5EE7h]
  __int64 v1134; // [rsp-5ED5h] [rbp-5EE5h]
  __int64 v1135; // [rsp-5ECDh] [rbp-5EDDh]
  _QWORD v1136[3]; // [rsp-5EC0h] [rbp-5ED0h] BYREF
  unsigned __int64 v1137; // [rsp-5EA8h] [rbp-5EB8h]
  int v1138; // [rsp-5EA0h] [rbp-5EB0h]
  int v1139; // [rsp-5E9Ch] [rbp-5EACh]
  int v1140; // [rsp-5E98h] [rbp-5EA8h]
  char v1141; // [rsp-5E90h] [rbp-5EA0h]
  char v1142; // [rsp-5E8Fh] [rbp-5E9Fh]
  __int16 v1143; // [rsp-5E8Eh] [rbp-5E9Eh]
  int v1144; // [rsp-5E8Ch] [rbp-5E9Ch]
  _BYTE v1145[17]; // [rsp-5E88h] [rbp-5E98h] BYREF
  char v1146; // [rsp-5E77h] [rbp-5E87h]
  __int16 v1147; // [rsp-5E76h] [rbp-5E86h]
  int v1148; // [rsp-5E74h] [rbp-5E84h]
  __int64 v1149; // [rsp-5E70h] [rbp-5E80h]
  __int64 v1150; // [rsp-5E68h] [rbp-5E78h]
  char v1151; // [rsp-5E60h] [rbp-5E70h]
  char v1152; // [rsp-5E5Fh] [rbp-5E6Fh]
  __int16 v1153; // [rsp-5E5Eh] [rbp-5E6Eh]
  int v1154; // [rsp-5E5Ch] [rbp-5E6Ch]
  unsigned __int8 v1155; // [rsp-5E58h] [rbp-5E68h] BYREF
  __int64 v1156; // [rsp-5E48h] [rbp-5E58h] BYREF
  unsigned __int16 v1157; // [rsp-5E40h] [rbp-5E50h]
  __int16 v1158; // [rsp-5E3Eh] [rbp-5E4Eh]
  __int64 *v1159; // [rsp-5E38h] [rbp-5E48h]
  __int64 v1160; // [rsp-5E30h] [rbp-5E40h] BYREF
  unsigned __int16 v1161; // [rsp-5E28h] [rbp-5E38h]
  __int16 v1162; // [rsp-5E26h] [rbp-5E36h]
  __int64 *v1163; // [rsp-5E20h] [rbp-5E30h]
  _QWORD v1164[3]; // [rsp-5E18h] [rbp-5E28h] BYREF
  __int64 v1165; // [rsp-5E00h] [rbp-5E10h]
  int v1166; // [rsp-5DF8h] [rbp-5E08h]
  int v1167; // [rsp-5DF4h] [rbp-5E04h]
  int v1168; // [rsp-5DF0h] [rbp-5E00h]
  char v1169; // [rsp-5DE8h] [rbp-5DF8h]
  char v1170; // [rsp-5DE7h] [rbp-5DF7h]
  __int16 v1171; // [rsp-5DE6h] [rbp-5DF6h]
  __int64 v1172; // [rsp-5DE4h] [rbp-5DF4h]
  unsigned __int64 v1173; // [rsp-5DDCh] [rbp-5DECh]
  int v1174; // [rsp-5DD4h] [rbp-5DE4h]
  int v1175; // [rsp-5DD0h] [rbp-5DE0h]
  char v1176; // [rsp-5DC8h] [rbp-5DD8h]
  char v1177; // [rsp-5DC7h] [rbp-5DD7h]
  __int16 v1178; // [rsp-5DC6h] [rbp-5DD6h]
  __int64 v1179; // [rsp-5DC4h] [rbp-5DD4h]
  __int64 v1180; // [rsp-5DBCh] [rbp-5DCCh]
  int v1181; // [rsp-5DB4h] [rbp-5DC4h]
  int v1182; // [rsp-5DB0h] [rbp-5DC0h]
  char v1183; // [rsp-5DA8h] [rbp-5DB8h]
  char v1184; // [rsp-5DA7h] [rbp-5DB7h]
  __int16 v1185; // [rsp-5DA6h] [rbp-5DB6h]
  __int64 v1186; // [rsp-5DA4h] [rbp-5DB4h]
  __int64 v1187; // [rsp-5D9Ch] [rbp-5DACh]
  int v1188; // [rsp-5D94h] [rbp-5DA4h]
  int v1189; // [rsp-5D90h] [rbp-5DA0h]
  char v1190; // [rsp-5D88h] [rbp-5D98h]
  char v1191; // [rsp-5D87h] [rbp-5D97h]
  __int16 v1192; // [rsp-5D86h] [rbp-5D96h]
  __int64 v1193; // [rsp-5D84h] [rbp-5D94h]
  __int64 v1194; // [rsp-5D7Ch] [rbp-5D8Ch]
  int v1195; // [rsp-5D74h] [rbp-5D84h]
  int v1196; // [rsp-5D70h] [rbp-5D80h]
  char v1197; // [rsp-5D68h] [rbp-5D78h]
  char v1198; // [rsp-5D67h] [rbp-5D77h]
  __int16 v1199; // [rsp-5D66h] [rbp-5D76h]
  __int64 v1200; // [rsp-5D64h] [rbp-5D74h]
  __int64 v1201; // [rsp-5D5Ch] [rbp-5D6Ch]
  unsigned int v1202; // [rsp-5D54h] [rbp-5D64h]
  unsigned int v1203; // [rsp-5D50h] [rbp-5D60h]
  char v1204; // [rsp-5D48h] [rbp-5D58h]
  char v1205; // [rsp-5D47h] [rbp-5D57h]
  __int16 v1206; // [rsp-5D46h] [rbp-5D56h]
  __int64 v1207; // [rsp-5D44h] [rbp-5D54h]
  __int64 v1208; // [rsp-5D3Ch] [rbp-5D4Ch]
  int v1209; // [rsp-5D34h] [rbp-5D44h]
  int v1210; // [rsp-5D30h] [rbp-5D40h]
  char v1211; // [rsp-5D28h] [rbp-5D38h]
  char v1212; // [rsp-5D27h] [rbp-5D37h]
  __int16 v1213; // [rsp-5D26h] [rbp-5D36h]
  __int64 v1214; // [rsp-5D24h] [rbp-5D34h]
  __int64 v1215; // [rsp-5D1Ch] [rbp-5D2Ch]
  int v1216; // [rsp-5D14h] [rbp-5D24h]
  int v1217; // [rsp-5D10h] [rbp-5D20h]
  char v1218; // [rsp-5D08h] [rbp-5D18h]
  char v1219; // [rsp-5D07h] [rbp-5D17h]
  __int16 v1220; // [rsp-5D06h] [rbp-5D16h]
  __int64 v1221; // [rsp-5D04h] [rbp-5D14h]
  __int64 v1222; // [rsp-5CFCh] [rbp-5D0Ch]
  int v1223; // [rsp-5CF4h] [rbp-5D04h]
  int v1224; // [rsp-5CF0h] [rbp-5D00h]
  char v1225; // [rsp-5CE8h] [rbp-5CF8h]
  char v1226; // [rsp-5CE7h] [rbp-5CF7h]
  __int16 v1227; // [rsp-5CE6h] [rbp-5CF6h]
  __int64 v1228; // [rsp-5CE4h] [rbp-5CF4h]
  __int64 v1229; // [rsp-5CDCh] [rbp-5CECh]
  int v1230; // [rsp-5CD4h] [rbp-5CE4h]
  int v1231; // [rsp-5CD0h] [rbp-5CE0h]
  char v1232; // [rsp-5CC8h] [rbp-5CD8h]
  char v1233; // [rsp-5CC7h] [rbp-5CD7h]
  __int16 v1234; // [rsp-5CC6h] [rbp-5CD6h]
  unsigned __int64 v1235; // [rsp-5CC4h] [rbp-5CD4h]
  unsigned __int64 v1236; // [rsp-5CBCh] [rbp-5CCCh]
  int v1237; // [rsp-5CB4h] [rbp-5CC4h]
  int v1238; // [rsp-5CB0h] [rbp-5CC0h]
  char v1239; // [rsp-5CA8h] [rbp-5CB8h]
  _BYTE v1240[2]; // [rsp-5CA7h] [rbp-5CB7h]
  __int64 *v1241; // [rsp-5CA5h] [rbp-5CB5h]
  __int64 v1242; // [rsp-5C9Dh] [rbp-5CADh]
  __int64 v1243; // [rsp-5C95h] [rbp-5CA5h]
  __int64 v1244; // [rsp-5C8Dh] [rbp-5C9Dh]
  __int64 v1245; // [rsp-5C85h] [rbp-5C95h]
  __int64 v1246; // [rsp-5C7Dh] [rbp-5C8Dh]
  __int64 v1247; // [rsp-5C75h] [rbp-5C85h]
  int v1248; // [rsp-5C6Dh] [rbp-5C7Dh]
  int v1249; // [rsp-5C69h] [rbp-5C79h]
  PROCESSENTRY32 v1250; // [rsp-5C58h] [rbp-5C68h] BYREF
  __int64 (__fastcall *v1251)(__int64 *, __int64, int *, _BYTE *, __int64, int); // [rsp-5B28h] [rbp-5B38h]
  int (__fastcall *v1252)(__int64, _BYTE *, _QWORD *, __int64, int); // [rsp-5B20h] [rbp-5B30h]
  void (__fastcall *v1253)(__int64 *); // [rsp-5B18h] [rbp-5B28h]
  __int64 (*v1254)(void); // [rsp-5B10h] [rbp-5B20h]
  __int64 v1255; // [rsp-5B08h] [rbp-5B18h] BYREF
  __int64 v1256; // [rsp-5B00h] [rbp-5B10h]
  void (__fastcall *v1257)(__int64); // [rsp-5AF8h] [rbp-5B08h]
  unsigned int (__fastcall *v1258)(__int64, PROCESSENTRY32 *); // [rsp-5AF0h] [rbp-5B00h]
  int *v1259; // [rsp-5AE8h] [rbp-5AF8h]
  int *v1260; // [rsp-5AE0h] [rbp-5AF0h]
  unsigned int (__fastcall *v1261)(__int64, __int64 *, __int64 *, __int64 *, __int64 *); // [rsp-5AD8h] [rbp-5AE8h]
  unsigned int (__fastcall *v1262)(__int64, int *); // [rsp-5AD0h] [rbp-5AE0h]
  __int64 v1263; // [rsp-5AC8h] [rbp-5AD8h] BYREF
  __int64 (__fastcall *v1264)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-5AC0h] [rbp-5AD0h]
  __int64 v1265; // [rsp-5AB8h] [rbp-5AC8h] BYREF
  unsigned int (__fastcall *v1266)(__int64, MODULEENTRY32 *); // [rsp-5AB0h] [rbp-5AC0h]
  unsigned int (__fastcall *v1267)(__int64, MODULEENTRY32 *); // [rsp-5AA8h] [rbp-5AB8h]
  __int64 (__fastcall *v1268)(__int64, _QWORD, _QWORD); // [rsp-5AA0h] [rbp-5AB0h]
  __int64 (__fastcall *v1269)(__int64); // [rsp-5A98h] [rbp-5AA8h]
  void (__fastcall *v1270)(__int64); // [rsp-5A90h] [rbp-5AA0h]
  unsigned int (__fastcall *GetThreadContext)(__int64, _CONTEXT *); // [rsp-5A88h] [rbp-5A98h]
  unsigned int (__fastcall *v1272)(__int64, PROCESSENTRY32 *); // [rsp-5A80h] [rbp-5A90h]
  unsigned int (__fastcall *v1273)(_DWORD *, __int64, unsigned int *); // [rsp-5A78h] [rbp-5A88h]
  _BYTE *v1274; // [rsp-5A70h] [rbp-5A80h]
  __int64 v1275; // [rsp-5A68h] [rbp-5A78h]
  __int64 v1276; // [rsp-5A60h] [rbp-5A70h]
  __int64 v1277; // [rsp-5A58h] [rbp-5A68h] BYREF
  _QWORD v1278[3]; // [rsp-5A50h] [rbp-5A60h] BYREF
  __int64 (__fastcall *v1279)(__int64, _QWORD, _QWORD); // [rsp-5A38h] [rbp-5A48h]
  int (__fastcall *v1280)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-5A30h] [rbp-5A40h]
  __int64 v1281; // [rsp-5A28h] [rbp-5A38h] BYREF
  __int64 v1282; // [rsp-5A20h] [rbp-5A30h] BYREF
  __int64 v1283; // [rsp-5A18h] [rbp-5A28h] BYREF
  int v1284; // [rsp-5A10h] [rbp-5A20h]
  __int64 v1285; // [rsp-5A08h] [rbp-5A18h] BYREF
  __int64 v1286; // [rsp-5A00h] [rbp-5A10h] BYREF
  __int64 (__fastcall *v1287)(__int64, _BYTE *); // [rsp-59F8h] [rbp-5A08h]
  void (__fastcall *v1288)(__int64); // [rsp-59F0h] [rbp-5A00h]
  __int64 v1289; // [rsp-59E8h] [rbp-59F8h]
  __int64 v1290; // [rsp-59E0h] [rbp-59F0h] BYREF
  int v1291; // [rsp-59D8h] [rbp-59E8h] BYREF
  __int64 v1292; // [rsp-59D4h] [rbp-59E4h]
  int v1293; // [rsp-59CCh] [rbp-59DCh]
  _WORD v1294[4]; // [rsp-59C8h] [rbp-59D8h] BYREF
  _WORD *v1295; // [rsp-59C0h] [rbp-59D0h]
  _BYTE v1296[16]; // [rsp-59B8h] [rbp-59C8h] BYREF
  __int64 (__fastcall *v1297)(_QWORD, _QWORD, char *, _QWORD, __int64, __int64); // [rsp-59A8h] [rbp-59B8h]
  void (__fastcall *v1298)(__int64, _DWORD *); // [rsp-59A0h] [rbp-59B0h]
  void (__fastcall *v1299)(__int64, unsigned int *); // [rsp-5998h] [rbp-59A8h]
  __int64 (__fastcall *v1300)(__int64, _BYTE *, __int64); // [rsp-5990h] [rbp-59A0h]
  __int64 (__fastcall *v1301)(__int64, _BYTE *, __int64); // [rsp-5988h] [rbp-5998h]
  void (__fastcall *v1302)(__int64, _DWORD *); // [rsp-5980h] [rbp-5990h]
  __int64 v1303; // [rsp-5978h] [rbp-5988h]
  __int64 v1304; // [rsp-5970h] [rbp-5980h]
  __int64 v1305; // [rsp-5968h] [rbp-5978h]
  char v1306; // [rsp-5960h] [rbp-5970h]
  char v1307; // [rsp-595Fh] [rbp-596Fh]
  __int16 v1308; // [rsp-595Eh] [rbp-596Eh]
  __int64 v1309; // [rsp-595Ch] [rbp-596Ch]
  __int64 v1310; // [rsp-5954h] [rbp-5964h]
  __int64 v1311; // [rsp-594Ch] [rbp-595Ch]
  __int64 v1312; // [rsp-5944h] [rbp-5954h]
  int v1313; // [rsp-593Ch] [rbp-594Ch]
  __int64 v1314; // [rsp-5938h] [rbp-5948h]
  int v1315; // [rsp-5930h] [rbp-5940h]
  __int64 v1316; // [rsp-592Ch] [rbp-593Ch]
  unsigned int (__fastcall *v1317)(__int64, _QWORD, __int64, __int64 *, __int64, _DWORD, __int64); // [rsp-5920h] [rbp-5930h]
  __int64 v1318; // [rsp-5918h] [rbp-5928h]
  __int64 (__fastcall *v1319)(__int64, __int64, unsigned __int16 *, __int64, _QWORD); // [rsp-5910h] [rbp-5920h]
  unsigned int (__fastcall *v1320)(__int64, _WORD *, _QWORD); // [rsp-5908h] [rbp-5918h]
  __int64 (__fastcall *v1321)(__int64); // [rsp-5900h] [rbp-5910h]
  __int64 v1322; // [rsp-58F8h] [rbp-5908h]
  _DWORD v1323[12]; // [rsp-58F0h] [rbp-5900h] BYREF
  char v1324; // [rsp-58C0h] [rbp-58D0h]
  char v1325; // [rsp-58BFh] [rbp-58CFh]
  __int64 v1326; // [rsp-58BEh] [rbp-58CEh]
  int v1327; // [rsp-58B6h] [rbp-58C6h]
  int v1328; // [rsp-58B2h] [rbp-58C2h]
  _BYTE v1329[17]; // [rsp-5880h] [rbp-5890h] BYREF
  char v1330; // [rsp-586Fh] [rbp-587Fh]
  __int16 v1331; // [rsp-586Eh] [rbp-587Eh]
  int v1332; // [rsp-586Ch] [rbp-587Ch]
  __int16 v1333; // [rsp-5868h] [rbp-5878h] BYREF
  _QWORD v1334[4]; // [rsp-5848h] [rbp-5858h] BYREF
  int v1335; // [rsp-5828h] [rbp-5838h]
  int v1336; // [rsp-5820h] [rbp-5830h] BYREF
  __int64 v1337; // [rsp-5818h] [rbp-5828h]
  _WORD *v1338; // [rsp-5810h] [rbp-5820h]
  int v1339; // [rsp-5808h] [rbp-5818h]
  __int64 v1340; // [rsp-5800h] [rbp-5810h]
  __int64 v1341; // [rsp-57F8h] [rbp-5808h]
  __int64 v1342; // [rsp-57F0h] [rbp-5800h] BYREF
  __int64 v1343; // [rsp-57E8h] [rbp-57F8h] BYREF
  __int64 v1344; // [rsp-57E0h] [rbp-57F0h] BYREF
  __int64 v1345; // [rsp-57D8h] [rbp-57E8h] BYREF
  __int64 v1346; // [rsp-57D0h] [rbp-57E0h] BYREF
  __int64 v1347; // [rsp-57C8h] [rbp-57D8h] BYREF
  __int64 v1348; // [rsp-57C0h] [rbp-57D0h] BYREF
  _BYTE v1349[16]; // [rsp-57B8h] [rbp-57C8h] BYREF
  _BYTE v1350[32]; // [rsp-57A8h] [rbp-57B8h] BYREF
  _DWORD v1351[4]; // [rsp-5788h] [rbp-5798h]
  char v1352; // [rsp-5778h] [rbp-5788h]
  char v1353; // [rsp-5777h] [rbp-5787h]
  _BYTE v1354[238]; // [rsp-5776h] [rbp-5786h] BYREF
  _BYTE v1355[6]; // [rsp-5688h] [rbp-5698h] BYREF
  _DWORD v1356[54]; // [rsp-5682h] [rbp-5692h]
  _DWORD v1357[9]; // [rsp-55A8h] [rbp-55B8h] BYREF
  char v1358; // [rsp-5584h] [rbp-5594h]
  _QWORD v1359[6]; // [rsp-5578h] [rbp-5588h] BYREF
  _DWORD v1360[10]; // [rsp-5548h] [rbp-5558h] BYREF
  _DWORD v1361[10]; // [rsp-5520h] [rbp-5530h] BYREF
  _DWORD v1362[10]; // [rsp-54F8h] [rbp-5508h] BYREF
  _DWORD v1363[10]; // [rsp-54D0h] [rbp-54E0h] BYREF
  MODULEENTRY32 v1364; // [rsp-54A8h] [rbp-54B8h] BYREF
  __int64 v1365; // [rsp-5268h] [rbp-5278h] BYREF
  char v1366; // [rsp-5230h] [rbp-5240h]
  __int64 v1367; // [rsp-5228h] [rbp-5238h] BYREF
  char v1368; // [rsp-51F0h] [rbp-5200h]
  _BYTE v1369[128]; // [rsp-51E8h] [rbp-51F8h] BYREF
  _BYTE v1370[288]; // [rsp-5168h] [rbp-5178h] BYREF
  _WORD v1371[128]; // [rsp-5048h] [rbp-5058h] BYREF
  _DWORD v1372[2]; // [rsp-4F48h] [rbp-4F58h] BYREF
  char v1373; // [rsp-4F40h] [rbp-4F50h]
  unsigned int v1374; // [rsp-4F3Fh] [rbp-4F4Fh]
  unsigned __int16 v1375; // [rsp-4F3Ah] [rbp-4F4Ah]
  __int16 v1376; // [rsp-4F34h] [rbp-4F44h]
  int v1377; // [rsp-4F2Eh] [rbp-4F3Eh]
  _BYTE v1378[256]; // [rsp-4B18h] [rbp-4B28h] BYREF
  _BYTE v1379[256]; // [rsp-4A18h] [rbp-4A28h] BYREF
  _DWORD thread_stack[128]; // [rsp-4918h] [rbp-4928h] BYREF
  _WORD v1381[256]; // [rsp-4718h] [rbp-4728h] BYREF
  _CONTEXT v1382; // [rsp-4518h] [rbp-4528h] BYREF
  _BYTE v1383[512]; // [rsp-4048h] [rbp-4058h] BYREF
  unsigned __int16 v1384; // [rsp-3E48h] [rbp-3E58h] BYREF
  __int64 v1385; // [rsp-3E40h] [rbp-3E50h]
  _WORD v1386[2048]; // [rsp-3A48h] [rbp-3A58h] BYREF
  __int64 v1387; // [rsp-2A48h] [rbp-2A58h] BYREF
  __int64 v1388; // [rsp-2848h] [rbp-2858h] BYREF
  _DWORD v1389[400]; // [rsp-2648h] [rbp-2658h] BYREF
  _BYTE v1390[4096]; // [rsp-2008h] [rbp-2018h] BYREF
  _BYTE v1391[4120]; // [rsp-1008h] [rbp-1018h] BYREF
  int key; // [rsp+18h] [rbp+8h]
  __int64 report; // [rsp+20h] [rbp+10h]
  __int64 (__fastcall *GetModuleHandleA)(char *); // [rsp+28h] [rbp+18h]
  __int64 (__fastcall *GetProcAddress)(__int64, char *); // [rsp+30h] [rbp+20h]

  v5 = alloca(sub_1185D());
  strcpy(v241, "KERNEL32.dll");
  v75 = GetModuleHandleA(v241);
  v114 = 1;
  strcpy(v322, "BEClient_x64.dll");
  v1013 = GetModuleHandleA(v322);
  if ( v1013 && *(_DWORD *)(v1013 + *(int *)(v1013 + 60) + 8) >= 0x5D7AA2AFu )
    v85 = a5;
  else
    v85 = &v114;
  strcpy(v284, "GetTickCount");
  v1074 = (__int64 (*)(void))GetProcAddress(v75, v284);
  strcpy(v278, "CloseHandle");
  v82 = (void (__fastcall *)(__int64))GetProcAddress(v75, v278);
  strcpy(v321, "OpenProcessToken");
  v1071 = (unsigned int (__fastcall *)(__int64, __int64, __int64 *))GetProcAddress(v75, v321);
  if ( v1071 && v1071(-1i64, 32i64, &v1065) )
  {
    strcpy(v244, "advapi32.dll");
    strcpy(v339, "LookupPrivilegeValueA");
    v6 = GetModuleHandleA(v244);
    v1063 = (unsigned int (__fastcall *)(_QWORD, char *, __int64 *))GetProcAddress(v6, v339);
    if ( v1063 )
    {
      strcpy(v320, "SeDebugPrivilege");
      if ( v1063(0i64, v320, &v1290) )
      {
        v1291 = 1;
        v1292 = v1290;
        v1293 = 2;
        strcpy(v338, "AdjustTokenPrivileges");
        v7 = GetModuleHandleA(v244);
        v1064 = (void (__fastcall *)(__int64, _QWORD, int *, _QWORD, _QWORD, _QWORD, __int64))GetProcAddress(v7, v338);
        if ( v1064 )
          v1064(v1065, 0i64, &v1291, 0i64, 0i64, 0i64, a4);
      }
    }
    v82(v1065);
  }
  strcpy(v263, "ntdll.dll");
  v135 = GetModuleHandleA(v263);
  strcpy(v337, "NtQueryVirtualMemory");
  NtQueryVirtualMemory = (unsigned __int8 *)GetProcAddress(v135, v337);
  strcpy(v340, "NtProtectVirtualMemory");
  NtProtectVirtualMemory = (int (__fastcall *)(__int64, _BYTE **, __int64 *, __int64, unsigned int *))GetProcAddress(v135, v340);
  strcpy(v283, "IsBadReadPtr");
  v8 = GetModuleHandleA(v241);
  v429 = GetProcAddress(v8, v283);
  v1044 = ~v429;
  strcpy(v332, "NtReadVirtualMemory");
  NtReadVirtualMemory = (unsigned __int8 *)GetProcAddress(v135, v332);
  strcpy(v141, "msvcrt.dll");
  strcpy(v248, "memcpy");
  v9 = GetModuleHandleA(v141);
  v1085 = (void (__fastcall *)(_BYTE *, unsigned __int64, __int64))GetProcAddress(v9, v248);
  strcpy(v249, "memcmp");
  v10 = GetModuleHandleA(v141);
  v1079 = (unsigned int (__fastcall *)(_BYTE *, _BYTE *, __int64))GetProcAddress(v10, v249);
  strcpy(v333, "GetCurrentProcessId");
  v134 = (unsigned int (*)(void))GetProcAddress(v75, v333);
  strcpy(v277, "OpenProcess");
  OpenProcess = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))GetProcAddress(v75, v277);
  v13 = ((__int64 (__fastcall *)(__int64, __int64))v134)(v12, v11);
  v137 = OpenProcess(1048i64, 0i64, v13);
  strcpy(v243, "Sleep");
  v422 = (void (__fastcall *)(__int64))GetProcAddress(v75, v243);
  strcpy(v246, "malloc");
  v14 = GetModuleHandleA(v141);
  v1066 = (__int64 (__fastcall *)(__int64))GetProcAddress(v14, v246);
  strcpy(v251, "realloc");
  v15 = GetModuleHandleA(v141);
  v421 = (__int64 (__fastcall *)(unsigned int *, _QWORD))GetProcAddress(v15, v251);
  strcpy(v242, "free");
  v16 = GetModuleHandleA(v141);
  v361 = (void (__fastcall *)(unsigned int *))GetProcAddress(v16, v242);
  strcpy(v348, "NtQuerySystemInformation");
  v233 = (__int64 (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))GetProcAddress(v135, v348);
  strcpy(v113, "USER32.dll");
  strcpy(v293, "GetTopWindow");
  v17 = GetModuleHandleA(v113);
  v1070 = (unsigned __int8 *)GetProcAddress(v17, v293);
  strcpy(v264, "GetWindow");
  v18 = GetModuleHandleA(v113);
  v235 = (__int64 (__fastcall *)(__int64, __int64))GetProcAddress(v18, v264);
  strcpy(v297, "FindWindowExA");
  v19 = GetModuleHandleA(v113);
  v1297 = (__int64 (__fastcall *)(_QWORD, _QWORD, char *, _QWORD, __int64, __int64))GetProcAddress(v19, v297);
  strcpy(v347, "GetWindowThreadProcessId");
  v20 = GetModuleHandleA(v113);
  v1299 = (void (__fastcall *)(__int64, unsigned int *))GetProcAddress(v20, v347);
  strcpy(v311, "GetWindowLongA");
  v21 = GetModuleHandleA(v113);
  GetWindowLongA = (__int64 (__fastcall *)(__int64, __int64))GetProcAddress(v21, v311);
  v82(v137);
  v24 = ((__int64 (__fastcall *)(__int64, __int64))v134)(v23, v22);
  v137 = OpenProcess(2035711i64, 0i64, v24);
  strcpy(v310, "GetWindowTextA");
  v25 = GetModuleHandleA(v113);
  v545 = (__int64 (__fastcall *)(__int64, int *, __int64))GetProcAddress(v25, v310);
  strcpy(v304, "GetWindowTextW");
  v26 = GetModuleHandleA(v113);
  v1300 = (__int64 (__fastcall *)(__int64, _BYTE *, __int64))GetProcAddress(v26, v304);
  strcpy(v296, "GetClassNameW");
  v27 = GetModuleHandleA(v113);
  v1301 = (__int64 (__fastcall *)(__int64, _BYTE *, __int64))GetProcAddress(v27, v296);
  strcpy(v295, "GetWindowRect");
  v28 = GetModuleHandleA(v113);
  v1302 = (void (__fastcall *)(__int64, _DWORD *))GetProcAddress(v28, v295);
  strcpy(v353, "QueryFullProcessImageNameW");
  v29 = GetModuleHandleA(v241);
  v493 = (unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, unsigned int *))GetProcAddress(v29, v353);
  strcpy(v334, "WideCharToMultiByte");
  v228 = (__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD, __int64, int, _QWORD, _QWORD))GetProcAddress(
                                                                                                     v75,
                                                                                                     v334);
  strcpy(v335, "GetFileAttributesExA");
  v1084 = (unsigned int (__fastcall *)(char *, _QWORD, _BYTE *))GetProcAddress(v75, v335);
  strcpy(v336, "GetFileAttributesExW");
  v506 = (unsigned int (__fastcall *)(_BYTE *, _QWORD, _DWORD *))GetProcAddress(v75, v336);
  v58 = v1066(21504i64);
  *(_BYTE *)v58 = 0;
  *(_BYTE *)(v58 + 1) = 75;
  *(_DWORD *)(v58 + 2) = key;
  v66 = v1066(20480i64);
  *(_BYTE *)v66 = 0;
  *(_BYTE *)(v66 + 1) = 60;
  v47 = 4;
  strcpy(v294, "GetClientRect");
  v30 = GetModuleHandleA(v113);
  v1298 = (void (__fastcall *)(__int64, _DWORD *))GetProcAddress(v30, v294);
  strcpy(v309, "ClientToScreen");
  v31 = GetModuleHandleA(v113);
  v1067 = (void (__fastcall *)(__int64, _DWORD *))GetProcAddress(v31, v309);
  strcpy(v343, "GetWindowDisplayAffinity");
  v32 = GetModuleHandleA(v113);
  v1068 = (unsigned int (__fastcall *)(__int64, int *))GetProcAddress(v32, v343);
  strcpy(v245, "R6Game");
  v1014 = v1297(0i64, 0i64, v245, 0i64, a2, a3);
  v1298(v1014, v1060);
  v1067(v1014, v1060);
  v1067(v1014, v1061);
  *(_BYTE *)(v58 + 7) = 0;
  *(_BYTE *)(v58 + 8) = 3;
  *(_WORD *)(v58 + 6) = 5;
  for ( i = 0; i < 5; ++i )
    *(_BYTE *)(v58 + i + 8) = *(_BYTE *)(v58 + i + 8);
  v45 = 13i64;
  *(_WORD *)(v58 + 6) += 6;
  v240 = 0;
  v123 = 0;
  v111 = ((__int64 (__fastcall *)(_QWORD))v1070)(0i64);
  if ( v111 )
  {
    v382 = 0i64;
    while ( 1 )
    {
      *(_DWORD *)v1355 = 0;
      v107 = -1;
      v1299(v111, &v239);
      if ( v239 != v134() )
      {
        v107 = v545(v111, (int *)&v1355[2], 128i64);
        for ( j = 0; ; ++j )
        {
          if ( j >= v107 - 5 )
            goto LABEL_33;
          if ( *(_DWORD *)&v1355[j + 2] == 1685022787 && *(_WORD *)((char *)v1356 + j) == 29479
            || *(_DWORD *)&v1355[j + 2] == 1635017043 && *(_WORD *)((char *)v1356 + j) == 13678
            || *(_DWORD *)&v1355[j + 2] == 1852990827 && *(_DWORD *)((char *)v1356 + j) == 1751346277 )
          {
            break;
          }
        }
        v1355[0] = 0;
        v1355[1] = 51;
        if ( v45 + v107 + 1 + 2 <= 0x5400 )
        {
          *(_WORD *)(v45 + v58) = v107 + 1;
          for ( k = 0; k < v107 + 1; ++k )
            *(_BYTE *)(v58 + k + v45 + 2) = v1355[k + 1];
          v45 += v107 + 3;
        }
      }
LABEL_33:
      v99 = GetWindowLongA(v111, 4294967280i64);
      if ( (v99 & 0x10000000) == 0 )
        goto LABEL_255;
      ++v240;
      v1039 = v47;
      if ( v239 == v134() )
      {
        *(_BYTE *)(v66 + v47) = 0;
        v48 = v47 + 1;
      }
      else
      {
        v103 = v1300(v111, v1369, 64i64);
        v387 = v228(65001i64, 0i64, (__int64 *)v1369, v103, v66 + v47 + 1, 255, 0i64, 0i64);
        *(_BYTE *)(v66 + v47) = v387;
        v48 = v47 + (unsigned __int8)v387 + 1;
      }
      v103 = v1301(v111, v1369, 64i64);
      v388 = v228(65001i64, 0i64, (__int64 *)v1369, v103, v66 + v48 + 1, 255, 0i64, 0i64);
      *(_BYTE *)(v66 + v48) = v388;
      if ( (_BYTE)v388
        && *(_BYTE *)(v66 + v48) == 7
        && *(_DWORD *)(v66 + v48 + 1) == 1702129486
        && *(_WORD *)(v66 + v48 + 5) == 24944
        && *(_BYTE *)(v66 + v48 + 7) == 100 )
      {
        v123 = 1;
      }
      v49 = v48 + *(unsigned __int8 *)(v66 + v48) + 1;
      v518 = OpenProcess(4096i64, 0i64, v239);
      v103 = 128;
      v389 = v518
          && v493(v518, 0i64, v1378, &v103)
          && (v103 = v228(65001i64, 0i64, (__int64 *)v1378, v103, v66 + v49 + 1, 255, 0i64, 0i64)) != 0;
      v90 = v389;
      if ( v518 )
        v82(v518);
      v98 = GetWindowLongA(v111, 4294967276i64);
      v1302(v111, v1045);
      if ( v1068 )
      {
        if ( v1068(v111, &v1040)
          && v1040
          && v1045[0] <= v1060[0]
          && v1045[1] <= v1060[1]
          && v1045[2] >= v1061[0]
          && v1045[3] >= v1061[1] )
        {
          break;
        }
      }
      v115 = 0;
      for ( l = v235(v111, 5i64); l; l = v235(l, 2i64) )
      {
        if ( (unsigned int)v545(l, &v139, 32i64)
          && ((v139 == 1868784978 || v139 == 1868785010) && (__int16)v140 == 27753
           || (v139 == 1378709326 || v139 == 1915580238) && v140 == 1768907621
           || (v139 == 1734963796 || v139 == 1734963828) && v140 == 1651664231
           || v139 == 1768972626
           && (v140 == 1919501924 || v140 == 1919510116 || v140 == 1766203492 || v140 == 1768300644)
           || v139 == 1801548388 && v140 == 1634299503) )
        {
          ++v115;
        }
        for ( m = v235(l, 5i64); m; m = v235(m, 2i64) )
        {
          if ( (unsigned int)v545(m, &v139, 32i64)
            && ((v139 == 1868784978 || v139 == 1868785010) && (__int16)v140 == 27753
             || (v139 == 1378709326 || v139 == 1915580238) && v140 == 1768907621
             || (v139 == 1734963796 || v139 == 1734963828) && v140 == 1651664231
             || v139 == 1768972626
             && (v140 == 1919501924 || v140 == 1919510116 || v140 == 1766203492 || v140 == 1768300644)
             || v139 == 1801548388 && v140 == 1634299503) )
          {
            ++v115;
          }
          for ( n = v235(m, 5i64); n; n = v235(n, 2i64) )
          {
            if ( (unsigned int)v545(n, &v139, 32i64)
              && ((v139 == 1868784978 || v139 == 1868785010) && (__int16)v140 == 27753
               || (v139 == 1378709326 || v139 == 1915580238) && v140 == 1768907621
               || (v139 == 1734963796 || v139 == 1734963828) && v140 == 1651664231
               || v139 == 1768972626
               && (v140 == 1919501924 || v140 == 1919510116 || v140 == 1766203492 || v140 == 1768300644)
               || v139 == 1801548388 && v140 == 1634299503) )
            {
              ++v115;
            }
          }
        }
      }
      if ( v115 )
      {
        v99 |= 0x40000000u;
        goto LABEL_241;
      }
      if ( v382 && (v98 & 0x80000) != 0 )
      {
        v99 |= 0x40000000u;
        goto LABEL_241;
      }
      if ( (v98 & 0x80000) != 0 && (v98 & 8) != 0 )
        goto LABEL_241;
      v46 = v98 | v99;
      if ( (v98 | v99) == 349110528
        || v46 == 885981440
        || v46 == 351208208
        || v46 == 888079120
        || v46 == 351207696
        || v46 == 888078608
        || v46 == 386465824
        || v46 == 386465792
        || v46 == 369688608
        || v46 == -1811415008
        || v46 == -1811414912
        || v46 == -1677197184 )
      {
        goto LABEL_241;
      }
      if ( (v46 == 382664960 || v46 == 919535872)
        && (*(_DWORD *)&v1355[2] == 1852399949 && v1356[0] == 1684957527 || (v98 & 0x80000) != 0) )
      {
        goto LABEL_241;
      }
      if ( v46 == 399442176 && !v107
        || (v46 & 0xFFFFF) == 763808
        || (v46 & 0xFFFFF) == 525091
        || (v46 & 0xFFFFF) == 592421
        || (v46 & 0xFFFFF) == 592485
        || v46 == 369754240
        || v46 == 382337032
        || (v46 & 0xFFFFF) == 917889
        || (v46 & 0xFFFFF) == 917632
        || v46 == -703987584
        || v46 == -704118527
        || v46 == 369950752
        || v46 == -1811414880
        || v46 == 382664961
        || v46 == 919535873
        || v46 == 369950720
        || v46 == -1811415040
        || v46 == -1811939328 && !v107
        || v46 == 381812992
        || v46 == 382206208
        || v46 == 369623168
        || v46 == 369885184
        || v46 == 503906464
        || v46 == -1668808672
        || v46 == -1677197152
        || v46 == -1677197276
        || v46 == -1677197280
        || v46 == 352913568
        || v46 == 369229832
        || v46 == -1677197312
        || v46 == -737673056
        || v46 == -1811939312
        || v46 == -1275068400
        || v46 == -1803026400
        || v46 == 504168488
        || v46 == 336068768
        || v46 == 336068640
        || v46 == 336068736
        || v46 == -1668808160
        || v46 == -1777663840
        || v46 == 336136352
        || v46 == 369754112
        || v46 == -1777855312
        || v46 == -1660420096
        || v46 == 382337288
        || v46 == 919208200
        || v46 == 369623200
        || v46 == -1675689673
        || v46 == 369754144
        || v46 == -1675689545
        || v46 == -1811414496
        || (v98 & 0x80000) != 0
        && (*(_WORD *)(v66 + v49 + 1) == 19785 && *(_BYTE *)(v66 + v49 + 3) == 69
         || *(_DWORD *)(v66 + v49 + 1) == 1413698381
         || *(_DWORD *)&v1355[2] == 1953784130 && v1356[0] == 1702446444
         || *(_DWORD *)(v66 + v49 + 1) == 1802661719 && *(_WORD *)(v66 + v49 + 6) == 22386 && (v46 & 0xF) != 0
         || v1045[0] == -1 && v1045[1] == -1)
        || v46 == -1677131616
        || v46 == -1777860576
        || v46 == -1777860448
        || v46 == -1676148576
        || v46 == -1673002848
        || v46 == -704118752
        || v98 == 5767328
        || (v98 & 0x80024) == 524324
        || v46 == -1642594144
        || v46 == 470286496
        || (v46 & 0x9C090020) == -1677131744
        || v46 == -1803026432
        || v46 == -1660420064
        || v46 == -603324384
        || v46 == 470352032
        || v46 == -1776746336
        || v46 == -1773469536
        || v98 == 786592
        || v46 == -1642577760
        || v46 == 474480672
        || v46 == -1643380576
        || v46 == 382599425
        || v46 == 919470337
        || v46 == -1777793888
        || v46 == 351011088
        || v46 == -1676935008
        || v46 == -1803025760
        || v46 == -1677196768
        || v46 == -1677041568
        || v46 == 349110536
        || v46 == 885981448
        || v46 == 352845856
        || v46 == 348782849
        || v46 == 885653761 )
      {
        goto LABEL_241;
      }
      v47 = v1039;
LABEL_251:
      if ( !v382 && v239 == v134() && (v1069 = v235(v111, 5i64)) != 0 )
      {
        v382 = v111;
        v111 = v1069;
      }
      else
      {
LABEL_255:
        while ( 1 )
        {
          v111 = v235(v111, 2i64);
          if ( v111 )
          {
            if ( v47 <= 20096 )
              break;
          }
          if ( !v382 )
            goto LABEL_259;
          v111 = v382;
          v382 = 0i64;
        }
      }
    }
    v99 |= 0x40000000u;
LABEL_241:
    if ( v90 )
    {
      if ( v506(v1378, 0i64, v1361) )
        v390 = v1361[8];
      else
        v390 = 0;
      v391 = v390;
    }
    else
    {
      v391 = 0;
    }
    if ( v90 )
      HIDWORD(v364) = v103;
    else
      HIDWORD(v364) = 0;
    *(_BYTE *)(v66 + v49) = BYTE4(v364);
    v50 = v49 + BYTE4(v364) + 1;
    *(_DWORD *)(v66 + v50) = v391;
    *(_DWORD *)(v66 + v50 + 4) = v99;
    *(_DWORD *)(v66 + v50 + 8) = v98;
    qmemcpy((void *)(v66 + v50 + 12), v1045, 0x10ui64);
    v47 = v50 + 28;
    goto LABEL_251;
  }
LABEL_259:
  *(_WORD *)(v66 + 2) = v47 - 4;
  v51 = v47 + 2;
  if ( !v240 )
  {
    v229 = 0;
    v230[0] = 68;
    v230[1] = 0;
    if ( v45 + 4 <= 0x5400 )
    {
      *(_WORD *)(v45 + v58) = 2;
      for ( ii = 0; (unsigned __int64)ii < 2; ++ii )
        *(_BYTE *)(v58 + ii + v45 + 2) = v230[ii];
      v45 += 4i64;
    }
  }
  strcpy(v314, "DuplicateHandle");
  v1317 = (unsigned int (__fastcall *)(__int64, _QWORD, __int64, __int64 *, __int64, _DWORD, __int64))GetProcAddress(v75, v314);
  strcpy(v324, "GetCurrentProcess");
  v1029 = (__int64 (*)(void))GetProcAddress(v75, v324);
  strcpy(v298, "NtQueryObject");
  v1319 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))GetProcAddress(v135, v298);
  strcpy(v265, "_wcsnicmp");
  v33 = GetModuleHandleA(v141);
  v1320 = (unsigned int (__fastcall *)(__int64, _WORD *, _QWORD))GetProcAddress(v33, v265);
  strcpy(v292, "GetProcessId");
  v1321 = (__int64 (__fastcall *)(__int64))GetProcAddress(v75, v292);
  v77 = -1;
  v70 = -1;
  v86 = 0i64;
  v207 = 32;
  do
  {
    v207 += 1024;
    v86 = (unsigned int *)v421(v86, v207);
    if ( !v86 )
      break;
    v70 = v233(16i64, v86, v207, &v207);
  }
  while ( v70 == -1073741820 );
  if ( v86 && v70 >= 0 )
  {
    v116 = -1;
    for ( jj = 0; *v85 && jj < *v86 && v51 <= 20195; ++jj )
    {
      if ( HIWORD(v86[6 * jj + 3]) == v137 )
      {
        v1303 = 24i64 * (int)jj;
        if ( v86[(unsigned __int64)v1303 / 4 + 2] == v134() && v77 && v77 == -1 )
          v77 = 999;
      }
      if ( v116 == -1 || LOBYTE(v86[6 * jj + 3]) == v116 )
      {
        v1304 = 24i64 * (int)jj;
        if ( v86[(unsigned __int64)v1304 / 4 + 2] != v134() )
        {
          v488 = OpenProcess(64i64, 0i64, v86[6 * jj + 2]);
          if ( v488 )
          {
            v34 = v1029();
            LODWORD(a4) = 0;
            LODWORD(v41) = 1024;
            if ( v1317(v488, HIWORD(v86[6 * jj + 3]), v34, &v1015, v41, 0, a4) )
            {
              if ( v116 == -1 )
              {
                v917[0] = 80;
                v917[1] = 114;
                v917[2] = 111;
                v917[3] = 99;
                v917[4] = 101;
                v917[5] = 115;
                v917[6] = 115;
                v917[7] = 0;
                v70 = v1319(v1015, 2i64, &v1384, 1024i64, 0i64);
                if ( v70 < 0 || v1320(v1385, v917, v1384 / 2) )
                {
                  if ( v70 < 0 && v77 )
                    v77 = v70;
                }
                else
                {
                  v116 = LOBYTE(v86[6 * jj + 3]);
                }
              }
              if ( v116 != -1 && (v1038 = v1321(v1015), v1038 == v134()) && (v86[6 * jj + 6] & 0x30) != 0 )
              {
                v487 = OpenProcess(4096i64, 0i64, v86[6 * jj + 2]);
                v1381[0] = 0;
                v208 = 256;
                if ( v487
                  && v493(v487, 0i64, v1381, &v208)
                  && (v208 = v228(65001i64, 0i64, (__int64 *)v1381, v208, v66 + v51 + 1, 255, 0i64, 0i64)) != 0 )
                {
                  *(_BYTE *)(v66 + v51) = v208;
                }
                else
                {
                  v1156 = v86[6 * jj + 2];
                  v1157 = 0;
                  v1158 = 512;
                  v1159 = &v1388;
                  if ( (int)v233(88i64, (unsigned int *)&v1156, 24i64, 0i64) < 0 )
                  {
                    *(_BYTE *)(v66 + v51) = 0;
                  }
                  else
                  {
                    _mm_lfence();
                    v1322 = v66 + v51 + 1;
                    *(_BYTE *)(v66 + v51) = v228(65001i64, 0i64, v1159, v1157 / 2, v1322, 255, 0i64, 0i64);
                  }
                }
                if ( v487 )
                  v82(v487);
                if ( *(_BYTE *)(v66 + v51) )
                {
                  if ( v506(v1381, 0i64, v1362) )
                    v392 = v1362[8];
                  else
                    v392 = 0;
                  v393 = v392;
                }
                else
                {
                  v393 = 0;
                }
                v52 = v51 + *(unsigned __int8 *)(v66 + v51) + 1;
                *(_DWORD *)(v66 + v52) = v393;
                v52 += 4;
                *(_DWORD *)(v66 + v52) = v86[6 * jj + 6];
                v51 = v52 + 4;
                v77 = 0;
              }
              else if ( v116 != -1 && HIWORD(v86[6 * jj + 3]) == v137 )
              {
                v1289 = 24i64 * (int)jj;
                if ( v86[(unsigned __int64)v1289 / 4 + 2] == v134() )
                {
                  if ( v77 )
                    v77 = v86[6 * jj + 6];
                }
              }
              v82(v1015);
              v82(v488);
            }
            else
            {
              v82(v488);
              if ( HIWORD(v86[6 * jj + 3]) == v137 )
              {
                v1318 = 24i64 * (int)jj;
                if ( v86[(unsigned __int64)v1318 / 4 + 2] == v134() )
                {
                  if ( v77 )
                    v77 = 2;
                }
              }
            }
          }
          else if ( HIWORD(v86[6 * jj + 3]) == v137 )
          {
            v1305 = 24i64 * (int)jj;
            if ( v86[(unsigned __int64)v1305 / 4 + 2] == v134() )
              v77 = v77 != 0;
          }
        }
      }
    }
    if ( v116 == -1 )
      v77 += 200;
  }
  else
  {
    v77 = v70 + 100;
  }
  if ( v77 )
  {
    *(_DWORD *)(v66 + v51) = v77;
    v51 += 4;
  }
  if ( *(_DWORD *)(report + 5) == -858993460 && *(_DWORD *)(report + 1377994) == -803035 )
    *(_QWORD *)(report + 196656) = *(_QWORD *)(report + 1377998);
  if ( v86 )
    v361(v86);
  if ( *v85 )
  {
    *(_WORD *)(v66 + *(unsigned __int16 *)(v66 + 2) + 4) = v51 - 4 - *(_WORD *)(v66 + 2) - 2;
    strcpy(v291, "GetLastError");
    v363 = (__int64 (*)(void))GetProcAddress(v75, v291);
    *(_DWORD *)(v66 + v51) = 0;
    *(_DWORD *)(v66 + v51 + 4) = 0;
    *(_DWORD *)(v66 + v51 + 8) = 0;
    v53 = v51 + 12;
    *(_DWORD *)(v66 + v53) = 0;
    v54 = v53 + 4;
    v365 = 0;
    for ( kk = NtQueryVirtualMemory; ; kk = NtReadVirtualMemory )
    {
      while ( 1 )
      {
        while ( *kk == 0xE9 )
          kk += *(_DWORD *)(kk + 1) + 5;
        if ( *(_WORD *)kk != 0x25FF )
          break;
        kk = *(unsigned __int8 **)&kk[*(int *)(kk + 2) + 6];
      }
      v489 = GetModuleHandleA(0i64);
      if ( (unsigned __int64)kk < v489 )
        break;
      _mm_lfence();
      if ( (unsigned __int64)kk >= *(unsigned int *)(v489 + *(int *)(v489 + 60) + 80) + v489 )
        break;
      if ( v365++ )
        break;
    }
    if ( *(unsigned __int8 *)GetWindowLongA == 0xB8
      || *(unsigned __int16 *)GetWindowLongA == 0xB848
      || *(unsigned __int8 *)GetWindowLongA == 0xC3 )
    {
      kk = (unsigned __int8 *)GetWindowLongA;
    }
    else
    {
      for ( ll = 0; ll < 3; ++ll )
      {
        if ( ll )
        {
          if ( ll == 1 )
            v1081 = (unsigned __int8 *)v235;
          else
            v1081 = (unsigned __int8 *)GetWindowLongA;
          v1080 = v1081;
        }
        else
        {
          v1080 = v1070;
        }
        for ( mm = v1080; ; kk = mm )
        {
          while ( *mm == 0xE9 || *mm == 0xE8 )
          {
            mm += *(_DWORD *)(mm + 1) + 5;
            kk = mm;
          }
          if ( *(_WORD *)mm != 9727 )
            break;
          mm = *(unsigned __int8 **)&mm[*(int *)(mm + 2) + 6];
        }
      }
    }
    strcpy(v323, "vcruntime140.dll");
    v1016 = GetModuleHandleA(v323);
    if ( v1016 )
    {
      if ( (strcpy(v247, "memcpy"), strcpy(v250, "memmove"), (v356 = GetProcAddress(v1016, v247)) != 0)
        && *(_WORD *)v356 == 9727
        || (v356 = GetProcAddress(v1016, v250)) != 0 && *(_WORD *)v356 == 0x25FF )
      {
        kk = *(unsigned __int8 **)(v356 + *(int *)(v356 + 2) + 6);
      }
    }
    strcpy(v331, "GetCurrentThreadId");
    v1017 = GetProcAddress(v75, v331);
    if ( *(_WORD *)v1017 == 9727 )
      kk = *(unsigned __int8 **)(v1017 + *(int *)(v1017 + 2) + 6);
    if ( *(unsigned __int8 *)GetProcAddress == 204 )
      kk = (unsigned __int8 *)GetProcAddress;
    strcpy(v350, "KiUserExceptionDispatcher");
    v1018 = (_DWORD *)GetProcAddress(v135, v350);
    if ( *v1018 == 0x58B48FC )
    {
      v1019 = *(_QWORD *)((char *)v1018 + v1018[1] + 8);
      if ( v1019 )
      {
        if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
               -1i64,
               v1019 & 0xFFFFFFFFFFFFF000ui64,
               0i64,
               v1357,
               48i64,
               &v1344) < 0
          || v1357[8] == 4096 && (v1358 & 4) != 0 )
        {
          kk = (unsigned __int8 *)v1019;
        }
      }
    }
    *(_QWORD *)(v66 + v54) = kk;
    if ( kk )
    {
      *(_QWORD *)(v66 + v54 + 8) = *(_QWORD *)kk;
      *(_QWORD *)(v66 + v54 + 16) = *((_QWORD *)kk + 1);
      *(_QWORD *)(v66 + v54 + 24) = *((_QWORD *)kk + 2);
    }
    else
    {
      *(_QWORD *)(v66 + v54 + 8) = 0i64;
      *(_QWORD *)(v66 + v54 + 16) = 0i64;
      *(_QWORD *)(v66 + v54 + 24) = 0i64;
    }
    v55 = v54 + 32;
    strcpy(v1062, "DiscordHook64.dll");
    v381 = GetModuleHandleA(v1062);
    if ( v381 )
    {
      *(_DWORD *)(v66 + v55) = *(_DWORD *)(v381 + *(int *)(v381 + 60) + 8);
      v262[0] = 0x48;
      v262[1] = 0x89;
      v262[2] = 0xD9;
      v262[3] = 0x89;
      v262[4] = 0xFA;
      v262[5] = 0x41;
      v262[6] = 0x89;
      v262[7] = 0xF0;
      v262[8] = 0xFF;
      v262[9] = 0x15;
      v1020 = v381 + *(int *)(v381 + 60) + 24;
      v105 = (_BYTE *)(*(unsigned int *)(v1020 + 20) + v381);
      for ( nn = 0; *v85 && nn + 10i64 <= (unsigned __int64)*(unsigned int *)(v1020 + 4); ++nn )
      {
        for ( i1 = 0; (unsigned __int64)i1 < 0xA && v105[i1 + nn] == v262[i1]; ++i1 )
          ;
        if ( i1 == 10i64 )
        {
          v105 += nn - 0x37;
          if ( *v105 == 0x74 || (v105 += 8, *v105 == 0x74) || (v105 += 0x12, *v105 == 0x74) )
          {
            v1073 = 1i64;
            v1108 = v105;
            if ( NtProtectVirtualMemory(-1i64, &v1108, &v1073, 64i64, &v394) >= 0 )
            {
              *v105 = 0xEB;
              NtProtectVirtualMemory(-1i64, &v1108, &v1073, v394, &v394);
            }
          }
          goto LABEL_417;
        }
      }
      v267[0] = 0x44;
      v267[1] = 0x8B;
      v267[2] = 0xC7;
      v267[3] = 0x8B;
      v267[4] = 0xD6;
      v267[5] = 0x48;
      v267[6] = 0x8B;
      v267[7] = 0xCB;
      v267[8] = 0xFF;
      v267[9] = 0x15;
      for ( i2 = 0; *v85 && i2 + 10i64 <= (unsigned __int64)*(unsigned int *)(v1020 + 4); ++i2 )
      {
        for ( i3 = 0; (unsigned __int64)i3 < 0xA && v105[i3 + i2] == v267[i3]; ++i3 )
          ;
        if ( i3 == 10i64 )
        {
          v105 += i2 - 29;
          if ( *v105 == 116 )
          {
            v1107 = 1i64;
            v1100 = v105;
            if ( NtProtectVirtualMemory(-1i64, &v1100, &v1107, 64i64, v395) >= 0 )
            {
              *v105 = 0xEB;
              NtProtectVirtualMemory(-1i64, &v1100, &v1107, v395[0], v395);
            }
          }
          break;
        }
      }
    }
    else
    {
      *(_DWORD *)(v66 + v55) = 0;
    }
LABEL_417:
    v56 = v55 + 4;
    v919[0] = 92;
    v919[1] = 68;
    v919[2] = 101;
    v919[3] = 118;
    v919[4] = 105;
    v919[5] = 99;
    v919[6] = 101;
    v919[7] = 92;
    v919[8] = 72;
    v919[9] = 97;
    v919[10] = 114;
    v919[11] = 100;
    v919[12] = 100;
    v919[13] = 105;
    v919[14] = 115;
    v919[15] = 107;
    v919[16] = 86;
    v919[17] = 111;
    v919[18] = 108;
    v919[19] = 117;
    v919[20] = 109;
    v919[21] = 101;
    v920 = 49;
    v921 = 92;
    v922 = 69;
    v923 = 70;
    v924 = 73;
    v925 = 92;
    v926 = 77;
    v927 = 105;
    v928 = 99;
    v929 = 114;
    v930 = 111;
    v931 = 115;
    v932 = 111;
    v933 = 102;
    v934 = 116;
    v935 = 92;
    v936 = 66;
    v937 = 111;
    v938 = 111;
    v939 = 116;
    v940 = 92;
    v941 = 98;
    v942 = 111;
    v943 = 111;
    v944 = 116;
    v945 = 109;
    v946 = 103;
    v947 = 102;
    v948 = 119;
    v949 = 46;
    v950 = 101;
    v951 = 102;
    v952 = 105;
    v953 = 0;
    v1294[0] = 110;
    v1294[1] = 112;
    v1295 = v919;
    v1336 = 48;
    v1337 = 0i64;
    v1339 = 64;
    v1338 = v1294;
    v1340 = 0i64;
    v1341 = 0i64;
    strcpy(v273, "NtOpenFile");
    v1251 = (__int64 (__fastcall *)(__int64 *, __int64, int *, _BYTE *, __int64, int))GetProcAddress(v135, v273);
    while ( v920 <= 0x39u )
    {
      LODWORD(v41) = 7;
      v70 = v1251(&v1095, 1048704i64, &v1336, v1349, v41, 32);
      if ( v70 >= 0 )
      {
        strcpy(v341, "NtQueryInformationFile");
        v1252 = (int (__fastcall *)(__int64, _BYTE *, _QWORD *, __int64, int))GetProcAddress(v135, v341);
        if ( v1252(v1095, v1349, v1334, 40i64, 4) >= 0 )
        {
          strcpy(v342, "GetSystemTimeAsFileTime");
          v1253 = (void (__fastcall *)(__int64 *))GetProcAddress(v75, v342);
          v1253(&v1255);
          strcpy(v303, "GetTickCount64");
          v1254 = (__int64 (*)(void))GetProcAddress(v75, v303);
          v1256 = v1254();
          *(_DWORD *)(v66 + v56) = (v1255 / 10000 - v1256) / 0x3E8ui64;
          *(_DWORD *)(v66 + v56 + 4) = v1334[0] / 10000000i64;
          *(_DWORD *)(v66 + v56 + 8) = v1334[1] / 10000000i64;
          *(_DWORD *)(v66 + v56 + 12) = v1334[2] / 10000000i64;
          *(_DWORD *)(v66 + v56 + 16) = v1334[3] / 10000000i64;
          *(_DWORD *)(v66 + v56 + 20) = v1335;
          v56 += 24;
          break;
        }
        strcpy(v259, "NtClose");
        v1257 = (void (__fastcall *)(__int64))GetProcAddress(v135, v259);
        v1257(v1095);
      }
      ++v920;
    }
    if ( v45 + v56 - 1 + 2 <= 0x5400 )
    {
      *(_WORD *)(v45 + v58) = v56 - 1;
      for ( i4 = 0; i4 < v56 - 1; ++i4 )
        *(_BYTE *)(v58 + i4 + v45 + 2) = *(_BYTE *)(v66 + i4 + 1);
      v45 += v56 + 1;
    }
  }
  v361((unsigned int *)v66);
  v82(v137);
  result = (unsigned __int8)*v85;
  if ( *v85 )
  {
    v547[0] = 0x518;
    v548 = 18;
    qmemcpy(v549, "ojects\\PUBGChinese", sizeof(v549));
    memset(v550, 0, sizeof(v550));
    v551 = 1303;
    v552 = 29;
    qmemcpy(v553, "BattleGroundsPrivate_CheatESP", sizeof(v553));
    memset(v554, 0, sizeof(v554));
    v555 = 1303;
    v556 = 22;
    v557 = 91;
    v558 = 0;
    v559 = 37;
    v560 = 0;
    v561 = 46;
    v562 = 0;
    v563 = 48;
    v564 = 0;
    v565 = 102;
    v566 = 0;
    v567 = 109;
    v568 = 0;
    v569 = 93;
    v570 = 0;
    v571 = 32;
    v572 = 0;
    v573 = 37;
    v574 = 0;
    v575 = 115;
    v576 = 0;
    v577 = 0;
    v578 = 0;
    memset(v579, 0, sizeof(v579));
    v580 = 1342;
    v581 = 32;
    v582 = 0;
    v583 = 0;
    v584 = 0;
    v585 = 0;
    strcpy(v586, "Neck");
    v586[5] = 0;
    v586[6] = 0;
    v586[7] = 0;
    strcpy(v587, "Chest");
    v587[6] = 0;
    v587[7] = 0;
    v587[8] = 0;
    v587[9] = 0;
    v587[10] = 0;
    v587[11] = 0;
    strcpy(v588, "Mouse 1");
    v589 = 1343;
    v590 = 15;
    strcpy(v591, "PlayerESPColor");
    memset(v592, 0, sizeof(v592));
    v593 = 1344;
    v594 = 32;
    v595 = 32;
    v596 = 0;
    v597 = 65;
    v598 = 0;
    v599 = 105;
    v600 = 0;
    v601 = 109;
    v602 = 0;
    v603 = 98;
    v604 = 0;
    v605 = 111;
    v606 = 0;
    v607 = 116;
    v608 = 0;
    v609 = 58;
    v610 = 0;
    v611 = 32;
    v612 = 0;
    v613 = 37;
    v614 = 0;
    v615 = 100;
    v616 = 0;
    v617 = 0;
    v618 = 0;
    v619 = 45;
    v620 = 0;
    v621 = 62;
    v622 = 0;
    v623 = 32;
    v624 = 0;
    v625 = 65;
    v626 = 0;
    v627 = 1334;
    v628 = 12;
    strcpy(v629, "HackMachine");
    memset(v630, 0, sizeof(v630));
    v631 = 1354;
    v632 = 16;
    strcpy(v633, "VisualHacks.net");
    memset(v634, 0, sizeof(v634));
    v635 = 1360;
    v636 = 32;
    v637 = 62;
    v638 = 35;
    v639 = 47;
    v640 = 101;
    v641 = 62;
    v642 = 49;
    v643 = 49;
    v644 = 78;
    v645 = 78;
    v646 = 86;
    v647 = 61;
    v648 = 66;
    v649 = 118;
    v650 = 40;
    v651 = 42;
    v652 = 58;
    v653 = 46;
    v654 = 70;
    v655 = 63;
    v656 = 117;
    v657 = 117;
    v658 = 35;
    v659 = 40;
    v660 = 103;
    v661 = 82;
    v662 = 85;
    v663 = 46;
    v664 = 111;
    v665 = 48;
    v666 = 88;
    v667 = 71;
    v668 = 72;
    v669 = 1359;
    v670 = 32;
    v671 = 68;
    v672 = 76;
    v673 = 76;
    v674 = 73;
    v675 = 110;
    v676 = 106;
    v677 = 101;
    v678 = 99;
    v679 = 116;
    v680 = 105;
    v681 = 111;
    v682 = 110;
    v683 = 45;
    v684 = 109;
    v685 = 97;
    v686 = 115;
    v687 = 116;
    v688 = 101;
    v689 = 114;
    v690 = 92;
    v691 = 120;
    v692 = 54;
    v693 = 52;
    v694 = 92;
    v695 = 82;
    v696 = 101;
    v697 = 108;
    v698 = 101;
    v699 = 97;
    v700 = 115;
    v701 = 101;
    v702 = 92;
    v703 = 1362;
    v704 = 16;
    v705 = 78;
    v706 = 0;
    v707 = 97;
    v708 = 0;
    v709 = 109;
    v710 = 0;
    v711 = 101;
    v712 = 0;
    v713 = 69;
    v714 = 0;
    v715 = 83;
    v716 = 0;
    v717 = 80;
    v718 = 0;
    v719 = 0;
    v720 = 0;
    memset(v721, 0, sizeof(v721));
    v722 = 1352;
    v723 = 20;
    v724 = 83;
    v725 = 0;
    v726 = 107;
    v727 = 0;
    v728 = 117;
    v729 = 0;
    v730 = 108;
    v731 = 0;
    v732 = 108;
    v733 = 0;
    v734 = 104;
    v735 = 0;
    v736 = 97;
    v737 = 0;
    v738 = 99;
    v739 = 0;
    v740 = 107;
    v741 = 0;
    v742 = 0;
    v743 = 0;
    memset(v744, 0, sizeof(v744));
    v745 = 1365;
    v746 = 14;
    strcpy(v747, ".rdata$zzzdbg");
    memset(v748, 0, sizeof(v748));
    v749 = 1337;
    v750 = 14;
    v751 = 65;
    v752 = 0;
    v753 = 105;
    v754 = 0;
    v755 = 109;
    v756 = 0;
    v757 = 66;
    v758 = 0;
    v759 = 111;
    v760 = 0;
    v761 = 116;
    v762 = 0;
    v763 = 0;
    v764 = 0;
    memset(v765, 0, sizeof(v765));
    v766 = 1337;
    v767 = 32;
    v768 = -21;
    v769 = 73;
    v770 = 65;
    v771 = 0x80;
    v772 = 60;
    v773 = 18;
    v774 = 63;
    v775 = 117;
    v776 = 5;
    v777 = -58;
    v778 = 2;
    v779 = 63;
    v780 = -21;
    v781 = 56;
    v782 = -115;
    v783 = 65;
    v784 = -48;
    v785 = 15;
    v786 = -66;
    v787 = -55;
    v788 = 60;
    v789 = 9;
    v790 = 119;
    v791 = 5;
    v792 = -125;
    v793 = -23;
    v794 = 48;
    v795 = -21;
    v796 = 6;
    v797 = -125;
    v798 = -31;
    v799 = -33;
    v800 = 1375;
    v801 = 2;
    v802 = 85;
    v803 = -23;
    memset(v804, 0, sizeof(v804));
    v805 = 1375;
    v806 = 2;
    v807 = 87;
    v808 = -23;
    memset(v809, 0, sizeof(v809));
    v810 = 1375;
    v811 = 2;
    v812 = 96;
    v813 = -23;
    memset(v814, 0, sizeof(v814));
    v815 = 1384;
    v816 = 25;
    strcpy(v817, "D3D11Present initialised");
    memset(v818, 0, sizeof(v818));
    v819 = 1390;
    v820 = 10;
    strcpy(v821, "[ %.0fM ]");
    memset(v822, 0, sizeof(v822));
    v823 = 1396;
    v824 = 11;
    strcpy(v825, "[hp:%d]%dm");
    memset(v826, 0, sizeof(v826));
    v827 = 1334;
    v828 = 32;
    v829 = 72;
    v830 = -125;
    strcpy(v831, "d$8");
    v831[4] = 72;
    v831[5] = -115;
    v831[6] = 76;
    v831[7] = 36;
    v831[8] = 88;
    v831[9] = 72;
    v831[10] = -117;
    v831[11] = 84;
    v831[12] = 36;
    v831[13] = 80;
    v831[14] = 76;
    v831[15] = -117;
    v831[16] = -56;
    v831[17] = 72;
    v831[18] = -119;
    v831[19] = 76;
    v831[20] = 36;
    v831[21] = 48;
    v831[22] = 76;
    v831[23] = -117;
    v831[24] = -57;
    v831[25] = 72;
    v831[26] = -115;
    v831[27] = 76;
    v831[28] = 36;
    v831[29] = 96;
    v832 = 1334;
    v833 = 32;
    v834 = 116;
    v835 = 31;
    v836 = -70;
    v837 = 8;
    v838 = 0;
    v839 = 0;
    v840 = 0;
    v841 = -1;
    v842 = 21;
    strcpy(v843, "`~");
    v843[3] = 0;
    v843[4] = -123;
    v843[5] = -64;
    v843[6] = 117;
    v843[7] = 16;
    v843[8] = -14;
    v843[9] = 15;
    v843[10] = 16;
    v843[11] = -121;
    v843[12] = 0x80;
    v843[13] = 1;
    v843[14] = 0;
    v843[15] = 0;
    v843[16] = -117;
    v843[17] = -121;
    v843[18] = -120;
    v843[19] = 1;
    v843[20] = 0;
    v843[21] = 0;
    v843[22] = -21;
    v844 = 1334;
    v845 = 32;
    v846 = 64;
    v847 = -14;
    v848 = -86;
    v849 = 21;
    v850 = 111;
    v851 = 8;
    v852 = -46;
    v853 = -119;
    v854 = 78;
    v855 = -102;
    v856 = -76;
    v857 = 72;
    v858 = -107;
    v859 = 53;
    v860 = -45;
    v861 = 79;
    v862 = -100;
    strcpy(v863, "POSITION");
    v863[9] = 0;
    v863[10] = 0;
    v863[11] = 0;
    v863[12] = 67;
    v863[13] = 79;
    v863[14] = 76;
    v864 = 1402;
    v865 = 3;
    v866 = -1;
    v867 = -32;
    v868 = -112;
    memset(v869, 0, sizeof(v869));
    v870 = 1401;
    v871 = 32;
    strcpy(v872, "%s");
    v872[3] = 0;
    strcpy(v873, "%d");
    v873[3] = 0;
    strcpy(v874, "POSITION");
    v874[9] = 0;
    v874[10] = 0;
    v874[11] = 0;
    strcpy(v875, "COLOR");
    v875[6] = 0;
    v875[7] = 0;
    v875[8] = 0;
    v875[9] = 0;
    v875[10] = 0;
    v875[11] = 0;
    v876 = 1334;
    v877 = 32;
    v878 = -114;
    v879 = -123;
    v880 = 118;
    v881 = 93;
    v882 = -51;
    v883 = -38;
    v884 = 69;
    v885 = 46;
    v886 = 117;
    v887 = -70;
    v888 = 18;
    v889 = -76;
    v890 = -57;
    v891 = -71;
    v892 = 72;
    v893 = 114;
    v894 = 17;
    v895 = 109;
    v896 = -71;
    v897 = 72;
    v898 = -95;
    v899 = -38;
    v900 = -90;
    v901 = -71;
    v902 = 72;
    v903 = -89;
    v904 = 103;
    v905 = 107;
    v906 = -71;
    v907 = 72;
    v908 = -112;
    v909 = 44;
    v910 = 1418;
    v911 = 32;
    qmemcpy(v912, "\n<assembly xmlns='urn:schemas-mi", sizeof(v912));
    v362 = 0;
    for ( i5 = 0i64;
          *v85
       && ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
            -1i64,
            i5,
            0i64,
            v97,
            48i64,
            &v423) >= 0;
          i5 = v97[3] + v97[0] )
    {
      if ( LODWORD(v97[4]) == 4096
        && (HIDWORD(v97[4]) == 16 || HIDWORD(v97[4]) == 32 || HIDWORD(v97[4]) == 64)
        && (v97[0] > (unsigned __int64)sub_0 || v97[3] + v97[0] <= (unsigned __int64)sub_0)
        && (HIDWORD(v97[4]) != 64 || v97[3] != 110592i64) )
      {
        if ( LODWORD(v97[5]) == 0x20000 || LODWORD(v97[5]) == 0x40000 )
        {
          v65 = 0;
          if ( (v97[3] >= 0x11000ui64
             || v97[3] >= 0x4000ui64
             && (v97[0] & 0xFF0000000000i64) != 0x7F0000000000i64
             && (v97[0] & 0xFFF000000000i64) != 0x7F000000000i64
             && v97[3] != 0x10000i64
             && (v97[0] & 0xFFFFF0000000i64) != 1879048192
             && (v97[0] != 4063232i64 || v97[3] != 61440i64)
             && (v97[0] != 4128768i64 || v97[3] != 0x4000i64))
            && (v97[3] != 69632i64 || *(_QWORD *)((char *)&v97[4] + 4) != 0x4000000000020i64) )
          {
            v1324 = 0;
            v395[1] = 47;
            v1325 = 47;
            v1326 = v97[0];
            v1327 = v97[3];
            v1328 = LODWORD(v97[5]) | HIDWORD(v97[4]) | LODWORD(v97[4]);
            v1094 = 18i64;
            if ( v45 + 19 <= 0x5400 )
            {
              v1090 = 18i64;
              *(_WORD *)(v45 + v58) = 17;
              for ( i6 = 0; ; ++i6 )
              {
                v1089 = v65 ? 58i64 : 18i64;
                if ( i6 >= (unsigned __int64)(v1089 - 1) )
                  break;
                *(_BYTE *)(v58 + i6 + v45 + 2) = *(&v1325 + i6);
              }
              if ( v65 )
                v1088 = 58i64;
              else
                v1088 = 18i64;
              v45 += v1088 + 1;
            }
          }
        }
        strcpy(v274, "user32.dll");
        v36 = GetModuleHandleA(v274);
        v395[2] = v97[1] == v36;
        v78 = v97[1] == v36;
        if ( LODWORD(v97[5]) == 0x20000 || v78 )
        {
          for ( i7 = v97[0]; *v85 && i7 != v97[3] + v97[0]; i7 += 4096i64 )
          {
            if ( ((int (__fastcall *)(__int64, __int64, _WORD *, __int64, _QWORD))NtReadVirtualMemory)(
                   -1i64,
                   i7,
                   v1386,
                   4096i64,
                   0i64) >= 0 )
            {
              for ( i8 = 0; (unsigned __int64)i8 < 0x1C; ++i8 )
              {
                if ( v547[20 * i8] != 1402 || v78 )
                {
                  for ( i9 = 0; (unsigned int)(*(&v548 + 10 * i8) + i9) <= 0x1000ui64; ++i9 )
                  {
                    if ( (_BYTE *)(i9 + i7) != &v549[40 * i8] )
                    {
                      for ( i10 = 0;
                            i10 < *(&v548 + 10 * i8)
                         && *((unsigned __int8 *)v1386 + (int)(i10 + i9)) == *((unsigned __int8 *)&v547[20 * i8 + 4]
                                                                             + (int)i10);
                            ++i10 )
                      {
                        ;
                      }
                      if ( i10 == *(&v548 + 10 * i8)
                        && (v547[20 * i8] != 1365 || *(_WORD *)((char *)&v1386[107] + i9 + 1) == 16725)
                        && (v547[20 * i8] != 1375
                         || *(_DWORD *)(i7 + (int)(i10 + i9)) < 0x2000u
                         && ((int (__fastcall *)(__int64, __int64, _WORD *, __int64, _QWORD))NtReadVirtualMemory)(
                              -1i64,
                              (int)(i10 + i9) + i7 + *(int *)((char *)v1386 + (int)(i10 + i9)) + 4,
                              v1386,
                              2i64,
                              0i64) >= 0
                         && (v1386[0] == 21569 || v1386[0] == 33096 || LOBYTE(v1386[0]) == 161 && v549[40 * i8] == 96))
                        && (v547[20 * i8] != 1402 || *(unsigned __int16 *)((char *)&v1386[-5] + i9) == 47176) )
                      {
                        v1211 = 0;
                        v1212 = 0x35;
                        v1213 = v547[20 * i8];
                        v1214 = i9 + i7;
                        v1215 = v97[0];
                        v1216 = v97[3];
                        v1217 = LODWORD(v97[5]) | HIDWORD(v97[4]) | LODWORD(v97[4]);
                        if ( v45 + 29 <= 0x5400 )
                        {
                          *(_WORD *)(v45 + v58) = 27;
                          for ( i11 = 0; (unsigned __int64)i11 < 0x1B; ++i11 )
                            *(_BYTE *)(v58 + i11 + v45 + 2) = *(&v1212 + i11);
                          v45 += 29i64;
                        }
                        if ( v78 )
                          goto LABEL_506;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_506:
      if ( LODWORD(v97[4]) == 4096 && (HIDWORD(v97[4]) == 16 || HIDWORD(v97[4]) == 32 || HIDWORD(v97[4]) == 64) )
      {
        strcpy(v266, "mmres.dll");
        v1087 = GetModuleHandleA(v266);
        if ( v1087 && v1087 == v97[1] )
        {
          v508 = 0;
          v509 = 72;
          v510 = 1459;
          v511 = v97[3];
          if ( v45 + 9 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 7;
            for ( i12 = 0; (unsigned __int64)i12 < 7; ++i12 )
              *(_BYTE *)(v58 + i12 + v45 + 2) = *(&v509 + i12);
            v45 += 9i64;
          }
        }
        else if ( HIDWORD(v97[4]) == 64 )
        {
          strcpy(v275, "mshtml.dll");
          v1086 = GetModuleHandleA(v275);
          if ( v1086 )
          {
            if ( v1086 == v97[1] )
            {
              v512 = 0;
              v513 = 72;
              v514 = 1467;
              v515 = v97[3];
              if ( v45 + 9 <= 0x5400 )
              {
                *(_WORD *)(v45 + v58) = 7;
                for ( i13 = 0; (unsigned __int64)i13 < 7; ++i13 )
                  *(_BYTE *)(v58 + i13 + v45 + 2) = *(&v513 + i13);
                v45 += 9i64;
              }
            }
          }
        }
      }
      v1055 = -1;
      if ( v97[0] != i5 )
        v1055 = -2;
      if ( LODWORD(v97[4]) == 4096
        && HIDWORD(v97[4]) != 1
        && HIDWORD(v97[4])
        && (LODWORD(v97[5]) == 0x20000 || LODWORD(v97[5]) == 0x1000000)
        && (v97[4] & 0x10000000000i64) == 0 )
      {
        v366 = 0;
        while ( *v85 && v366 < 2 && i5 != v97[3] + v97[0] )
        {
          if ( ((int (__fastcall *)(__int64, unsigned __int64, _BYTE *, __int64, _QWORD))NtReadVirtualMemory)(
                 -1i64,
                 i5,
                 v1329,
                 16i64,
                 0i64) < 0
            || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))v429)(i5, 16i64)) )
          {
            if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                   -1i64,
                   i5,
                   0i64,
                   v1359,
                   48i64,
                   &v423) >= 0
              && v1359[4] == v97[4] )
            {
              v1055 = 2;
            }
          }
          else
          {
            _mm_lfence();
            v1085(v1296, i5, 16i64);
            v367 = 0;
            while ( v1079(v1329, v1296, 16i64)
                 && !((unsigned int (__fastcall *)(unsigned __int64, __int64))v429)(i5, 16i64)
                 && !v1079(v1296, (_BYTE *)i5, 16i64) )
            {
              if ( v367 == 3 )
              {
                v1055 = 1;
                v1085(v1059, (unsigned __int64)v1296, 16i64);
                break;
              }
              if ( ((int (__fastcall *)(__int64, unsigned __int64, _BYTE *, __int64, _QWORD))NtReadVirtualMemory)(
                     -1i64,
                     i5,
                     v1329,
                     16i64,
                     0i64) < 0 )
                break;
              ++v367;
            }
          }
          ++v366;
          i5 += 4096i64;
        }
      }
      else if ( LODWORD(v97[4]) == 4096 && (HIDWORD(v97[4]) == 1 || !HIDWORD(v97[4]))
             || LODWORD(v97[4]) == (_DWORD)&loc_FFFB + 5
             || LODWORD(v97[4]) == 0x2000 )
      {
        if ( v97[4] != 4096i64 )
        {
          v136 = i5;
LABEL_564:
          if ( !*v85 || v136 >= v97[3] + v97[0] || v136 >= v97[0] + 0x1000000i64 )
            goto LABEL_581;
          while ( 1 )
          {
            if ( ((unsigned int (__fastcall *)(unsigned __int64, __int64))v429)(v136, 1i64)
              || ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                   -1i64,
                   v136,
                   0i64,
                   v1323,
                   48i64,
                   &v423) < 0
              || v1323[8] != LODWORD(v97[4])
              || v1323[8] == 4096 && v1323[9] != HIDWORD(v97[4])
              || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))v429)(v136, 1i64)) )
            {
              if ( ((unsigned int (__fastcall *)(unsigned __int64, __int64))~v1044)(v136, 1i64)
                || ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                     -1i64,
                     v136,
                     0i64,
                     v1323,
                     48i64,
                     &v423) < 0
                || v1323[8] != LODWORD(v97[4])
                || v1323[8] == 4096 && v1323[9] != HIDWORD(v97[4])
                || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))~v1044)(v136, 1i64)) )
              {
                v136 += 0x10000i64;
                goto LABEL_564;
              }
            }
            qmemcpy(v97, v1323, sizeof(v97));
            v1055 = 0;
LABEL_581:
            if ( !v1055 || v136 > 0x7FFFE1E30000i64 || v97[3] + v97[0] <= 0x7FFFE1E30000ui64 )
              goto LABEL_585;
            v136 = 0x7FFFE1E30000i64;
          }
        }
        v1055 = 0;
      }
LABEL_585:
      if ( v1055 != 255 && v362 < 3 )
      {
        v1053 = 0;
        v1054 = 33;
        v1056 = v97[0];
        v1057 = v97[3];
        v1058 = LODWORD(v97[5]) | HIDWORD(v97[4]) | LODWORD(v97[4]);
        if ( v45 + 36 <= 0x5400 )
        {
          *(_WORD *)(v45 + v58) = 34;
          for ( i14 = 0; (unsigned __int64)i14 < 0x22; ++i14 )
            *(_BYTE *)(v58 + i14 + v45 + 2) = *(&v1054 + i14);
          v45 += 36i64;
        }
        ++v362;
      }
      if ( LODWORD(v97[4]) == 4096
        && LODWORD(v97[5]) == 0x1000000
        && v97[0] == v97[1]
        && ((int (__fastcall *)(__int64, __int64, int *, __int64, _QWORD))NtReadVirtualMemory)(
             -1i64,
             v97[0] + 60i64,
             &v1036,
             4i64,
             0i64) >= 0
        && ((int (__fastcall *)(__int64, __int64, unsigned int *, __int64, _QWORD))NtReadVirtualMemory)(
             -1i64,
             v97[0] + v1036 + 8i64,
             &v62,
             4i64,
             0i64) >= 0 )
      {
        if ( v62 == 1527957760
          && (((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                -1i64,
                v97[0] + 4096i64,
                v125,
                16i64,
                0i64) >= 0
           && !LODWORD(v125[0])
           || ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                -1i64,
                v97[0] + 5246976i64,
                v125,
                16i64,
                0i64) >= 0
           && LODWORD(v125[0]) != 55830784)
          || v62 == 1511525429
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 4096i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0])
          || v62 == -56913115
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 7155712i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0])
          || v62 == 1164766483
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 439304i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 686588744
          || v62 == 1179212505
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 496776i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 686588744
          || v62 == 1204678187
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 547608i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 686588744
          || v62 == 1184887342
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 510376i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 686588744
          || v62 == 1223441111
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 734032i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 686588744
          || v62 == 1519280160
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 4931584i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0])
          || v62 == 1439191921
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 98304i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0])
          || v62 == 1541510829
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 5373952i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0])
          || v62 == 1533287111
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 5271552i64,
               v125,
               16i64,
               0i64) >= 0
          || v62 == 1610344293
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 1206672i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 3477
          || v62 == 1415178531
          && ((int (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD))NtReadVirtualMemory)(
               -1i64,
               v97[0] + 6097520i64,
               v125,
               16i64,
               0i64) >= 0
          && LODWORD(v125[0]) != 540055584 )
        {
          v1124 = 0;
          v1125[0] = 70;
          if ( v62 == 1164766483 )
          {
            v406 = 3;
          }
          else
          {
            if ( v62 == 1179212505 )
            {
              v405 = 4;
            }
            else
            {
              if ( v62 == 1204678187 )
              {
                v404 = 5;
              }
              else
              {
                if ( v62 == 1184887342 )
                {
                  v403 = 6;
                }
                else
                {
                  if ( v62 == 1223441111 )
                  {
                    v402 = 7;
                  }
                  else
                  {
                    if ( v62 == -56913115 || v62 == 1519280160 )
                    {
                      v401 = 8;
                    }
                    else
                    {
                      if ( v62 == 1439191921 )
                      {
                        v400 = 9;
                      }
                      else
                      {
                        if ( v62 == 1541510829 )
                        {
                          v399 = 10;
                        }
                        else
                        {
                          if ( v62 == 1533287111 )
                          {
                            v398 = 11;
                          }
                          else
                          {
                            if ( v62 == 1610344293 )
                            {
                              v397 = 12;
                            }
                            else
                            {
                              if ( v62 == 1415178531 )
                                v396 = 13;
                              else
                                v396 = 1;
                              v397 = v396;
                            }
                            v398 = v397;
                          }
                          v399 = v398;
                        }
                        v400 = v399;
                      }
                      v401 = v400;
                    }
                    v402 = v401;
                  }
                  v403 = v402;
                }
                v404 = v403;
              }
              v405 = v404;
            }
            v406 = v405;
          }
          v1125[1] = v406;
          v1126 = v125[0];
          v1127 = v125[1];
          if ( v45 + 20 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 18;
            for ( i15 = 0; (unsigned __int64)i15 < 0x12; ++i15 )
              *(_BYTE *)(v58 + i15 + v45 + 2) = v1125[i15];
            v45 += 20i64;
          }
        }
        else
        {
          v227 = (_DWORD *)(v97[0] + *(int *)(v97[0] + 60i64) + 24i64);
          if ( v62 == 1567786053
            || v62 == 1585947090
            || v62 == 1586741064
            || v62 == 1603085584
            || v62 == 1522141217
            || v62 == 1545022560
            || v62 == 1556182473
            || (v227[37] == 6496
             || v227[37] == 13504
             || v227[37] == 14832
             || v227[37] == 18000
             || v227[37] == 14968
             || v227[37] == 23664
             || v227[37] == 14784
             || v227[37] == 9112)
            && v62 >= 0x62000000
            && v62 < 0x63000000 )
          {
            v1218 = 0;
            v1219 = 53;
            v1220 = 1482;
            v1221 = v62;
            v1222 = (unsigned int)v227[14];
            v1223 = v227[4];
            v1224 = v227[37];
            if ( v45 + 29 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 27;
              for ( i16 = 0; (unsigned __int64)i16 < 0x1B; ++i16 )
                *(_BYTE *)(v58 + i16 + v45 + 2) = *(&v1219 + i16);
              v45 += 29i64;
            }
          }
        }
      }
    }
    result = (unsigned __int8)*v85;
    if ( *v85 )
    {
      v1106 = ~v1044;
      v407 = ((int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
               -1i64,
               ~v1044,
               0i64,
               v97,
               48i64,
               &v423) < 0;
      v72 = v407;
      if ( v407 || LODWORD(v97[4]) != 4096 || LODWORD(v97[5]) != 0x1000000 && LODWORD(v97[5]) != 0x40000 )
      {
        v1225 = 0;
        v1226 = 53;
        v1227 = 1449;
        v1228 = v1106;
        v1105 = v72 ? 0i64 : v97[0];
        v1229 = v1105;
        v1104 = v72 ? 0i64 : v97[3];
        v1230 = v1104;
        v408 = v72 ? 0 : LODWORD(v97[5]) | HIDWORD(v97[4]) | LODWORD(v97[4]);
        v1231 = v408;
        if ( v45 + 29 <= 0x5400 )
        {
          *(_WORD *)(v45 + v58) = 27;
          for ( i17 = 0; (unsigned __int64)i17 < 0x1B; ++i17 )
            *(_BYTE *)(v58 + i17 + v45 + 2) = *(&v1226 + i17);
          v45 += 29i64;
        }
      }
      v92 = 0;
      v1034 = 0;
      strcpy(v344, "CreateToolhelp32Snapshot");
      v1097 = (__int64 (__fastcall *)(__int64, _QWORD))GetProcAddress(v75, v344);
      v491 = v1097(2i64, 0i64);
      if ( v491 != -1 )
      {
        strcpy(v306, "Process32First");
        v1258 = (unsigned int (__fastcall *)(__int64, PROCESSENTRY32 *))GetProcAddress(v75, v306);
        v1250.dwSize = 304;
        if ( v1258(v491, &v1250) )
        {
          strcpy(v302, "Process32Next");
          v1272 = (unsigned int (__fastcall *)(__int64, PROCESSENTRY32 *))GetProcAddress(v75, v302);
          steam_pid = 0;
          lsass_pid = 0;
          explorer_pid = 0;
          cmd_pid = 0;
          v371 = 0;
          v59 = 0;
          is_notepad_open = 0;
          v1284 = 0;
          do
          {
            v1119[11] = 0;
            v112 = OpenProcess(4096i64, 0i64, v1250.th32ProcessID);
            v57 = 128;
            v409 = v112
                && v493(v112, 0i64, v1379, &v57)
                && (LODWORD(v43) = 255,
                    (v57 = v228(65001i64, 0i64, (__int64 *)v1379, v57, (__int64)&v1121, v43, 0i64, 0i64)) != 0);
            v73 = v409;
            if ( v409 )
            {
              if ( v506(v1379, 0i64, v1363) )
                v410 = v1363[8];
              else
                v410 = 0;
              v224 = v410;
            }
            else
            {
              v1035 = v363();
              v913 = v1250.th32ProcessID;
              v914 = 0;
              v915 = 512;
              v916 = (__int64 *)v1383;
              if ( (int)v233(88i64, (unsigned int *)&v913, 24i64, 0i64) < 0 )
              {
                v57 = 0;
              }
              else
              {
                v1259 = &v1121;
                LODWORD(v43) = 255;
                v57 = v228(65001i64, 0i64, v916, v914 / 2, (__int64)&v1121, v43, 0i64, 0i64);
              }
              if ( v112 && !v73 && v57 && *(_DWORD *)&v1119[v57 + 6] == 778925924 )
              {
                *(int *)((char *)&v1121 + v57) = v1035;
                goto LABEL_995;
              }
              if ( !v1250.szExeFile[0] && !v57 )
              {
                v913 = v1250.th32ParentProcessID;
                v914 = 0;
                v915 = 512;
                v916 = (__int64 *)v1383;
                if ( (int)v233(88i64, (unsigned int *)&v913, 24i64, 0i64) >= 0 )
                {
                  v1260 = &v1121;
                  LODWORD(v43) = 255;
                  v57 = v228(65001i64, 0i64, v916, v914 / 2, (__int64)&v1121, v43, 0i64, 0i64);
                }
              }
              v224 = 0;
            }
            *(int *)((char *)&v1121 + v57) = v224;
            if ( v112 && !v73 && v57 && (unsigned int)v363() == 31 )
            {
              strcpy(v315, "GetProcessTimes");
              v1261 = (unsigned int (__fastcall *)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))GetProcAddress(v75, v315);
              if ( !v1261(v112, &v1021, &v1021, &v1021, &v1021) && (unsigned int)v363() == 31 )
              {
                v82(v112);
                v112 = OpenProcess(4096i64, 0i64, v1250.th32ProcessID);
                if ( v112 )
                {
                  *(int *)((char *)&v1121 + v57) = 0;
                  goto LABEL_995;
                }
              }
              else
              {
                v82(v112);
                v112 = 0i64;
              }
            }
            if ( *(_DWORD *)v1250.szExeFile == 'aets' && *(_DWORD *)&v1250.szExeFile[4] == 'xe.m' )
            {
              steam_pid = v1250.th32ProcessID;
            }
            else if ( *(_DWORD *)v1250.szExeFile == 'sasl' && *(_DWORD *)&v1250.szExeFile[4] == 'xe.s' )
            {
              lsass_pid = v1250.th32ProcessID;
            }
            else if ( *(_DWORD *)v1250.szExeFile == 'lpxe'
                   && *(_DWORD *)&v1250.szExeFile[4] == 'rero'
                   && *(_DWORD *)&v1250.szExeFile[8] == 'exe.'
                   && !explorer_pid )
            {
              explorer_pid = v1250.th32ProcessID;
            }
            else if ( *(_DWORD *)v1250.szExeFile == '.dmc' && *(__int16 *)&v1250.szExeFile[4] == 'xe' )
            {
              cmd_pid = v1250.th32ProcessID;
            }
            else if ( *(_DWORD *)v1250.szExeFile == 'hcvs' && *(_DWORD *)&v1250.szExeFile[4] == '.tso' && v112 && !v59 )
            {
              strcpy(v349, "NtQueryInformationProcess");
              v1096 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))GetProcAddress(v135, v349);
              if ( v1096(v112, 61i64, (__int64 *)&v59, 1i64, 0i64) >= 0 && v59 == 81 )
              {
                v59 = 0;
              }
              else if ( !v59 )
              {
                v1365 = 64i64;
                if ( v1096(v112, 0i64, &v1365, 64i64, 0i64) >= 0 && (v1366 & 1) != 0 )
                  v59 = 1;
              }
            }
            else if ( *(_DWORD *)v1250.szExeFile == 'eton' && *(_DWORD *)&v1250.szExeFile[4] == '.dap' )
            {
              is_notepad_open = 1;
            }
            if ( *(_DWORD *)v1250.szExeFile == '.mwd' )
            {
              if ( !v1250.th32ProcessID || *(_DWORD *)&v1119[v57 + 6] != '.mwd' )
                goto LABEL_995;
              v1034 = v1250.th32ProcessID;
            }
            if ( v57 )
            {
              if ( v1250.th32ProcessID != v134() && v371 < 10 )
              {
                v411 = v1250.szExeFile[0] == 0;
                v61 = v1250.szExeFile[0] == 0;
                if ( !v1250.szExeFile[0] )
                  goto LABEL_864;
                v67 = 0;
                v68 = 0;
                v79 = 0;
                v80 = 0;
                v101 = v57;
                v368 = 0;
                while ( 1 )
                {
                  if ( *((_BYTE *)&v1121 + --v101) == 92 )
                    ++v368;
                  if ( !v101 )
                    break;
                  if ( v101 < (int)(v57 - 8) )
                  {
                    v412 = *(int *)((char *)&v1121 + v101) == 1819310181
                        && *(int *)((char *)&v1122 + v101) == 1919251055
                        || *(int *)((char *)&v1121 + v101) == 913531503 && *(int *)((char *)&v1122 + v101) == 2019896884;
                    v61 = v412;
                    v67 = v412;
                    if ( v412 )
                      goto LABEL_864;
                  }
                }
                if ( v368 > 2 )
                {
                  for ( i18 = 0; i18 < (int)(v57 - 6); ++i18 )
                  {
                    if ( *(int *)((char *)&v1121 + i18) == 1936016476
                      && *(int *)((char *)&v1122 + i18) == 1886352491
                      && *((_BYTE *)v1123 + i18) == 92 )
                    {
                      goto LABEL_864;
                    }
                    v414 = *(int *)((char *)&v1121 + i18) == 1852405596 && *(int *)((char *)&v1122 + i18) == 779249014
                        || (*(int *)((char *)&v1121 + i18) == 1819178323 && *(int *)((char *)&v1122 + i18) == 1852401519
                         || *(int *)((char *)&v1121 + i18) == -426667803 ? (v413 = 1) : (v413 = 0),
                            (v80 = v413) != 0 || *(int *)((char *)&v1121 + i18) == 1547252019 && v224 == 2573824);
                    v61 = v414;
                    if ( v414
                      || *(int *)((char *)&v1121 + i18) == 1818838620 && *(int *)((char *)&v1122 + i18) == 1667584613 )
                    {
                      goto LABEL_864;
                    }
                    if ( *(int *)((char *)&v1121 + i18) == 1668236380
                      && *(int *)((char *)&v1122 + i18) == 1852140917
                      && *(_WORD *)((char *)v1123 + i18) == 29556
                      && *((_BYTE *)v1123 + i18 + 2) == 92
                      || *(int *)((char *)&v1121 + i18) == 2003780700
                      && *(int *)((char *)&v1122 + i18) == 1634692206
                      && *(_WORD *)((char *)v1123 + i18) == 29540
                      && *((_BYTE *)v1123 + i18 + 2) == 92
                      || *(int *)((char *)&v1121 + i18) == 1634685532
                      && *(int *)((char *)&v1122 + i18) == 1735289197
                      && *((_BYTE *)v1123 + i18) == 92
                      || *(int *)((char *)&v1121 + i18) == 779119988 && *(_WORD *)((char *)&v1122 + i18) == 30821
                      || *(int *)((char *)&v1121 + i18) == 1702129518 && *(int *)((char *)&v1122 + i18) == 778330480
                      || *(int *)((char *)&v1121 + i18) == 774778460 && *(_WORD *)((char *)&v1122 + i18) == 23598
                      || *(int *)((char *)&v1121 + i18) == 778333539 && *(_WORD *)((char *)&v1122 + i18) == 30821
                      || *(int *)((char *)&v1121 + i18) == 1852401001 && *(int *)((char *)&v1122 + i18) == 1818326131 )
                    {
                      goto LABEL_864;
                    }
                    v418 = *(int *)((char *)&v1121 + i18) == 1766086222 && *(int *)((char *)&v1122 + i18) == 1634496627;
                    v79 = v418;
                    if ( v418
                      || *(int *)((char *)&v1121 + i18) == 1835357276 && *(_WORD *)((char *)&v1122 + i18) == 23664 )
                    {
                      goto LABEL_864;
                    }
                    v417 = *(int *)((char *)&v1121 + i18) == 1702130553 && *(int *)((char *)&v1122 + i18) == 1546793837;
                    v68 = v417;
                    if ( v417 || !v73 )
                      goto LABEL_864;
                  }
                }
                else
                {
LABEL_864:
                  strcpy(v312, "GetProcessTimes");
                  v1023 = (unsigned int (__fastcall *)(__int64, __int64 *, __int64 *, char *, char *))GetProcAddress(v75, v312);
                  if ( v1023(v112, &v517, &v252, (char *)&v516, (char *)&v492)
                    && (v37 = v1029(), v1023(v37, &v428, &v252, (char *)&v252, (char *)&v252))
                    && v428 - v517 <= 900000000
                    && v428 - v517 >= -300000000
                    || v61
                    || v79 )
                  {
                    v91 = steam_pid != 0;
                    *((_BYTE *)&v1122 + v57) = steam_pid != 0;
                    if ( explorer_pid && v1250.th32ParentProcessID == explorer_pid )
                    {
                      *((_BYTE *)&v1122 + v57) |= 2u;
                    }
                    else if ( lsass_pid && v1250.th32ParentProcessID == lsass_pid )
                    {
                      *((_BYTE *)&v1122 + v57) |= 8u;
                    }
                    else if ( cmd_pid && v1250.th32ParentProcessID == cmd_pid )
                    {
                      *((_BYTE *)&v1122 + v57) |= 0x10u;
                    }
                    else
                    {
                      v1022 = OpenProcess(4096i64, 0i64, v1250.th32ParentProcessID);
                      if ( v1022 )
                      {
                        strcpy(v327, "GetExitCodeProcess");
                        v1262 = (unsigned int (__fastcall *)(__int64, int *))GetProcAddress(v75, v327);
                        if ( v1262(v1022, &v1033) && v1033 != 259 )
                          *((_BYTE *)&v1122 + v57) |= 4u;
                        v82(v1022);
                      }
                      else if ( (unsigned int)v363() != 5 )
                      {
                        *((_BYTE *)&v1122 + v57) |= 4u;
                      }
                    }
                    if ( *((unsigned __int8 *)&v1122 + v57) > 1u || v61 )
                    {
                      v422(1000i64);
                      ++v371;
                      if ( v1023(v112, &v252, &v252, (char *)&v1123[1] + v57 + 1, (char *)&v1123[3] + v57 + 1) || v61 )
                      {
                        *(_QWORD *)((char *)&v1123[1] + v57 + 1) -= v516;
                        *(_QWORD *)((char *)&v1123[3] + v57 + 1) -= v492;
                        if ( (*((_BYTE *)&v1122 + v57) & 8) != 0
                          || (__int64)(*(_QWORD *)((char *)&v1123[3] + v57 + 1)
                                     + *(_QWORD *)((char *)&v1123[1] + v57 + 1)) >= 500000
                          && !v67
                          && !v68
                          || v61 && !v67 && !v80 )
                        {
                          v1120 = 64;
                          *(_QWORD *)((char *)&v1122 + v57 + 1) = v428 - v517;
                          if ( v45 + v57 + 30 + 2 <= 0x5400 )
                          {
                            *(_WORD *)(v45 + v58) = v57 + 30;
                            for ( i19 = 0; i19 < v57 + 30; ++i19 )
                              *(_BYTE *)(v58 + i19 + v45 + 2) = *(&v1120 + i19);
                            v45 += v57 + 32;
                          }
                          goto LABEL_1002;
                        }
                        if ( v67 && *(__int64 *)((char *)&v1123[1] + v57 + 1) >= 1000000
                          || v68
                          && (__int64)(*(_QWORD *)((char *)&v1123[3] + v57 + 1)
                                     + *(_QWORD *)((char *)&v1123[1] + v57 + 1)) >= 2500000 )
                        {
                          v386 = 0i64;
                          v222 = 336;
                          while ( 1 )
                          {
                            v222 += 1024;
                            v386 = v421((unsigned int *)v386, v222);
                            if ( !v386 )
                              break;
                            v70 = v233(5i64, (unsigned int *)v386, v222, &v222);
                            if ( v70 != -1073741820 )
                            {
                              if ( v70 >= 0 )
                              {
                                v237 = (unsigned int *)v386;
                                while ( *v85 )
                                {
                                  if ( *((_QWORD *)v237 + 10) == v1250.th32ProcessID )
                                  {
                                    for ( i20 = 0; *v85 && i20 < v237[1]; ++i20 )
                                    {
                                      _mm_lfence();
                                      strcpy(v276, "OpenThread");
                                      v1102 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))GetProcAddress(v75, v276);
                                      v236 = v1102(2048i64, 0i64, v237[20 * i20 + 76]);
                                      if ( v236 )
                                      {
                                        strcpy(v305, "GetThreadTimes");
                                        GetThreadTimes = (unsigned int (__fastcall *)(__int64, _FILETIME *, _FILETIME *, _FILETIME *, _FILETIME *))GetProcAddress(v75, v305);
                                        if ( GetThreadTimes(
                                               v236,
                                               (_FILETIME *)&v1263,
                                               (_FILETIME *)&v252,
                                               (_FILETIME *)&v516,
                                               (_FILETIME *)&v492)
                                          && (*(_DWORD *)v1250.szExeFile == 913531503
                                           && (*((_BYTE *)&v1122 + v57) & 4) != 0
                                           || v516 >= 1000000 && !v492
                                           || v68) )
                                        {
                                          v422(1000i64);
                                          if ( GetThreadTimes(
                                                 v236,
                                                 (_FILETIME *)&v252,
                                                 (_FILETIME *)&v252,
                                                 (_FILETIME *)((char *)&v1123[7] + v57 + 1),
                                                 (_FILETIME *)((char *)&v1123[9] + v57 + 1)) )
                                          {
                                            if ( (*(_QWORD *)((char *)&v1123[7] + v57 + 1) -= v516,
                                                  *(_QWORD *)((char *)&v1123[9] + v57 + 1) -= v492,
                                                  v67)
                                              && *(__int64 *)((char *)&v1123[7] + v57 + 1) >= 500000
                                              && (*(_DWORD *)v1250.szExeFile == 913531503
                                               || !*(_QWORD *)((char *)&v1123[9] + v57 + 1))
                                              || v68
                                              && (__int64)(*(_QWORD *)((char *)&v1123[9] + v57 + 1)
                                                         + *(_QWORD *)((char *)&v1123[7] + v57 + 1)) >= 2500000 )
                                            {
                                              _mm_lfence();
                                              v1120 = 74;
                                              *(_QWORD *)((char *)&v1122 + v57 + 1) = v428 - v517;
                                              *(_QWORD *)((char *)&v1123[5] + v57 + 1) = v428 - v1263;
                                              *(_QWORD *)((char *)&v1123[11] + v57 + 1) = *(_QWORD *)&v237[20 * i20 + 72];
                                              v82(v236);
                                              v236 = v1102(64i64, 0i64, v237[20 * i20 + 76]);
                                              if ( v236 )
                                              {
                                                strcpy(v346, "NtQueryInformationThread");
                                                v1264 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))GetProcAddress(v135, v346);
                                                v416 = v1264(v236, 9i64, &v1265, 8i64, 0i64);
                                                if ( v416 < 0 )
                                                  v1101 = v416;
                                                else
                                                  v1101 = v1265;
                                                *(_QWORD *)((char *)&v1123[11] + v57 + 1) = v1101;
                                              }
                                              *(_QWORD *)((char *)&v1123[13] + v57 + 1) = 0i64;
                                              *(_QWORD *)((char *)&v1123[15] + v57 + 1) = 0i64;
                                              v1024 = OpenProcess(16i64, 0i64, v1250.th32ProcessID);
                                              if ( v1024 )
                                              {
                                                ((void (__fastcall *)(__int64, _QWORD, char *, __int64, _QWORD))NtReadVirtualMemory)(
                                                  v1024,
                                                  *(_QWORD *)((char *)&v1123[11] + v57 + 1),
                                                  (char *)&v1123[13] + v57 + 1,
                                                  16i64,
                                                  0i64);
                                                v82(v1024);
                                              }
                                              if ( v45 + v57 + 78 + 2 <= 0x5400 )
                                              {
                                                *(_WORD *)(v45 + v58) = v57 + 78;
                                                for ( i21 = 0; i21 < v57 + 78; ++i21 )
                                                  *(_BYTE *)(v58 + i21 + v45 + 2) = *(&v1120 + i21);
                                                v45 += v57 + 80;
                                              }
                                            }
                                          }
                                        }
                                        if ( v236 )
                                          v82(v236);
                                      }
                                    }
                                    break;
                                  }
                                  if ( !*v237 )
                                    break;
                                  v237 = (unsigned int *)((char *)v237 + *v237);
                                }
                              }
                              v361((unsigned int *)v386);
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( steam_pid
                && *(_DWORD *)&v1119[v57 + 1] == 1819310181
                && *(_DWORD *)&v1119[v57 + 5] == 1919251055
                && *(_DWORD *)&v1119[v57 + 9] == 1702389038
                && v1250.th32ParentProcessID == steam_pid )
              {
                goto LABEL_995;
              }
              if ( *(_DWORD *)&v1119[v57] == 1886217556
                && *(_DWORD *)&v1119[v57 + 9] == 1701603654
                && *(_DWORD *)&v1250.szExeFile[4] == 1702389038
                && (v1250.szExeFile[0] >= 65 && v1250.szExeFile[0] <= 90
                 || v1250.szExeFile[1] >= 65 && v1250.szExeFile[1] <= 90
                 || v1250.szExeFile[2] >= 65 && v1250.szExeFile[2] <= 90
                 || v1250.szExeFile[3] >= 65 && v1250.szExeFile[3] <= 90) )
              {
                v1121 = *(_DWORD *)v1250.szExeFile;
                v1122 = *(_DWORD *)&v1250.szExeFile[4];
                v57 = 8;
                v1123[0] = 255;
LABEL_995:
                v1120 = 56;
                if ( v45 + v57 + 5 + 2 <= 0x5400 )
                {
                  *(_WORD *)(v45 + v58) = v57 + 5;
                  for ( i22 = 0; i22 < v57 + 5; ++i22 )
                    *(_BYTE *)(v58 + i22 + v45 + 2) = *(&v1120 + i22);
                  v45 += v57 + 7;
                }
                goto LABEL_1000;
              }
              if ( *(_DWORD *)&v1119[v57 + 7] == 1700026952 )
                goto LABEL_995;
              for ( i23 = 0; i23 < (int)(v57 - 4); ++i23 )
              {
                if ( *(int *)((char *)&v1121 + i23) == 543649362
                  || *(__int16 *)((char *)&v1121 + i23) == 41191
                  && *((unsigned __int8 *)&v1121 + i23 + 2) == -127
                  && *((unsigned __int8 *)&v1121 + i23 + 3) >= 0x30u
                  && *((unsigned __int8 *)&v1121 + i23 + 3) <= 0x39u
                  || *(int *)((char *)&v1121 + i23) == 541544018
                  || *(int *)((char *)&v1121 + i23) == -1864023211
                  || *(int *)((char *)&v1121 + i23) == 775302706 && *(_WORD *)((char *)&v1122 + i23) == 30821
                  || *(int *)((char *)&v1121 + i23) == -425161754 && *(int *)((char *)&v1122 + i23) == -1125537099 )
                {
                  goto LABEL_995;
                }
              }
            }
            if ( *(_DWORD *)v1250.szExeFile == 'daoL' && *(_DWORD *)&v1250.szExeFile[4] == 'rbil'
              || *(_DWORD *)v1250.szExeFile == ' gnR'
              || v224 == 382752
              && (*(_DWORD *)v1250.szExeFile != 'emaG' || *(_DWORD *)&v1250.szExeFile[4] != 'revO')
              && (*(_DWORD *)v1250.szExeFile != 'emag' || *(_DWORD *)&v1250.szExeFile[4] != 'revo')
              || v224 == 11478528 )
            {
              goto LABEL_995;
            }
LABEL_1000:
            if ( v112 )
              v82(v112);
LABEL_1002:
            if ( (*(_DWORD *)v1250.szExeFile == 'emaG'
               || *(_DWORD *)v1250.szExeFile == 'emag'
               || *(_DWORD *)v1250.szExeFile == 'EMAG')
              && (*(_DWORD *)&v1250.szExeFile[4] == 'revO'
               || *(_DWORD *)&v1250.szExeFile[4] == 'revo'
               || *(_DWORD *)&v1250.szExeFile[4] == 'REVO')
              && (*(_DWORD *)&v1250.szExeFile[8] == 'Uyal'
               || *(_DWORD *)&v1250.szExeFile[8] == 'uyal'
               || *(_DWORD *)&v1250.szExeFile[8] == 'UYAL') )
            {
              v92 = 1;
              v357 = OpenProcess(1024i64, 0i64, v1250.th32ProcessID);
              if ( v357 )
              {
                for ( i24 = 0i64; *v85; i24 = v441 + v440 )
                {
                  v415 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, unsigned __int64 *, __int64, __int64 *))NtQueryVirtualMemory)(
                           v357,
                           i24,
                           0i64,
                           &v440,
                           48i64,
                           &v1343);
                  if ( v415 < 0 )
                    break;
                  if ( v442 == 4096 && v444 == 0x20000 && (v443 == 16 || v443 == 32 || v443 == 64) )
                  {
                    if ( v441 > 0x10000 )
                    {
                      v1114[24] = 0;
                      v1115 = 59;
                      v1116 = v440;
                      v1117 = v441;
                      v1118 = v444 | v443 | v442;
                      if ( v45 + 19 <= 0x5400 )
                      {
                        *(_WORD *)(v45 + v58) = 17;
                        for ( i25 = 0; (unsigned __int64)i25 < 0x11; ++i25 )
                          *(_BYTE *)(v58 + i25 + v45 + 2) = *(&v1115 + i25);
                        v45 += 19i64;
                      }
                    }
                    if ( v59 )
                    {
                      v1169 = 0;
                      v1170 = 53;
                      v1171 = 1457;
                      v1172 = v59;
                      v1173 = v440;
                      v1174 = v441;
                      v1175 = v444 | v443 | v442;
                      if ( v45 + 29 <= 0x5400 )
                      {
                        *(_WORD *)(v45 + v58) = 27;
                        for ( i26 = 0; (unsigned __int64)i26 < 0x1B; ++i26 )
                          *(_BYTE *)(v58 + i26 + v45 + 2) = *(&v1170 + i26);
                        v45 += 29i64;
                      }
                    }
                    v1025 = OpenProcess(16i64, 0i64, v1250.th32ProcessID);
                    if ( v1025 )
                    {
                      v954 = 8;
                      strcpy(v955, "H");
                      strcpy(v956, "o");
                      strcpy(v957, "m");
                      strcpy(v958, "e");
                      memset(v959, 0, sizeof(v959));
                      v960 = 4;
                      strcpy(v961, "F");
                      strcpy(v962, "1");
                      memset(v963, 0, sizeof(v963));
                      v964 = 16;
                      v965 = -1;
                      v966 = -1;
                      v967 = '\x83';
                      v968 = -60;
                      v969 = 8;
                      v970 = -61;
                      v971 = 0;
                      v972 = 0;
                      v973 = 0;
                      v974 = 0;
                      v975 = 0;
                      v976 = 0;
                      v977 = 0;
                      v978 = 0;
                      v979 = 0;
                      v980 = 0;
                      memset(v981, 0, sizeof(v981));
                      v982 = 24;
                      strcpy(v983, "\\");
                      strcpy(&v983[2], "\\");
                      strcpy(v984, ".");
                      strcpy(v985, "\\");
                      strcpy(&v985[2], "p");
                      strcpy(v986, "i");
                      strcpy(v987, "p");
                      strcpy(v988, "e");
                      strcpy(v989, "\\");
                      strcpy(&v989[2], "%");
                      strcpy(v990, "s");
                      v990[2] = 0;
                      v990[3] = 0;
                      v991 = '\n';
                      v992 = -57;
                      v993 = 6;
                      v994 = 0;
                      v995 = 0;
                      v996 = 0;
                      v997 = 0;
                      v998 = -58;
                      v999 = 71;
                      v1000 = 3;
                      v1001 = 0;
                      memset(v1002, 0, sizeof(v1002));
                      v1003 = 8;
                      v1004 = 105;
                      v1005 = -64;
                      v1006 = 24;
                      v1007 = 1;
                      v1008 = 0;
                      v1009 = 0;
                      v1010 = 51;
                      v1011 = -46;
                      memset(v1012, 0, sizeof(v1012));
                      v146 = 0;
                      for ( i27 = v440; *v85 && i27 != v441 + v440; i27 += 4096i64 )
                      {
                        if ( ((int (__fastcall *)(__int64, unsigned __int64, _BYTE *, __int64, _QWORD))NtReadVirtualMemory)(
                               v1025,
                               i27,
                               v1390,
                               4096i64,
                               0i64) >= 0 )
                        {
                          v117 = 0;
LABEL_1038:
                          if ( (unsigned __int64)v117 < 6 )
                          {
                            for ( i28 = 0; ; ++i28 )
                            {
                              if ( (unsigned int)(*(&v954 + 7 * v117) + i28) > 0x1000ui64 )
                              {
                                ++v117;
                                goto LABEL_1038;
                              }
                              for ( i29 = 0;
                                    i29 < *(&v954 + 7 * v117)
                                 && v1390[i29 + i28] == *((_BYTE *)&v954 + 28 * v117 + (int)i29 + 4);
                                    ++i29 )
                              {
                                ;
                              }
                              if ( i29 == *(&v954 + 7 * v117) )
                                break;
                            }
                            v1232 = 0;
                            v1233 = 53;
                            v1234 = 1388;
                            v1235 = i28 + i27;
                            v1236 = v440;
                            v1237 = v441;
                            v1238 = v444 | v443 | v442;
                            if ( v45 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v45 + v58) = 27;
                              for ( i30 = 0; (unsigned __int64)i30 < 0x1B; ++i30 )
                                *(_BYTE *)(v58 + i30 + v45 + 2) = *(&v1233 + i30);
                              v45 += 29i64;
                            }
                            break;
                          }
                          if ( v441 <= 0x10000 )
                          {
                            for ( i31 = 0; (unsigned __int64)i31 < 0xFFC; ++i31 )
                            {
                              if ( ((unsigned __int8)v1390[i31] == 233 || (unsigned __int8)v1390[i31] == 144)
                                && i31 + i27 + *(int *)&v1390[i31 + 1] + 5 >= v440
                                && i31 + i27 + *(int *)&v1390[i31 + 1] + 5 < v441 + v440
                                && !v146++ )
                              {
                                v1148 = i31 + i27 - v440;
                                v1149 = *(_QWORD *)&v1390[i31];
                                v1150 = *(_QWORD *)&v1390[i31 + 8];
                              }
                            }
                          }
                        }
                      }
                      if ( v146 >= 100 )
                      {
                        v1145[16] = 0;
                        v1146 = 59;
                        v1147 = v146 + v441;
                        if ( v45 + 25 <= 0x5400 )
                        {
                          *(_WORD *)(v45 + v58) = 23;
                          for ( i32 = 0; (unsigned __int64)i32 < 0x17; ++i32 )
                            *(_BYTE *)(v58 + i32 + v45 + 2) = *(&v1146 + i32);
                          v45 += 25i64;
                        }
                      }
                      v82(v1025);
                    }
                  }
                }
                if ( v415 == 0xC0000022 )
                {
                  v463 = 0;
                  v464 = 59;
                  v465 = -1073741790;
                  if ( v45 + 7 <= 0x5400 )
                  {
                    *(_WORD *)(v45 + v58) = 5;
                    for ( i33 = 0; (unsigned __int64)i33 < 5; ++i33 )
                      *(_BYTE *)(v58 + i33 + v45 + 2) = *(&v464 + i33);
                    v45 += 7i64;
                  }
                }
                v82(v357);
              }
              else if ( (unsigned int)v363() == 5 )
              {
                v198 = 0;
                v199 = 59;
                if ( v45 + 3 <= 0x5400 )
                {
                  *(_WORD *)(v45 + v58) = 1;
                  for ( i34 = 0; !i34; ++i34 )
                    *(_BYTE *)(v58 + v45 + 2) = v199;
                  v45 += 3i64;
                }
                v137 = OpenProcess(4096i64, 0i64, v1250.th32ProcessID);
                if ( v137 )
                {
                  strcpy(v351, "NtQueryInformationProcess");
                  v1098 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))GetProcAddress(v135, v351);
                  v74 = 0;
                  if ( v1098(v137, 0x3Di64, (__int64 *)&v74, 1i64, 0i64) < 0 )
                  {
                    _mm_lfence();
                    v1367 = 64i64;
                    if ( v1098(v137, 0i64, &v1367, 64i64, 0i64) >= 0 && (v1368 & 1) != 0 )
                      v74 = 1;
                  }
                  if ( v74 )
                  {
                    v460 = 0;
                    v461 = 59;
                    v462 = v74 + 4096;
                    if ( v45 + 7 <= 0x5400 )
                    {
                      *(_WORD *)(v45 + v58) = 5;
                      for ( i35 = 0; (unsigned __int64)i35 < 5; ++i35 )
                        *(_BYTE *)(v58 + i35 + v45 + 2) = *(&v461 + i35);
                      v45 += 7i64;
                    }
                  }
                  v82(v137);
                }
              }
              v357 = OpenProcess(16i64, 0i64, v1250.th32ProcessID);
              if ( v357 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, _QWORD, __int64 *, __int64, _QWORD))NtReadVirtualMemory)(
                       v357,
                       0i64,
                       &v364,
                       1i64,
                       0i64) == -1073741790 )
                {
                  v457 = 0;
                  v458 = 59;
                  v459 = -1073741790;
                  if ( v45 + 7 <= 0x5400 )
                  {
                    *(_WORD *)(v45 + v58) = 5;
                    for ( i36 = 0; (unsigned __int64)i36 < 5; ++i36 )
                      *(_BYTE *)(v58 + i36 + v45 + 2) = *(&v458 + i36);
                    v45 += 7i64;
                  }
                }
                v82(v357);
              }
              v544 = 0i64;
              v546 = v1097(24i64, v1250.th32ProcessID);
              if ( v546 != -1 )
              {
                strcpy(v301, "Module32First");
                v1266 = (unsigned int (__fastcall *)(__int64, MODULEENTRY32 *))GetProcAddress(v75, v301);
                v1364.dwSize = 568;
                if ( v1266(v546, &v1364) )
                {
                  strcpy(v290, "Module32Next");
                  v1267 = (unsigned int (__fastcall *)(__int64, MODULEENTRY32 *))GetProcAddress(v75, v290);
                  do
                  {
                    if ( *(_DWORD *)v1364.szModule == 'iugv' && *(_DWORD *)&v1364.szModule[4] == '.s_2'
                      || *(_DWORD *)v1364.szModule == 'IUGV' && *(_DWORD *)&v1364.szModule[4] == '.S_2' )
                    {
                      v257 = OpenProcess(1040i64, 0i64, v1250.th32ProcessID);
                      if ( v257 )
                      {
                        if ( ((int (__fastcall *)(__int64, unsigned __int8 *, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                               v257,
                               v1364.modBaseAddr + 278281,
                               v1372,
                               30i64,
                               0i64) >= 0
                          && v1372[0] == 831193194
                          && v1372[1] == -1961076993
                          && v1373 == 13
                          && v1375 == 38655
                          && v1376 == 3467
                          && v1377 == -1862336117 )
                        {
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                 v257,
                                 v1374,
                                 v1372,
                                 4i64,
                                 0i64) >= 0 )
                          {
                            _mm_lfence();
                            if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                   v257,
                                   v1372[0],
                                   v1372,
                                   4i64,
                                   0i64) >= 0 )
                            {
                              _mm_lfence();
                              if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                     v257,
                                     v1372[0],
                                     v1372,
                                     1068i64,
                                     0i64) >= 0 )
                              {
                                for ( i37 = 0; (unsigned __int64)i37 < 0x42C; i37 += 4 )
                                {
                                  _mm_lfence();
                                  ((void (__fastcall *)(__int64, _QWORD, _BYTE *, __int64, _QWORD))NtReadVirtualMemory)(
                                    v257,
                                    (unsigned int)v1372[i37 / 4u],
                                    v1145,
                                    16i64,
                                    0i64);
                                  if ( (unsigned __int8 *)(unsigned int)v1372[i37 / 4u] < v1364.modBaseAddr
                                    || (unsigned __int8 *)(unsigned int)v1372[i37 / 4u] >= &v1364.modBaseAddr[(unsigned __int64)v1364.modBaseSize]
                                    || v1145[0] == 204 )
                                  {
                                    v1141 = 0;
                                    v1142 = 59;
                                    v1143 = i37;
                                    v1144 = v1372[i37 / 4u];
                                    if ( v45 + 25 <= 0x5400 )
                                    {
                                      *(_WORD *)(v45 + v58) = 23;
                                      for ( i38 = 0; (unsigned __int64)i38 < 0x17; ++i38 )
                                        *(_BYTE *)(v58 + i38 + v45 + 2) = *(&v1142 + i38);
                                      v45 += 25i64;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        for ( i39 = v1364.modBaseAddr;
                              i39 < &v1364.modBaseAddr[(unsigned __int64)v1364.modBaseSize];
                              i39 = (unsigned __int8 *)(v1165 + v1164[0]) )
                        {
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, unsigned __int8 *, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                                 v257,
                                 i39,
                                 0i64,
                                 v1164,
                                 48i64,
                                 &v1348) < 0 )
                            break;
                          if ( (v1167 == 16 || v1167 == 32 || v1167 == 64) && v1165 == 4096 )
                          {
                            v1204 = 0;
                            v1205 = 53;
                            v1206 = 1388;
                            v1207 = v1164[0] - v1164[1];
                            v1208 = v1164[0];
                            v1209 = 4096;
                            v1210 = v1168 | v1167 | v1166;
                            if ( v45 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v45 + v58) = 27;
                              for ( i40 = 0; (unsigned __int64)i40 < 0x1B; ++i40 )
                                *(_BYTE *)(v58 + i40 + v45 + 2) = *(&v1205 + i40);
                              v45 += 29i64;
                            }
                          }
                        }
                        v82(v257);
                      }
                    }
                    else if ( *(_DWORD *)v1364.szModule == 'emag'
                           && *(_DWORD *)&v1364.szModule[4] == 'revo'
                           && *(_DWORD *)&v1364.szModule[8] == 'uyal'
                           && *(_DWORD *)&v1364.szModule[12] == 'ld.i' )
                    {
                      v256 = OpenProcess(1040i64, 0i64, v1250.th32ProcessID);
                      if ( v256 )
                      {
                        if ( ((int (__fastcall *)(__int64, unsigned __int8 *, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                               v256,
                               v1364.modBaseAddr + 609277,
                               v918,
                               16i64,
                               0i64) >= 0
                          && v918[0] == -1194537780
                          && v918[2] == -858993469 )
                        {
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                 v256,
                                 v918[1],
                                 v918,
                                 4i64,
                                 0i64) >= 0 )
                          {
                            _mm_lfence();
                            if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                   v256,
                                   v918[0],
                                   v918,
                                   20i64,
                                   0i64) >= 0 )
                            {
                              for ( i41 = 0; (unsigned __int64)i41 < 0x14; i41 += 4 )
                              {
                                _mm_lfence();
                                ((void (__fastcall *)(__int64, _QWORD, unsigned __int8 *, __int64, _QWORD))NtReadVirtualMemory)(
                                  v256,
                                  (unsigned int)v918[i41 / 4u],
                                  &v1155,
                                  16i64,
                                  0i64);
                                if ( (unsigned __int8 *)(unsigned int)v918[i41 / 4u] < v1364.modBaseAddr
                                  || (unsigned __int8 *)(unsigned int)v918[i41 / 4u] >= &v1364.modBaseAddr[(unsigned __int64)v1364.modBaseSize]
                                  || v1155 == 204 )
                                {
                                  v1151 = 0;
                                  v1152 = 59;
                                  v1153 = i41;
                                  v1154 = v918[i41 / 4u];
                                  if ( v45 + 25 <= 0x5400 )
                                  {
                                    *(_WORD *)(v45 + v58) = 23;
                                    for ( i42 = 0; (unsigned __int64)i42 < 0x17; ++i42 )
                                      *(_BYTE *)(v58 + i42 + v45 + 2) = *(&v1152 + i42);
                                    v45 += 25i64;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v1109 = 4;
                        v1110 = -1;
                        v1111 = 16;
                        v1112 = -124;
                        v1113 = -64;
                        memset(v1114, 0, 0x14ui64);
                        for ( i43 = v1364.modBaseAddr; *v85; i43 = (unsigned __int8 *)(v1049 + v1048[0]) )
                        {
                          if ( i43 >= &v1364.modBaseAddr[(unsigned __int64)v1364.modBaseSize] )
                            break;
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, unsigned __int8 *, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                                 v256,
                                 i43,
                                 0i64,
                                 v1048,
                                 48i64,
                                 &v1347) < 0 )
                            break;
                          if ( v1050 == 4096 && (v1051 == 16 || v1051 == 32 || v1051 == 64) )
                          {
                            for ( i44 = v1048[0]; ; i44 += 4096i64 )
                            {
                              if ( !*v85 || i44 == v1049 + v1048[0] )
                              {
                                if ( v1049 == 0x2000 )
                                {
                                  v1183 = 0;
                                  v1184 = 53;
                                  v1185 = 1388;
                                  v1186 = v1048[1];
                                  v1187 = v1048[0];
                                  v1188 = 0x2000;
                                  v1189 = v1052 | v1051 | v1050;
                                  if ( v45 + 29 <= 0x5400 )
                                  {
                                    *(_WORD *)(v45 + v58) = 27;
                                    for ( i45 = 0; (unsigned __int64)i45 < 0x1B; ++i45 )
                                      *(_BYTE *)(v58 + i45 + v45 + 2) = *(&v1184 + i45);
                                    v45 += 29i64;
                                  }
                                }
                                goto LABEL_1207;
                              }
                              if ( ((int (__fastcall *)(__int64, __int64, _BYTE *, __int64, _QWORD))NtReadVirtualMemory)(
                                     v256,
                                     i44,
                                     v1391,
                                     4096i64,
                                     0i64) >= 0 )
                              {
                                v118 = 0;
LABEL_1184:
                                if ( !v118 )
                                  break;
                              }
                            }
                            for ( i46 = 0; ; ++i46 )
                            {
                              if ( (unsigned int)(*(&v1109 + 7 * v118) + i46) > 0x1000ui64 )
                              {
                                ++v118;
                                goto LABEL_1184;
                              }
                              for ( i47 = 0;
                                    i47 < *(&v1109 + 7 * v118)
                                 && v1391[i47 + i46] == *((_BYTE *)&v1109 + 28 * v118 + (int)i47 + 4);
                                    ++i47 )
                              {
                                ;
                              }
                              if ( i47 == *(&v1109 + 7 * v118) )
                                break;
                            }
                            v1176 = 0;
                            v1177 = 53;
                            v1178 = 1388;
                            v1179 = i46 + i44;
                            v1180 = v1048[0];
                            v1181 = v1049;
                            v1182 = v1052 | v1051 | v1050;
                            if ( v45 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v45 + v58) = 27;
                              for ( i48 = 0; (unsigned __int64)i48 < 0x1B; ++i48 )
                                *(_BYTE *)(v58 + i48 + v45 + 2) = *(&v1177 + i48);
                              v45 += 29i64;
                            }
                          }
LABEL_1207:
                          ;
                        }
                        v82(v256);
                      }
                      v544 = v1364.modBaseAddr;
                      v1046 = v1364.modBaseSize;
                    }
                  }
                  while ( *v85 && v1267(v546, &v1364) );
                }
                v82(v546);
              }
              v385 = 0i64;
              v158 = 336;
              while ( 1 )
              {
                v158 += 1024;
                v385 = v421((unsigned int *)v385, v158);
                if ( !v385 )
                  break;
                v70 = v233(5i64, (unsigned int *)v385, v158, &v158);
                if ( v70 != 0xC0000004 )
                {
                  if ( v70 >= 0 )
                  {
                    v358 = v385;
                    while ( *v85 )
                    {
                      if ( *(_QWORD *)(v358 + 0x50) == v1250.th32ProcessID )
                      {
                        for ( i49 = 0; *v85 && i49 < *(_DWORD *)(v358 + 4); ++i49 )
                        {
                          _mm_lfence();
                          strcpy(v271, "OpenThread");
                          v1268 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))GetProcAddress(v75, v271);
                          v426 = v1268(10i64, 0i64, *(unsigned int *)(v358 + 80i64 * (int)i49 + 304));
                          if ( v426 )
                          {
                            strcpy(v289, "ResumeThread");
                            v1269 = (__int64 (__fastcall *)(__int64))GetProcAddress(v75, v289);
                            v372 = v1269(v426);
                            if ( v372 )
                            {
                              if ( v372 != -1 )
                              {
                                strcpy(v300, "SuspendThread");
                                v1270 = (void (__fastcall *)(__int64))GetProcAddress(v75, v300);
                                v1270(v426);
                                v454 = 0;
                                v455 = 59;
                                v456 = v372;
                                if ( v45 + 7 <= 0x5400 )
                                {
                                  *(_WORD *)(v45 + v58) = 5;
                                  for ( i50 = 0; (unsigned __int64)i50 < 5; ++i50 )
                                    *(_BYTE *)(v58 + i50 + v45 + 2) = *(&v455 + i50);
                                  v45 += 7i64;
                                }
                              }
                            }
                            v1382.ContextFlags = 0x100011;
                            strcpy(v316, "GetThreadContext");
                            GetThreadContext = (unsigned int (__fastcall *)(__int64, _CONTEXT *))GetProcAddress(
                                                                                                   v75,
                                                                                                   v316);
                            v373 = 0;
                            v162 = 0;
                            while ( *v85 && v373 < 100 && v162 < 15 )
                            {
                              if ( GetThreadContext(v426, &v1382) )
                              {
                                if ( v1382.Dr7 )
                                {
                                  v451 = 0;
                                  v452 = 0x3B;
                                  v453 = v1382.Dr0;
                                  if ( v45 + 7 <= 0x5400 )
                                  {
                                    *(_WORD *)(v45 + v58) = 5;
                                    for ( i51 = 0; (unsigned __int64)i51 < 5; ++i51 )
                                      *(_BYTE *)(v58 + i51 + v45 + 2) = *(&v452 + i51);
                                    v45 += 7i64;
                                  }
                                  ++v162;
                                }
                                v490 = OpenProcess(0x410i64, 0i64, v1250.th32ProcessID);
                                if ( v490 )
                                {
                                  if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))NtReadVirtualMemory)(
                                         v490,
                                         v1382.Rsp,
                                         thread_stack,
                                         512i64,
                                         0i64) >= 0 )
                                  {
                                    for ( thread_stack_index = 0;
                                          (unsigned __int64)thread_stack_index < 0x80;
                                          ++thread_stack_index )
                                    {
                                      if ( thread_stack[thread_stack_index] >= (unsigned int)v544
                                        && thread_stack[thread_stack_index] < v1046 + (unsigned int)v544 )
                                      {
                                        _mm_lfence();
                                        if ( ((int (__fastcall *)(__int64, _QWORD, __int16 *, __int64, _QWORD))NtReadVirtualMemory)(
                                               v490,
                                               (unsigned int)thread_stack[thread_stack_index],
                                               &v1333,
                                               16i64,
                                               0i64) >= 0
                                          && v1333 == 0x23FF )
                                        {
                                          v1329[16] = 0;
                                          v1330 = 0x3B;
                                          v1331 = thread_stack_index;
                                          v1332 = thread_stack[thread_stack_index] - (_DWORD)v544;
                                          if ( v45 + 25 <= 0x5400 )
                                          {
                                            *(_WORD *)(v45 + v58) = 0x17;
                                            for ( i52 = 0; i52 < 23; ++i52 )
                                              *(_BYTE *)(v58 + i52 + v45 + 2) = *(&v1330 + i52);
                                            v45 += 25i64;
                                          }
                                          ++v162;
                                        }
                                      }
                                    }
                                  }
                                  v82(v490);
                                }
                              }
                              v422(10i64);
                              ++v373;
                            }
                            v82(v426);
                          }
                        }
                        break;
                      }
                      if ( !*(_DWORD *)v358 )
                        break;
                      v358 += *(unsigned int *)v358;
                    }
                  }
                  v361((unsigned int *)v385);
                  break;
                }
              }
            }
            if ( *(_DWORD *)v1250.szExeFile == '.mwd' )
            {
              v1028 = OpenProcess(1024i64, 0i64, v1250.th32ProcessID);
              if ( v1028 )
              {
                for ( i53 = 0i64;
                      *v85
                   && ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                        v1028,
                        i53,
                        0i64,
                        v1136,
                        48i64,
                        &v1345) >= 0;
                      i53 = v1137 + v1136[0] )
                {
                  if ( v1138 == 4096
                    && v1140 != 0x1000000
                    && (v1139 == 16 || v1139 == 32 || v1139 == 64)
                    && v1137 > 0x10000 )
                  {
                    v1190 = 0;
                    v1191 = 0x35;
                    v1192 = 1417;
                    v1193 = v1136[1];
                    v1194 = v1136[0];
                    v1195 = v1137;
                    v1196 = v1140 | v1139 | v1138;
                    if ( v45 + 29 <= 0x5400 )
                    {
                      *(_WORD *)(v45 + v58) = 27;
                      for ( i54 = 0; (unsigned __int64)i54 < 0x1B; ++i54 )
                        *(_BYTE *)(v58 + i54 + v45 + 2) = *(&v1191 + i54);
                      v45 += 29i64;
                    }
                  }
                }
                v82(v1028);
              }
            }
          }
          while ( *v85 && v1272(v491, &v1250) );
        }
        v82(v491);
        if ( v59 )
        {
          v494 = 0;
          v495 = 72;
          v496 = 1457;
          v497 = v59;
          if ( v45 + 9 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 7;
            for ( i55 = 0; (unsigned __int64)i55 < 7; ++i55 )
              *(_BYTE *)(v58 + i55 + v45 + 2) = *(&v495 + i55);
            v45 += 9i64;
          }
        }
      }
      result = (unsigned __int8)*v85;
      if ( *v85 )
      {
        strcpy(v288, "LoadLibraryA");
        v1083 = (__int64 (__fastcall *)(char *))GetProcAddress(v75, v288);
        strcpy(v268, "psapi.dll");
        v1092 = v1083(v268);
        if ( v1092 )
        {
          strcpy(v299, "EnumProcesses");
          v1273 = (unsigned int (__fastcall *)(_DWORD *, __int64, unsigned int *))GetProcAddress(v1092, v299);
          if ( v1273(v1389, 1600i64, &v167) )
          {
            if ( v167 < 0x640ui64 )
            {
              for ( i56 = 0; *v85 && (int)i56 < (int)&loc_FFFB + 5; i56 += 4 )
              {
                _mm_lfence();
                v238 = OpenProcess(4096i64, 0i64, i56);
                if ( v238 )
                {
                  _mm_lfence();
                  v1352 = 0;
                  v1353 = 56;
                  v1371[0] = 0;
                  v64 = 128;
                  if ( !v493(v238, 0i64, v1371, &v64)
                    || (v64 = v228(65001i64, 0i64, (__int64 *)v1371, v64, (__int64)v1354, 255, 0i64, 0i64)) == 0 )
                  {
                    v1160 = (int)i56;
                    v1161 = 0;
                    v1162 = 512;
                    v1163 = &v1387;
                    if ( (int)v233(88i64, (unsigned int *)&v1160, 24i64, 0i64) < 0 )
                    {
                      v64 = 0;
                    }
                    else
                    {
                      v1274 = v1354;
                      v64 = v228(65001i64, 0i64, v1163, v1161 / 2, (__int64)v1354, 255, 0i64, 0i64);
                    }
                  }
                  for ( i57 = 0; ; ++i57 )
                  {
                    v1275 = i57;
                    if ( i57 >= v167 / 4ui64 || v1389[i57] == i56 )
                      break;
                  }
                  strcpy(v328, "GetExitCodeProcess");
                  v1072 = (unsigned int (__fastcall *)(__int64, int *))GetProcAddress(v75, v328);
                  if ( v64 )
                  {
                    if ( !v92
                      && (*(_DWORD *)((char *)v1351 + v64 + 1) == 1701667143
                       || *(_DWORD *)((char *)v1351 + v64 + 1) == 1701667175)
                      && (*(_DWORD *)((char *)&v1351[1] + v64 + 1) == 1919252047
                       || *(_DWORD *)((char *)&v1351[1] + v64 + 1) == 1919252079)
                      && (*(_DWORD *)((char *)&v1351[2] + v64 + 1) == 1434018156
                       || *(_DWORD *)((char *)&v1351[2] + v64 + 1) == 1970889068)
                      || (v1276 = i57, i57 == v167 / 4ui64)
                      && *(_DWORD *)((char *)v1351 + v64) == 1634038899
                      && *(_DWORD *)((char *)&v1351[1] + v64) == 1650816877 )
                    {
                      if ( v1072(v238, &v1041) )
                      {
                        if ( v1041 == 259 )
                        {
                          strcpy(v313, "GetProcessTimes");
                          v1091 = (unsigned int (__fastcall *)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))GetProcAddress(v75, v313);
                          if ( v1091(v238, v1278, &v425, &v425, &v425)
                            && (v38 = v1029(), v1091(v38, &v1277, &v425, &v425, &v425)) )
                          {
                            *(_DWORD *)&v1354[v64] = ((v1278[0] - v1277) / 10000) & 0xFFFFFFFE;
                          }
                          else
                          {
                            *(_DWORD *)&v1354[v64] = 0;
                          }
                          if ( *(int *)&v1354[v64] >= 0 )
                          {
                            v1278[1] = i57;
                            v439 = i57 == v167 / 4ui64;
                            *(_DWORD *)&v1354[v64] |= v439;
                            if ( v45 + v64 + 5 + 2 <= 0x5400 )
                            {
                              *(_WORD *)(v45 + v58) = v64 + 5;
                              for ( i58 = 0; i58 < v64 + 5; ++i58 )
                                *(_BYTE *)(v58 + i58 + v45 + 2) = *(&v1353 + i58);
                              v45 += v64 + 7;
                            }
                          }
                        }
                      }
                      else
                      {
                        *(_DWORD *)&v1354[v64] = v363();
                        if ( v45 + v64 + 5 + 2 <= 0x5400 )
                        {
                          *(_WORD *)(v45 + v58) = v64 + 5;
                          for ( i59 = 0; i59 < v64 + 5; ++i59 )
                            *(_BYTE *)(v58 + i59 + v45 + 2) = *(&v1353 + i59);
                          v45 += v64 + 7;
                        }
                      }
                    }
                  }
                  v1278[2] = i57;
                  v39 = v167 % 4ui64;
                  if ( i57 == v167 / 4ui64 && v1072(v238, &v1043) && v1043 == 259 )
                  {
                    v82(v238);
                    v238 = OpenProcess(0x1000i64, 0i64, i56);
                    if ( !v238 )
                      continue;
                    if ( v64 )
                    {
                      v438 = v506(v1371, 0i64, v1360) ? v1360[8] : 0;
                      *(_DWORD *)&v1354[v64] = v438;
                      if ( v45 + v64 + 5 + 2 <= 0x5400 )
                      {
                        v39 = v45 + v58;
                        *(_WORD *)(v45 + v58) = v64 + 5;
                        for ( i60 = 0; i60 < v64 + 5; ++i60 )
                        {
                          v39 = v45;
                          *(_BYTE *)(v58 + i60 + v45 + 2) = *(&v1353 + i60);
                        }
                        v45 += v64 + 7;
                      }
                    }
                  }
                  ((void (__fastcall *)(__int64, unsigned __int64))v82)(v238, v39);
                }
              }
            }
          }
        }
        strcpy(v270, "BE_DLL.dll");
        if ( v1084(v270, 0i64, v1350) )
        {
          v448 = 0;
          v449 = 61;
          v450 = v1351[0];
          if ( v45 + 7 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 5;
            for ( i61 = 0; (unsigned __int64)i61 < 5; ++i61 )
              *(_BYTE *)(v58 + i61 + v45 + 2) = *(&v449 + i61);
            v45 += 7i64;
          }
        }
        strcpy(v260, "\\\\.\\Beep");
        strcpy(v279, "CreateFileA");
        v1076 = (__int64 (__fastcall *)(char *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))GetProcAddress(v75, v279);
        v424 = v1076(v260, 0x80000000i64, 3i64, 0i64, 3, 0, 0i64);
        if ( v424 != -1 )
        {
          v200 = 0;
          v201 = 62;
          if ( v45 + 3 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 1;
            for ( i62 = 0; !i62; ++i62 )
              *(_BYTE *)(v58 + v45 + 2) = v201;
            v45 += 3i64;
          }
          v82(v424);
        }
        strcpy(v261, "\\\\.\\Null");
        v424 = v1076(v261, 0x80000000i64, 3i64, 0i64, 3, 0, 0i64);
        if ( v424 != -1 )
        {
          v202 = 0;
          v203 = 63;
          if ( v45 + 3 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = 1;
            for ( i63 = 0; !i63; ++i63 )
              *(_BYTE *)(v58 + v45 + 2) = v203;
            v45 += 3i64;
          }
          v82(v424);
        }
        result = (unsigned __int8)*v85;
        if ( *v85 )
        {
          v1042 = v1074();
          v422(1000i64);
          v437 = v1074() - v1042;
          if ( v437 >= 0x4B0 )
          {
            v445 = 0;
            v446 = 69;
            v447 = v437;
            if ( v45 + 7 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 5;
              for ( i64 = 0; (unsigned __int64)i64 < 5; ++i64 )
                *(_BYTE *)(v58 + i64 + v45 + 2) = *(&v446 + i64);
              v45 += 7i64;
            }
          }
          strcpy(v354, "..\\..\\Plugins\\ZipUtility\\ThirdParty\\7zpp\\dll\\Win64\\7z.dll");
          v63 = GetModuleHandleA(v354);
          if ( v63 )
          {
            if ( *(_DWORD *)(v63 + 4104) != -2092412088 )
            {
              v1128 = 0;
              v1129[0] = 70;
              v1129[1] = 0;
              v1130 = *(_QWORD *)(v63 + 4104);
              v1131 = *(_QWORD *)(v63 + 4112);
              if ( v45 + 20 <= 0x5400 )
              {
                *(_WORD *)(v45 + v58) = 18;
                for ( i65 = 0; (unsigned __int64)i65 < 0x12; ++i65 )
                  *(_BYTE *)(v58 + i65 + v45 + 2) = v1129[i65];
                v45 += 20i64;
              }
            }
          }
          strcpy(v255, "hal.dll");
          v63 = GetModuleHandleA(v255);
          if ( v63 )
          {
            v1132 = 0;
            v1133[0] = 70;
            v1133[1] = 2;
            v1134 = *(_QWORD *)(v63 + 4096);
            v1135 = *(_QWORD *)(v63 + 4104);
            if ( v45 + 20 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 18;
              for ( i66 = 0; (unsigned __int64)i66 < 0x12; ++i66 )
                *(_BYTE *)(v58 + i66 + v45 + 2) = v1133[i66];
              v45 += 20i64;
            }
          }
          strcpy(v329, "nvToolsExt64_1.dll");
          v63 = GetModuleHandleA(v329);
          if ( v63 )
          {
            v502 = 0;
            v503 = 72;
            v504 = 1448;
            v505 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 80);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i67 = 0; (unsigned __int64)i67 < 7; ++i67 )
                *(_BYTE *)(v58 + i67 + v45 + 2) = *(&v503 + i67);
              v45 += 9i64;
            }
          }
          strcpy(v325, "ws2detour_x96.dll");
          v63 = GetModuleHandleA(v325);
          if ( v63 )
          {
            v498 = 0;
            v499 = 72;
            v500 = 1461;
            v501 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 80);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i68 = 0; (unsigned __int64)i68 < 7; ++i68 )
                *(_BYTE *)(v58 + i68 + v45 + 2) = *(&v499 + i68);
              v45 += 9i64;
            }
          }
          strcpy(v326, "networkdllx64.dll");
          v63 = GetModuleHandleA(v326);
          if ( v63 )
          {
            if ( *(_DWORD *)(v63 + *(int *)(v63 + 60) + 80) < 0x200000u
              || *(_DWORD *)(v63 + *(int *)(v63 + 60) + 80) >= 0x400000u )
            {
              if ( *(_DWORD *)(*(int *)(v63 + 60) + v63 + 172) == 6944 )
              {
                v483 = 0;
                v484 = 72;
                v485 = 1463;
                v486 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 8);
                if ( v45 + 9 <= 0x5400 )
                {
                  *(_WORD *)(v45 + v58) = 7;
                  for ( i69 = 0; (unsigned __int64)i69 < 7; ++i69 )
                    *(_BYTE *)(v58 + i69 + v45 + 2) = *(&v484 + i69);
                  v45 += 9i64;
                }
              }
            }
            else
            {
              v479 = 0;
              v480 = 72;
              v481 = 1463;
              v482 = *(_DWORD *)(*(int *)(v63 + 60) + v63 + 172);
              if ( v45 + 9 <= 0x5400 )
              {
                *(_WORD *)(v45 + v58) = 7;
                for ( i70 = 0; (unsigned __int64)i70 < 7; ++i70 )
                  *(_BYTE *)(v58 + i70 + v45 + 2) = *(&v480 + i70);
                v45 += 9i64;
              }
            }
          }
          strcpy(v317, "nxdetours_64.dll");
          v63 = GetModuleHandleA(v317);
          if ( v63 )
          {
            v519 = 0;
            v520 = 72;
            v521 = 1464;
            v522 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 80);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i71 = 0; (unsigned __int64)i71 < 7; ++i71 )
                *(_BYTE *)(v58 + i71 + v45 + 2) = *(&v520 + i71);
              v45 += 9i64;
            }
          }
          strcpy(v307, "nvcompiler.dll");
          v63 = GetModuleHandleA(v307);
          if ( v63 )
          {
            v523 = 0;
            v524 = 72;
            v525 = 1468;
            v526 = *(_DWORD *)(v63 + 4096);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i72 = 0; (unsigned __int64)i72 < 7; ++i72 )
                *(_BYTE *)(v58 + i72 + v45 + 2) = *(&v524 + i72);
              v45 += 9i64;
            }
          }
          strcpy(v254, "wmp.dll");
          v63 = GetModuleHandleA(v254);
          if ( v63 )
          {
            v527 = 0;
            v528 = 72;
            v529 = 1470;
            v530 = *(_DWORD *)(v63 + 4096);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i73 = 0; (unsigned __int64)i73 < 7; ++i73 )
                *(_BYTE *)(v58 + i73 + v45 + 2) = *(&v528 + i73);
              v45 += 9i64;
            }
          }
          strcpy(v287, "Project1.dll");
          v63 = GetModuleHandleA(v287);
          if ( v63 )
          {
            v531 = 0;
            v532 = 72;
            v533 = 1480;
            v534 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 8);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i74 = 0; (unsigned __int64)i74 < 7; ++i74 )
                *(_BYTE *)(v58 + i74 + v45 + 2) = *(&v532 + i74);
              v45 += 9i64;
            }
          }
          strcpy(v330, "RompseAssPussy.dll");
          v63 = GetModuleHandleA(v330);
          if ( v63 )
          {
            v1197 = 0;
            v1198 = 53;
            v1199 = 1482;
            v535 = (unsigned int *)(*(int *)(v63 + 60) + v63);
            v1200 = v535[2];
            v1201 = v535[20];
            v1202 = v535[10];
            v1203 = v535[43];
            if ( v45 + 29 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 27;
              for ( i75 = 0; (unsigned __int64)i75 < 0x1B; ++i75 )
                *(_BYTE *)(v58 + i75 + v45 + 2) = *(&v1198 + i75);
              v45 += 29i64;
            }
          }
          strcpy(v318, "DxtoryMM_x64.dll");
          strcpy(v269, "mslib.dll");
          v63 = GetModuleHandleA(v318);
          if ( v63 || (v63 = GetModuleHandleA(v269)) != 0 )
          {
            v374 = 0;
            v375 = 72;
            v376 = 1483;
            v377 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 8);
            if ( v377 == 1533622785 )
              v377 = *(_DWORD *)(v63 + 4444160);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i76 = 0; (unsigned __int64)i76 < 7; ++i76 )
                *(_BYTE *)(v58 + i76 + v45 + 2) = *(&v375 + i76);
              v45 += 9i64;
            }
          }
          strcpy(v352, "C:\\Windows\\mscorlib.ni.dll");
          v63 = GetModuleHandleA(v352);
          if ( v63 )
          {
            v536 = 0;
            v537 = 72;
            v538 = 1415;
            v539 = *(_DWORD *)(v63 + 4096);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i77 = 0; (unsigned __int64)i77 < 7; ++i77 )
                *(_BYTE *)(v58 + i77 + v45 + 2) = *(&v537 + i77);
              v45 += 9i64;
            }
          }
          strcpy(v286, "frAQBc8W.dll");
          v63 = GetModuleHandleA(v286);
          if ( v63 )
          {
            v540 = 0;
            v541 = 72;
            v542 = 1489;
            v543 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 8);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i78 = 0; (unsigned __int64)i78 < 7; ++i78 )
                *(_BYTE *)(v58 + i78 + v45 + 2) = *(&v541 + i78);
              v45 += 9i64;
            }
          }
          strcpy(v282, "OWClient.dll");
          v63 = GetModuleHandleA(v282);
          if ( v63 )
          {
            v281[0] = 76;
            v281[1] = -117;
            v281[2] = -32;
            v281[3] = 72;
            v281[4] = -123;
            v281[5] = -64;
            v281[6] = 117;
            v281[7] = 75;
            v281[8] = -78;
            v281[9] = 1;
            v281[10] = 72;
            v281[11] = -115;
            v281[12] = 13;
            v1075 = v63 + *(int *)(v63 + 60) + 24;
            v359 = (__int64 **)(*(unsigned int *)(v1075 + 20) + v63);
            for ( i79 = 0; *v85 && i79 + 13i64 <= (unsigned __int64)*(unsigned int *)(v1075 + 4); ++i79 )
            {
              for ( i80 = 0;
                    (unsigned __int64)i80 < 0xD && *((unsigned __int8 *)v359 + i80 + i79) == (unsigned __int8)v281[i80];
                    ++i80 )
              {
                ;
              }
              if ( i80 == 13i64 )
              {
                v359 = (__int64 **)((char *)v359 + i79 + *(_DWORD *)((char *)v359 + i79 - 9) + 19);
                if ( *v359 )
                {
                  if ( (v436 = ((int (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, __int64, __int64 *))NtQueryVirtualMemory)(
                                 -1i64,
                                 *v359,
                                 0i64,
                                 v97,
                                 48i64,
                                 &v423) < 0,
                        v69 = v436)
                    || LODWORD(v97[4]) != 4096
                    || LODWORD(v97[5]) != 0x20000 && LODWORD(v97[5]) != 0x1000000
                    || HIDWORD(v97[4]) != 16 && HIDWORD(v97[4]) != 32 && HIDWORD(v97[4]) != 64 )
                  {
                    v1239 = 0;
                    v1240[0] = 71;
                    v1240[1] = 4;
                    v1241 = *v359;
                    v1242 = *v1241;
                    v1243 = v1241[1];
                    v1244 = v1241[2];
                    v1245 = v1241[3];
                    v1077 = v69 ? 0i64 : v97[1];
                    v1246 = v1077;
                    v1078 = v69 ? 0i64 : v97[0];
                    v1247 = v1078;
                    v435 = v69 ? 0 : LODWORD(v97[3]);
                    v1248 = v435;
                    v434 = v69 ? 0 : LODWORD(v97[5]) | HIDWORD(v97[4]) | LODWORD(v97[4]);
                    v1249 = v434;
                    if ( v45 + 68 <= 0x5400 )
                    {
                      *(_WORD *)(v45 + v58) = 66;
                      for ( i81 = 0; (unsigned __int64)i81 < 0x42; ++i81 )
                        *(_BYTE *)(v58 + i81 + v45 + 2) = v1240[i81];
                      v45 += 68i64;
                    }
                  }
                }
                break;
              }
            }
          }
          strcpy(v319, "shimloader64.dll");
          v63 = GetModuleHandleA(v319);
          if ( v63 )
          {
            v466 = 0;
            v467 = 72;
            v468 = 1561;
            v469 = *(_DWORD *)(v63 + *(int *)(v63 + 60) + 8);
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i82 = 0; (unsigned __int64)i82 < 7; ++i82 )
                *(_BYTE *)(v58 + i82 + v45 + 2) = *(&v467 + i82);
              v45 += 9i64;
            }
          }
          v93 = 0;
          v81 = 0;
          for ( i83 = 0; *v85 && i83 < 10; ++i83 )
          {
            v1032 = 0i64;
            v360 = 0i64;
            v189 = 336;
            while ( 1 )
            {
              v189 += 1024;
              v360 = v421((unsigned int *)v360, v189);
              if ( !v360 )
                break;
              v70 = v233(5i64, (unsigned int *)v360, v189, &v189);
              if ( v70 != -1073741820 )
              {
                if ( v70 >= 0 )
                {
                  _mm_lfence();
                  strcpy(v308, "GetSystemTimes");
                  v1082 = (void (__fastcall *)(__int64 *, __int64 *, __int64 *))GetProcAddress(v75, v308);
                  v1082(&v1346, &v1282, &v1285);
                  v422(1000i64);
                  v380 = 0i64;
                  v190 = 336;
                  while ( 1 )
                  {
                    v190 += 1024;
                    v380 = v421((unsigned int *)v380, v190);
                    if ( !v380 )
                      break;
                    v70 = v233(5i64, (unsigned int *)v380, v190, &v190);
                    if ( v70 != -1073741820 )
                    {
                      if ( v70 >= 0 )
                      {
                        v1082(&v1342, &v1283, &v1286);
LABEL_1526:
                        v420 = 0i64;
                        v124 = (unsigned int *)v380;
                        while ( *a5 )
                        {
                          v87 = (unsigned int *)v360;
                          while ( *a5 )
                          {
                            if ( *((_QWORD *)v124 + 10) == *((_QWORD *)v87 + 10) )
                            {
                              v470 = *((_QWORD *)v124 + 6)
                                   - *((_QWORD *)v87 + 6)
                                   + *((_QWORD *)v124 + 5)
                                   - *((_QWORD *)v87 + 5);
                              v420 += v470;
                              if ( !i83 )
                              {
                                v433 = *((_WORD *)v87 + 28) == 22
                                    && **((_WORD **)v87 + 8) == 115
                                    && *(_WORD *)(*((_QWORD *)v87 + 8) + 2i64) == 118
                                    && *(_WORD *)(*((_QWORD *)v87 + 8) + 4i64) == 99
                                    && *(_WORD *)(*((_QWORD *)v87 + 8) + 6i64) == 104
                                    && *(_WORD *)(*((_QWORD *)v87 + 8) + 8i64) == 111;
                                v121 = v433;
                                v110 = 0;
LABEL_1542:
                                if ( *a5 && v110 < v124[1] )
                                {
                                  for ( i84 = 0; ; ++i84 )
                                  {
                                    if ( !*a5 || i84 >= v87[1] )
                                    {
LABEL_1541:
                                      ++v110;
                                      goto LABEL_1542;
                                    }
                                    if ( *(_QWORD *)&v124[20 * v110 + 76] == *(_QWORD *)&v87[20 * i84 + 76] )
                                      break;
                                  }
                                  for ( i85 = (unsigned int *)v360; ; i85 = (unsigned int *)((char *)i85 + *i85) )
                                  {
                                    if ( !*a5 )
                                      goto LABEL_1541;
                                    if ( *((_QWORD *)i85 + 10) == v134() )
                                      break;
                                    if ( !*i85 )
                                      goto LABEL_1541;
                                  }
                                  v1312 = *(_QWORD *)&v87[20 * i84 + 72];
                                  strcpy(v272, "OpenThread");
                                  v1279 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))GetProcAddress(v75, v272);
                                  v1030 = v1279(64i64, 0i64, v87[20 * i84 + 76]);
                                  if ( v1030 )
                                  {
                                    strcpy(v345, "NtQueryInformationThread");
                                    v1280 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))GetProcAddress(v135, v345);
                                    if ( v1280(v1030, 9i64, &v1281, 8i64, 0i64) >= 0 )
                                      v1312 = v1281;
                                    v82(v1030);
                                  }
                                  v378 = *(_QWORD *)&v124[20 * v110 + 64]
                                       - *(_QWORD *)&v87[20 * i84 + 64]
                                       + *(_QWORD *)&v124[20 * v110 + 66]
                                       - *(_QWORD *)&v87[20 * i84 + 66];
                                  v1031 = *((_QWORD *)i85 + 4) - *(_QWORD *)&v87[20 * i84 + 68];
                                  if ( *((_QWORD *)v87 + 10) == 4i64
                                    && (v470 >= 16000000 && v378 >= 8000000
                                     || v378 >= 2500000 && v1031 <= 1200000000 && v1031 >= 0) )
                                  {
                                    if ( v378 >= 9000000 )
                                      v93 = 1;
LABEL_1563:
                                    v1306 = 0;
                                    v1307 = 72;
                                    v1308 = 1131;
                                    v1309 = v470;
                                    v1310 = v378;
                                    v1311 = *(_QWORD *)&v87[20 * i84 + 66];
                                    v1313 = v124[20 * v110 + 81] + 10 * v124[20 * v110 + 82];
                                    if ( v81 )
                                      v1313 += 1000;
                                    v1314 = v1031;
                                    v1315 = v87[1] - (i84 + 1);
                                    v1316 = *(_QWORD *)&v87[20 * i84 + 68] - *((_QWORD *)v87 + 4);
                                    if ( v45 + 61 <= 0x5400 )
                                    {
                                      *(_WORD *)(v45 + v58) = 59;
                                      for ( i86 = 0; (unsigned __int64)i86 < 0x3B; ++i86 )
                                        *(_BYTE *)(v58 + i86 + v45 + 2) = *(&v1307 + i86);
                                      v45 += 61i64;
                                    }
                                    goto LABEL_1541;
                                  }
                                  if ( !v93 || v470 < 7000000 || !v121 )
                                    goto LABEL_1541;
                                  if ( v81 )
                                  {
                                    if ( v378 < 500000 )
                                      goto LABEL_1541;
                                    goto LABEL_1563;
                                  }
                                  if ( v378 < 2500000 )
                                    goto LABEL_1541;
                                  v81 = 1;
                                  goto LABEL_1526;
                                }
                              }
                              break;
                            }
                            if ( !*v87 )
                            {
                              v420 += *((_QWORD *)v124 + 6) + *((_QWORD *)v124 + 5);
                              break;
                            }
                            v87 = (unsigned int *)((char *)v87 + *v87);
                          }
                          if ( !*v124 )
                            break;
                          v124 = (unsigned int *)((char *)v124 + *v124);
                        }
                        v1032 = v1286 - v1285 + v1283 - v1282 - v420;
                      }
                      v361((unsigned int *)v380);
                      break;
                    }
                  }
                }
                v361((unsigned int *)v360);
                break;
              }
            }
            if ( v1032 < 7500000 )
              break;
          }
          if ( i83 == 10 )
          {
            v471 = 0;
            v472 = 72;
            v473 = 1131;
            v474 = v1032 / 10000;
            if ( v45 + 9 <= 0x5400 )
            {
              *(_WORD *)(v45 + v58) = 7;
              for ( i87 = 0; (unsigned __int64)i87 < 7; ++i87 )
                *(_BYTE *)(v58 + i87 + v45 + 2) = *(&v472 + i87);
              v45 += 9i64;
            }
          }
          strcpy(v285, "GetTempPathA");
          v1287 = (__int64 (__fastcall *)(__int64, _BYTE *))GetProcAddress(v75, v285);
          v194 = v1287(261i64, v1370);
          *(_DWORD *)&v1370[v194] = 'lCEB';
          *(_DWORD *)&v1370[v194 + 4] = 'tnei';
          *(_DWORD *)&v1370[v194 + 8] = 'ld.2';
          v1370[v194 + 12] = 'l';
          v1370[v194 + 13] = 0;
          v63 = v1083(v1370);
          if ( v63 )
          {
            strcpy(v280, "FreeLibrary");
            v1288 = (void (__fastcall *)(__int64))GetProcAddress(v75, v280);
            v1288(v63);
          }
          else
          {
            v431 = v363();
            if ( v431 != 126 )
            {
              v475 = 0;
              v476 = 72;
              v477 = 1524;
              v432 = v1084(v1370, 0i64, v1350) ? v1351[0] : -1;
              v478 = v431 | (v432 << 16);
              if ( v45 + 9 <= 0x5400 )
              {
                *(_WORD *)(v45 + v58) = 7;
                for ( i88 = 0; (unsigned __int64)i88 < 7; ++i88 )
                  *(_BYTE *)(v58 + i88 + v45 + 2) = *(&v476 + i88);
                v45 += 9i64;
              }
            }
          }
          if ( v45 + 1 <= 0x5400 )
          {
            *(_WORD *)(v45 + v58) = -1;
            v196 = 0;
            ++v45;
          }
          if ( v45 <= 0x3E8 )
            v45 = 1000i64;
          v94 = *(_BYTE *)(v58 + 2);
          for ( i89 = 6; i89 < v45; ++i89 )
          {
            v419 = v94 ^ *(unsigned __int8 *)(v58 + i89);
            *(_BYTE *)(v58 + i89) = v419;
            v94 = v419;
          }
          ((void (__fastcall *)(__int64, _QWORD, _QWORD))report)(v58, (unsigned int)v45, 0i64);
          result = ((__int64 (__fastcall *)(__int64))v361)(v58);
        }
      }
    }
  }
  return result;
}