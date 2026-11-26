// 0x1801180a0  FUN_1801180a0
// size=1725 thunk=false
// signature: undefined FUN_1801180a0()
// status: ok


void FUN_1801180a0(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (DAT_1804236a4 != '\0') {
    return;
  }
  lVar3 = DAT_1804235b0;
  if (DAT_1804235b0 == 0) {
    lVar3 = FUN_18002e990("render","Capture");
  }
  lVar6 = DAT_180423690;
  if (DAT_180423690 == 0) {
    lVar6 = FUN_18002e990("render","CapturePixels");
  }
  lVar5 = DAT_180423668;
  if (DAT_180423668 == 0) {
    lVar5 = FUN_18002e990("render","RenderView");
  }
  lVar4 = DAT_180423588;
  if (DAT_180423588 == 0) {
    lVar4 = FUN_18002e990("render","CopyRenderTargetToTexture");
  }
  lVar7 = DAT_1804235f0;
  if (DAT_1804235f0 == 0) {
    lVar7 = FUN_18002e990("render","Clear");
  }
  lVar8 = DAT_1804235c0;
  if (DAT_1804235c0 == 0) {
    lVar8 = FUN_18002e990("render","GetRenderTarget");
  }
  if ((lVar3 != 0) && (DAT_180423608 == 0)) {
    DAT_180423608 = lVar3;
  }
  if ((lVar6 != 0) && (DAT_180423658 == 0)) {
    DAT_180423658 = lVar6;
  }
  if ((DAT_1804235b9 == '\0') && ((DAT_1804235b0 != 0 || (DAT_1804235b0 = lVar3, lVar3 != 0)))) {
    if (DAT_1804235b8 == '\0') {
      iVar1 = FUN_180242fc0(DAT_1804235b0,FUN_180116aa0,&DAT_180423648);
      if (iVar1 == 0) {
        DAT_1804235b8 = '\x01';
        goto LAB_180118242;
      }
      DAT_1804235bc = DAT_1804235bc + 1;
      if (5 < DAT_1804235bc) goto LAB_1801182a3;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook create failed: %s\n";
    }
    else {
LAB_180118242:
      iVar1 = FUN_180243560(DAT_1804235b0,1);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        pcVar2 = "[AntiSS] %s hook installed @ %p\n";
        DAT_1804235b9 = '\x01';
        lVar3 = DAT_1804235b0;
      }
      else {
        DAT_1804235bc = DAT_1804235bc + 1;
        if (5 < DAT_1804235bc) goto LAB_1801182a3;
        lVar3 = FUN_1802436b0(iVar1);
        pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
      }
    }
    FUN_180014410(pcVar2,"render.Capture",lVar3);
  }
LAB_1801182a3:
  if ((DAT_180423699 == '\0') && ((DAT_180423690 != 0 || (DAT_180423690 = lVar6, lVar6 != 0)))) {
    if (DAT_180423698 == '\0') {
      iVar1 = FUN_180242fc0(DAT_180423690,FUN_180116f70,&DAT_1804235e0);
      if (iVar1 == 0) {
        DAT_180423698 = '\x01';
        goto LAB_180118323;
      }
      DAT_18042369c = DAT_18042369c + 1;
      if (5 < DAT_18042369c) goto LAB_180118384;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook create failed: %s\n";
    }
    else {
LAB_180118323:
      iVar1 = FUN_180243560(DAT_180423690,1);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        pcVar2 = "[AntiSS] %s hook installed @ %p\n";
        DAT_180423699 = '\x01';
        lVar3 = DAT_180423690;
      }
      else {
        DAT_18042369c = DAT_18042369c + 1;
        if (5 < DAT_18042369c) goto LAB_180118384;
        lVar3 = FUN_1802436b0(iVar1);
        pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
      }
    }
    FUN_180014410(pcVar2,"render.CapturePixels",lVar3);
  }
LAB_180118384:
  if ((DAT_180423671 == '\0') && ((DAT_180423668 != 0 || (DAT_180423668 = lVar5, lVar5 != 0)))) {
    if (DAT_180423670 == '\0') {
      iVar1 = FUN_180242fc0(DAT_180423668,FUN_180117450,&DAT_180423630);
      if (iVar1 == 0) {
        DAT_180423670 = '\x01';
        goto LAB_180118404;
      }
      DAT_180423674 = DAT_180423674 + 1;
      if (5 < DAT_180423674) goto LAB_180118465;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook create failed: %s\n";
    }
    else {
LAB_180118404:
      iVar1 = FUN_180243560(DAT_180423668,1);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        pcVar2 = "[AntiSS] %s hook installed @ %p\n";
        DAT_180423671 = '\x01';
        lVar3 = DAT_180423668;
      }
      else {
        DAT_180423674 = DAT_180423674 + 1;
        if (5 < DAT_180423674) goto LAB_180118465;
        lVar3 = FUN_1802436b0(iVar1);
        pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
      }
    }
    FUN_180014410(pcVar2,"render.RenderView",lVar3);
  }
LAB_180118465:
  if ((DAT_180423591 == '\0') && ((DAT_180423588 != 0 || (DAT_180423588 = lVar4, lVar4 != 0)))) {
    if (DAT_180423590 == '\0') {
      iVar1 = FUN_180242fc0(DAT_180423588,FUN_180117ea0,&DAT_180423660);
      if (iVar1 == 0) {
        DAT_180423590 = '\x01';
        goto LAB_1801184e5;
      }
      DAT_180423594 = DAT_180423594 + 1;
      if (5 < DAT_180423594) goto LAB_180118546;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook create failed: %s\n";
    }
    else {
LAB_1801184e5:
      iVar1 = FUN_180243560(DAT_180423588,1);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        pcVar2 = "[AntiSS] %s hook installed @ %p\n";
        DAT_180423591 = '\x01';
        lVar3 = DAT_180423588;
      }
      else {
        DAT_180423594 = DAT_180423594 + 1;
        if (5 < DAT_180423594) goto LAB_180118546;
        lVar3 = FUN_1802436b0(iVar1);
        pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
      }
    }
    FUN_180014410(pcVar2,"render.CopyRenderTargetToTexture",lVar3);
  }
LAB_180118546:
  if ((DAT_1804235f9 == '\0') && ((DAT_1804235f0 != 0 || (DAT_1804235f0 = lVar7, lVar7 != 0)))) {
    if (DAT_1804235f8 == '\0') {
      iVar1 = FUN_180242fc0(DAT_1804235f0,FUN_1801169e0,&DAT_180423680);
      if (iVar1 == 0) {
        DAT_1804235f8 = '\x01';
        goto LAB_1801185c6;
      }
      DAT_1804235fc = DAT_1804235fc + 1;
      if (5 < DAT_1804235fc) goto LAB_180118627;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook create failed: %s\n";
    }
    else {
LAB_1801185c6:
      iVar1 = FUN_180243560(DAT_1804235f0,1);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        pcVar2 = "[AntiSS] %s hook installed @ %p\n";
        DAT_1804235f9 = '\x01';
        lVar3 = DAT_1804235f0;
      }
      else {
        DAT_1804235fc = DAT_1804235fc + 1;
        if (5 < DAT_1804235fc) goto LAB_180118627;
        lVar3 = FUN_1802436b0(iVar1);
        pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
      }
    }
    FUN_180014410(pcVar2,"render.Clear",lVar3);
  }
LAB_180118627:
  if ((DAT_1804235c9 != '\0') || ((DAT_1804235c0 == 0 && (DAT_1804235c0 = lVar8, lVar8 == 0))))
  goto LAB_180118708;
  if (DAT_1804235c8 == '\0') {
    iVar1 = FUN_180242fc0(DAT_1804235c0,&LAB_180116a60,&DAT_1804235d8);
    if (iVar1 == 0) {
      DAT_1804235c8 = '\x01';
      goto LAB_1801186a7;
    }
    DAT_1804235cc = DAT_1804235cc + 1;
    if (5 < DAT_1804235cc) goto LAB_180118708;
    lVar3 = FUN_1802436b0(iVar1);
    pcVar2 = "[AntiSS] %s hook create failed: %s\n";
  }
  else {
LAB_1801186a7:
    iVar1 = FUN_180243560(DAT_1804235c0,1);
    if ((iVar1 == 0) || (iVar1 == 5)) {
      pcVar2 = "[AntiSS] %s hook installed @ %p\n";
      DAT_1804235c9 = '\x01';
      lVar3 = DAT_1804235c0;
    }
    else {
      DAT_1804235cc = DAT_1804235cc + 1;
      if (5 < DAT_1804235cc) goto LAB_180118708;
      lVar3 = FUN_1802436b0(iVar1);
      pcVar2 = "[AntiSS] %s hook enable failed: %s\n";
    }
  }
  FUN_180014410(pcVar2,"render.GetRenderTarget",lVar3);
LAB_180118708:
  if ((((DAT_1804235b9 != '\0') && (DAT_180423699 != '\0')) && (DAT_180423671 != '\0')) &&
     (((DAT_180423591 != '\0' && (DAT_1804235f9 != '\0')) && (DAT_1804235c9 != '\0')))) {
    DAT_1804236a4 = 1;
    return;
  }
  DAT_1804236a4 = 0;
  return;
}


