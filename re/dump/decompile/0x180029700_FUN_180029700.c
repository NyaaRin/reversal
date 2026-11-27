// 0x180029700  FUN_180029700
// size=378 thunk=false
// signature: undefined FUN_180029700()
// status: ok


bool FUN_180029700(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  
  param_3[2] = 0;
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar6 = 0;
  if (*(char *)(param_1 + 3) == '\0') {
LAB_180029851:
    bVar9 = false;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar6; param_1 = param_1 + 0x12) {
      if (0x100 < (ulonglong)(param_3[2] + param_1[2])) goto LAB_180029851;
      puVar7 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      FUN_18021aef0(param_3,puVar7);
      sVar2 = param_1[6];
      if (sVar2 != 0) {
        if (param_1[8] != param_1[9]) goto LAB_180029851;
        puVar7 = (undefined8 *)*param_2;
        puVar8 = (undefined8 *)param_2[1];
        if (puVar7 != puVar8) {
          uVar3 = param_1[7];
          do {
            _Buf2 = param_1 + 4;
            if (0xf < uVar3) {
              _Buf2 = (undefined8 *)*_Buf2;
            }
            _Size = puVar7[2];
            _Buf1 = puVar7;
            if (0xf < (ulonglong)puVar7[3]) {
              _Buf1 = (undefined8 *)*puVar7;
            }
            if ((_Size == sVar2) &&
               ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) {
              uVar1 = *(undefined1 *)(puVar7 + 9);
              puVar8 = puVar7 + 4;
              uVar10 = puVar7[8];
              goto LAB_180029816;
            }
            puVar7 = puVar7 + 10;
          } while (puVar7 != puVar8);
        }
        if (*(char *)(param_1 + 0x10) == '\0') goto LAB_180029851;
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x81);
        puVar8 = param_1 + 0xb;
        uVar10 = param_1[0xf];
LAB_180029816:
        cVar4 = FUN_180028f70(param_1,puVar8,uVar10,uVar1,param_3);
        if (cVar4 == '\0') goto LAB_180029851;
      }
    }
    bVar9 = param_3[2] != 0;
  }
  return bVar9;
}


