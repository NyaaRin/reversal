// 0x180157e40  FUN_180157e40
// size=361 thunk=false
// signature: undefined FUN_180157e40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180157e40(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  FUN_180158560();
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x6f345088566206f7;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_38,&local_20);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  cVar1 = *pcVar6;
  if (DAT_180409db4 < 6) {
    cVar3 = FUN_180155560();
    if (cVar3 != '\0') {
      bVar2 = false;
      goto LAB_180157ecf;
    }
  }
  bVar2 = true;
LAB_180157ecf:
  if ((DAT_180409ff0 == '\0') || (((DAT_180409e40 == '\0' && (cVar1 != '\0')) || (!bVar2)))) {
    DVar4 = GetTickCount();
    if ((DAT_1803ff0d4 == 0) || (499 < DVar4 - DAT_1803ff0d4)) {
      DAT_1803ff0d4 = DVar4;
      if (DAT_180409ff0 == '\0') {
        FUN_180157610(&DAT_180409f70,0,&LAB_18020a860,"client");
      }
      if ((DAT_180409e40 == '\0') && (cVar1 != '\0')) {
        FUN_180157610(&DAT_180409dc0,2,&LAB_18020a7e0,&DAT_1803406cc);
      }
      if ((!bVar2) && (DAT_1803fa678 != (longlong *)0x0)) {
        lVar7 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != 0)) {
          FUN_180157aa0();
        }
      }
    }
  }
  return;
}


