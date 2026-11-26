// 0x1802117c0  FUN_1802117c0
// size=631 thunk=false
// signature: undefined FUN_1802117c0()
// status: ok


void FUN_1802117c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  void *_Memory;
  longlong *plVar6;
  basic_streambuf<char,std::char_traits<char>_> *pbVar7;
  undefined1 *puVar8;
  longlong *_Src;
  ulonglong uVar9;
  ulonglong uVar10;
  basic_streambuf<char,std::char_traits<char>_> *pbVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong *local_48;
  
  puVar8 = auStack_68;
  pbVar11 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  pbVar7 = (basic_streambuf<char,std::char_traits<char>_> *)*param_2;
  local_48 = param_1;
  do {
    if (*(char *)(param_2 + 1) == '\0') {
      if ((pbVar7 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(pbVar7), iVar4 == -1)) {
        *param_2 = 0;
        pbVar7 = pbVar11;
      }
      else {
        *(char *)((longlong)param_2 + 9) = (char)iVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      if (((basic_streambuf<char,std::char_traits<char>_> *)*param_3 ==
           (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                            ((basic_streambuf<char,std::char_traits<char>_> *)*param_3), iVar4 == -1
         )) {
        *param_3 = 0;
      }
      else {
        *(char *)((longlong)param_3 + 9) = (char)iVar4;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar6 = param_1;
    if (pbVar7 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      if (*param_3 == 0) goto LAB_180211851;
    }
    else if (*param_3 != 0) {
LAB_180211851:
      if (0xf < (ulonglong)param_1[3]) {
        plVar6 = (longlong *)*param_1;
        puVar8 = auStack_68;
      }
LAB_180211a08:
      *(undefined1 *)((longlong)plVar6 + param_1[2]) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      return;
    }
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    if (uVar9 == uVar10) {
      if (uVar9 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      _Src = param_1;
      if (0xf < uVar10) {
        _Src = (longlong *)*param_1;
      }
      uVar9 = uVar9 + 1 | 0xf;
      if (0x7fffffffffffffff < uVar9) {
        uVar10 = 0x7fffffffffffffff;
        uVar9 = 0x8000000000000027;
LAB_180211903:
        lVar5 = FUN_1802d8350(uVar9);
        if (lVar5 != 0) {
          pbVar7 = (basic_streambuf<char,std::char_traits<char>_> *)
                   (lVar5 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(pbVar7 + -8) = lVar5;
          goto LAB_18021192a;
        }
LAB_1802119fe:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar8 = auStack_60;
        goto LAB_180211a08;
      }
      if (0x7fffffffffffffff - (uVar10 >> 1) < uVar10) {
        uVar10 = 0x7fffffffffffffff;
        uVar9 = 0x8000000000000027;
        goto LAB_180211903;
      }
      uVar1 = uVar10 + (uVar10 >> 1);
      uVar10 = uVar9;
      if (uVar9 < uVar1) {
        uVar10 = uVar1;
      }
      uVar1 = uVar10 + 1;
      pbVar7 = pbVar11;
      if (uVar1 != 0) {
        if (0xfff < uVar1) {
          uVar9 = uVar10 + 0x28;
          if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_180012fe0();
          }
          goto LAB_180211903;
        }
        pbVar7 = (basic_streambuf<char,std::char_traits<char>_> *)FUN_1802d8350(uVar1);
      }
LAB_18021192a:
      memcpy(pbVar7,_Src,param_1[2]);
      if (0xf < (ulonglong)param_1[3]) {
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < param_1[3] + 1U) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) goto LAB_1802119fe;
        free(_Memory);
      }
      *param_1 = (longlong)pbVar7;
      param_1[3] = uVar10;
      pbVar7 = (basic_streambuf<char,std::char_traits<char>_> *)*param_2;
    }
    if (0xf < uVar10) {
      pbVar7 = (basic_streambuf<char,std::char_traits<char>_> *)*param_2;
      plVar6 = (longlong *)*param_1;
    }
    if (*(char *)(param_2 + 1) == '\0') {
      if ((pbVar7 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(pbVar7), iVar4 == -1)) {
        *param_2 = 0;
        pbVar7 = pbVar11;
      }
      else {
        *(char *)((longlong)param_2 + 9) = (char)iVar4;
      }
    }
    *(undefined1 *)((longlong)plVar6 + param_1[2]) = *(undefined1 *)((longlong)param_2 + 9);
    param_1[2] = param_1[2] + 1;
    if ((pbVar7 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
       (iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc(pbVar7), iVar4 == -1)) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      pbVar7 = pbVar11;
    }
    else {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  } while( true );
}


