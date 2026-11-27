// 0x180230cd0  FUN_180230cd0
// size=850 thunk=false
// signature: undefined FUN_180230cd0()
// status: ok


void FUN_180230cd0(ulonglong *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *_Str1;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = param_3 + 0x14;
  if (param_2 < param_3) {
    while( true ) {
      piVar5 = param_3 + 2;
      piVar7 = param_3 + -0x14;
      piVar6 = piVar5;
      if (0xf < *(ulonglong *)(param_3 + 8)) {
        piVar6 = *(int **)piVar5;
      }
      piVar4 = param_3 + -0x12;
      piVar3 = piVar4;
      if (0xf < *(ulonglong *)(param_3 + -0xc)) {
        piVar3 = *(int **)piVar4;
      }
      iVar2 = _stricmp((char *)piVar3,(char *)piVar6);
      if (iVar2 == 0) {
        bVar1 = *piVar7 < *param_3;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      if (bVar1 != false) break;
      if (0xf < *(ulonglong *)(param_3 + -0xc)) {
        piVar4 = *(int **)piVar4;
      }
      if (0xf < *(ulonglong *)(param_3 + 8)) {
        piVar5 = *(int **)piVar5;
      }
      iVar2 = _stricmp((char *)piVar5,(char *)piVar4);
      if (iVar2 == 0) {
        bVar1 = *param_3 < *piVar7;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      if ((bVar1 != false) || (param_3 = piVar7, piVar7 <= param_2)) break;
    }
  }
  piVar5 = piVar8;
  piVar7 = param_3;
  if (piVar8 < param_4) {
    while( true ) {
      piVar5 = param_3 + 2;
      if (0xf < *(ulonglong *)(param_3 + 8)) {
        piVar5 = *(int **)(param_3 + 2);
      }
      piVar6 = piVar8 + 2;
      piVar4 = piVar6;
      if (0xf < *(ulonglong *)(piVar8 + 8)) {
        piVar4 = *(int **)piVar6;
      }
      iVar2 = _stricmp((char *)piVar4,(char *)piVar5);
      if (iVar2 == 0) {
        bVar1 = *piVar8 < *param_3;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      piVar5 = piVar8;
      if (bVar1 != false) break;
      if (0xf < *(ulonglong *)(piVar8 + 8)) {
        piVar6 = *(int **)piVar6;
      }
      piVar4 = param_3 + 2;
      if (0xf < *(ulonglong *)(param_3 + 8)) {
        piVar4 = *(int **)(param_3 + 2);
      }
      iVar2 = _stricmp((char *)piVar4,(char *)piVar6);
      if (iVar2 == 0) {
        bVar1 = *param_3 < *piVar8;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      if ((bVar1 != false) || (piVar8 = piVar8 + 0x14, piVar5 = piVar8, param_4 <= piVar8)) break;
    }
  }
joined_r0x000180230e24:
  do {
    if (param_4 <= piVar8) {
joined_r0x000180230ec1:
      for (; param_2 < param_3; param_3 = param_3 + -0x14) {
        piVar6 = param_3 + -0x14;
        piVar4 = piVar7 + 2;
        if (0xf < *(ulonglong *)(piVar7 + 8)) {
          piVar4 = *(int **)piVar4;
        }
        piVar3 = param_3 + -0x12;
        _Str1 = piVar3;
        if (0xf < *(ulonglong *)(param_3 + -0xc)) {
          _Str1 = *(int **)piVar3;
        }
        iVar2 = _stricmp((char *)_Str1,(char *)piVar4);
        if (iVar2 == 0) {
          bVar1 = *piVar6 < *piVar7;
        }
        else {
          bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
        }
        if (bVar1 == false) {
          if (0xf < *(ulonglong *)(param_3 + -0xc)) {
            piVar3 = *(int **)piVar3;
          }
          piVar4 = piVar7 + 2;
          if (0xf < *(ulonglong *)(piVar7 + 8)) {
            piVar4 = *(int **)piVar4;
          }
          iVar2 = _stricmp((char *)piVar4,(char *)piVar3);
          if (iVar2 == 0) {
            bVar1 = *piVar7 < *piVar6;
          }
          else {
            bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
          }
          if (bVar1 != false) break;
          piVar7 = piVar7 + -0x14;
          if (piVar7 != piVar6) {
            FUN_18023ae00(piVar7,piVar6);
          }
        }
      }
      if ((param_3 == param_2) && (piVar8 == param_4)) {
        *param_1 = (ulonglong)piVar7;
        param_1[1] = (ulonglong)piVar5;
        return;
      }
      if (param_3 == param_2) {
        if (piVar5 != piVar8) {
          FUN_18023ae00(piVar7,piVar5);
        }
        FUN_18023ae00(piVar7,piVar8);
        piVar8 = piVar8 + 0x14;
        piVar5 = piVar5 + 0x14;
        piVar7 = piVar7 + 0x14;
      }
      else {
        param_3 = param_3 + -0x14;
        if (piVar8 == param_4) {
          piVar7 = piVar7 + -0x14;
          if (param_3 != piVar7) {
            FUN_18023ae00(param_3,piVar7);
          }
          FUN_18023ae00(piVar7,piVar5 + -0x14);
          piVar5 = piVar5 + -0x14;
        }
        else {
          FUN_18023ae00(piVar8,param_3);
          piVar8 = piVar8 + 0x14;
        }
      }
      goto joined_r0x000180230e24;
    }
    piVar6 = piVar8 + 2;
    if (0xf < *(ulonglong *)(piVar8 + 8)) {
      piVar6 = *(int **)piVar6;
    }
    piVar4 = piVar7 + 2;
    if (0xf < *(ulonglong *)(piVar7 + 8)) {
      piVar4 = *(int **)(piVar7 + 2);
    }
    iVar2 = _stricmp((char *)piVar4,(char *)piVar6);
    if (iVar2 == 0) {
      bVar1 = *piVar7 < *piVar8;
    }
    else {
      bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
    }
    if (bVar1 == false) {
      piVar6 = piVar7 + 2;
      if (0xf < *(ulonglong *)(piVar7 + 8)) {
        piVar6 = *(int **)piVar6;
      }
      piVar4 = piVar8 + 2;
      if (0xf < *(ulonglong *)(piVar8 + 8)) {
        piVar4 = *(int **)piVar4;
      }
      iVar2 = _stricmp((char *)piVar4,(char *)piVar6);
      if (iVar2 == 0) {
        bVar1 = *piVar8 < *piVar7;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      if (bVar1 != false) goto joined_r0x000180230ec1;
      if (piVar5 != piVar8) {
        FUN_18023ae00(piVar5,piVar8);
      }
      piVar5 = piVar5 + 0x14;
    }
    piVar8 = piVar8 + 0x14;
  } while( true );
}


