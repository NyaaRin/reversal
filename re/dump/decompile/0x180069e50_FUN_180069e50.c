// 0x180069e50  FUN_180069e50
// size=628 thunk=false
// signature: undefined FUN_180069e50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180069e50(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong *plVar5;
  char *_Str;
  longlong lVar6;
  size_t sVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  ulonglong *local_a8;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  double local_78;
  double dStack_70;
  int local_68;
  int local_64;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_2)) {
    _Str = (char *)(**(code **)(*plVar5 + 0x158))(plVar5,1);
    dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
    dVar10 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);
    if (_Str != (char *)0x0) {
      if ((DAT_1803faff8 == (code *)0x0) || (plVar5[1] == 0)) {
        cVar8 = (**(code **)(*plVar5 + 0x138))(plVar5,4,6);
      }
      else {
        iVar4 = (*DAT_1803faff8)(plVar5[1],4);
        cVar8 = iVar4 == 6;
      }
      if (cVar8 != '\0') {
        lVar6 = FUN_180068950(_Str);
        if (lVar6 != 0) {
          FUN_18002d8c0(plVar5,*(undefined4 *)(lVar6 + 0x34));
          *(undefined1 *)(lVar6 + 0x38) = 1;
        }
        if ((DAT_1803faf38 == (code *)0x0) || (plVar5[1] == 0)) {
          (**(code **)(*plVar5 + 8))(plVar5,4);
        }
        else {
          (*DAT_1803faf38)(plVar5[1],4);
        }
        iVar4 = FUN_18002d7a0(plVar5);
        uVar2 = _UNK_1803814b8;
        uVar1 = _DAT_1803814b0;
        if (iVar4 != -1) {
          uStack_90 = 0;
          local_88 = _DAT_1803814b0;
          uStack_80 = _UNK_1803814b8;
          local_98 = 0;
          local_78 = 0.0;
          dStack_70 = 0.0;
          local_68 = 0;
          local_64 = 0xffffffff;
          local_60 = 0;
          sVar7 = strlen(_Str);
          FUN_180212700(&local_98,_Str,sVar7);
          puVar3 = DAT_1803eb3d0;
          if (DAT_1803fa608 == (float *)0x0) {
            local_78 = 0.0;
          }
          else {
            local_78 = (double)*DAT_1803fa608;
          }
          local_78 = local_78 + dVar9;
          local_68 = 0;
          if (0 < (int)dVar10) {
            local_68 = (int)dVar10;
          }
          dStack_70 = dVar9;
          local_64 = iVar4;
          if (DAT_1803eb3d0 == DAT_1803eb3d8) {
            FUN_180227990(SUB84(local_78,0),DAT_1803eb3d0,&local_98);
          }
          else {
            local_a8 = DAT_1803eb3d0;
            *DAT_1803eb3d0 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            *puVar3 = local_98;
            puVar3[1] = uStack_90;
            puVar3[2] = local_88;
            puVar3[3] = uStack_80;
            local_88 = uVar1;
            uStack_80 = uVar2;
            local_98 = local_98 & 0xffffffffffffff00;
            puVar3[4] = (ulonglong)local_78;
            puVar3[5] = (ulonglong)dVar9;
            *(int *)(puVar3 + 6) = local_68;
            *(int *)((longlong)puVar3 + 0x34) = iVar4;
            *(undefined1 *)(puVar3 + 7) = local_60;
            DAT_1803eb3d0 = DAT_1803eb3d0 + 8;
          }
          FUN_18020e450(&local_98);
        }
      }
    }
  }
  return 0;
}


