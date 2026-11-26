// 0x1801572b0  FUN_1801572b0
// size=862 thunk=false
// signature: undefined FUN_1801572b0()
// status: ok


bool FUN_1801572b0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = (*DAT_180409e50)();
  bVar4 = false;
  (*DAT_180409f30)(param_1,&DAT_18033f608);
  (*DAT_180409f38)(param_1,0xffffd8ee);
  iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
  if (iVar2 == 5) {
    (*DAT_180409f30)(param_1,PTR_DAT_18033c630);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      bVar4 = lVar3 != 0;
      *param_2 = lVar3;
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_s_Exists_18033c638);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[1] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_s_IsDir_18033c640);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[2] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_DAT_18033c648);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[3] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_DAT_18033c650);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[4] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_DAT_18033c658);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[5] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_DAT_18033c660);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[6] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,PTR_s_AsyncRead_18033c668);
    (*DAT_180409f38)(param_1,0xfffffffe);
    iVar2 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar2 == 6) {
      lVar3 = (*DAT_180409d48)(param_1,0xffffffff);
      param_2[7] = lVar3;
      if ((bVar4 != false) || (lVar3 != 0)) {
        bVar4 = true;
      }
    }
    (*DAT_180409f20)(param_1,0xfffffffe);
  }
  (*DAT_180409f20)(param_1,uVar1);
  return bVar4;
}


