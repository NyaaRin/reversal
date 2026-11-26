// 0x180166070  FUN_180166070
// size=1110 thunk=false
// signature: undefined FUN_180166070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180166070(longlong *param_1)

{
  ULONGLONG UVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  if ((DAT_1803fa56d != '\0') && (param_1 != (longlong *)0x0)) {
    memset(&local_118,0,0x100);
    uVar4 = 0;
    do {
      iVar2 = (int)uVar4;
      uVar3 = iVar2 + 1;
      (**(code **)(*param_1 + 0x1d0))
                (param_1,(&DAT_180339e60)[uVar4 * 4],(longlong)&local_118 + uVar4 * 4);
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < 0x1b);
    (**(code **)(*param_1 + 0x210))(param_1,0,1,(longlong)&local_118 + (longlong)(int)uVar3 * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,2,(longlong)&local_118 + (longlong)(iVar2 + 2) * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,3,(longlong)&local_118 + (longlong)(iVar2 + 3) * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,4,(longlong)&local_118 + (longlong)(iVar2 + 4) * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,5,(longlong)&local_118 + (longlong)(iVar2 + 5) * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,0x1c,(longlong)&local_118 + (longlong)(iVar2 + 6) * 4)
    ;
    (**(code **)(*param_1 + 0x210))(param_1,0,0xb,(longlong)&local_118 + (longlong)(iVar2 + 7) * 4);
    (**(code **)(*param_1 + 0x210))(param_1,0,0x18,(longlong)&local_118 + (longlong)(iVar2 + 8) * 4)
    ;
    (**(code **)(*param_1 + 0x220))(param_1,0,0xb,(longlong)&local_118 + (longlong)(iVar2 + 9) * 4);
    if (DAT_1803fe664 == '\0') {
      _DAT_1803ff120 = local_118;
      _DAT_1803ff128 = uStack_110;
      _DAT_1803ff140 = local_f8;
      uRam00000001803ff148 = uStack_f0;
      _DAT_1803ff130 = local_108;
      _DAT_1803ff138 = uStack_100;
      _DAT_1803ff160 = local_d8;
      uRam00000001803ff168 = uStack_d0;
      _DAT_1803ff150 = local_e8;
      uRam00000001803ff158 = uStack_e0;
      _DAT_1803ff180 = local_b8;
      uRam00000001803ff188 = uStack_b0;
      _DAT_1803ff170 = local_c8;
      uRam00000001803ff178 = uStack_c0;
      _DAT_1803ff1a0 = local_98;
      uRam00000001803ff1a4 = uStack_94;
      uRam00000001803ff1a8 = uStack_90;
      uRam00000001803ff1ac = uStack_8c;
      _DAT_1803ff190 = local_a8;
      uRam00000001803ff194 = uStack_a4;
      uRam00000001803ff198 = uStack_a0;
      uRam00000001803ff19c = uStack_9c;
      DAT_1803fe664 = '\x01';
      FUN_180014410("[MP-STATE] baseline captured (assume MENU), %d states tracked. Enter a game and watch for diffs.\n"
                    ,0x24);
    }
    else {
      UVar1 = GetTickCount64();
      uVar4 = 0;
      do {
        if (*(int *)((longlong)&local_118 + uVar4 * 4) != (&DAT_1803ff120)[uVar4]) {
          if (UVar1 - _DAT_1803feae8 < 1000) {
            return;
          }
          uVar4 = 0;
          _DAT_1803feae8 = UVar1;
          do {
            uVar5 = uVar4;
            if (*(int *)((longlong)&local_118 + uVar5 * 4) != (&DAT_1803ff120)[uVar5]) {
              FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",(&PTR_s_LIGHTING_180339e68)[uVar5 * 2]
                           );
            }
            uVar3 = (int)uVar5 + 1;
            uVar4 = (ulonglong)uVar3;
          } while ((int)uVar3 < 0x1b);
          if (*(int *)((longlong)&local_118 + uVar5 * 4 + 4) != (&DAT_1803ff124)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_COLOROP_180310138);
          }
          if (*(int *)((longlong)&uStack_110 + uVar5 * 4) != (&DAT_1803ff128)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_CARG1_180310148);
          }
          if (*(int *)((longlong)&uStack_110 + uVar5 * 4 + 4) != (&DAT_1803ff12c)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_CARG2_180310158);
          }
          if (*(int *)((longlong)&local_108 + uVar5 * 4) != (&DAT_1803ff130)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_ALPHAOP_180310168);
          }
          if (*(int *)((longlong)&local_108 + uVar5 * 4 + 4) != (&DAT_1803ff134)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_AARG1_180310178);
          }
          if (*(int *)((longlong)&uStack_100 + uVar5 * 4) != (&DAT_1803ff138)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_RESULT_180310188);
          }
          if (*(int *)((longlong)&uStack_100 + uVar5 * 4 + 4) != (&DAT_1803ff13c)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_TCI_180310198);
          }
          if (*(int *)((longlong)&local_f8 + uVar5 * 4) != (&DAT_1803ff140)[uVar5]) {
            FUN_180014410("[MP-STATE] %s: menu=%u now=%u\n",PTR_s_TSS_TTFF_1803101a8);
          }
          if (*(int *)((longlong)&local_f8 + uVar5 * 4 + 4) == (&DAT_1803ff144)[uVar5]) {
            return;
          }
          FUN_180014410("[MP-STATE] SAMP0_SRGB: menu=%u now=%u\n");
          return;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < 0x24);
    }
  }
  return;
}


