// 0x18027fc30  FUN_18027fc30
// size=363 thunk=false
// signature: undefined FUN_18027fc30()
// status: ok


void FUN_18027fc30(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  FUN_18028a0b0(lVar1 + 0x2018,*(int *)(lVar1 + 0x2018) + 1);
  lVar3 = *(longlong *)(lVar1 + 0x2020);
  lVar4 = (longlong)*(int *)(lVar1 + 0x2018) * 0x3c;
  *(undefined4 *)(lVar4 + -0x3c + lVar3) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar4 + -0x38 + lVar3) = *(undefined8 *)(lVar2 + 0x118);
  *(undefined8 *)(lVar4 + -0x28 + lVar3) = *(undefined8 *)(lVar2 + 0x120);
  *(undefined8 *)(lVar4 + -0x30 + lVar3) = *(undefined8 *)(lVar2 + 0x130);
  *(undefined4 *)(lVar4 + -0x20 + lVar3) = *(undefined4 *)(lVar2 + 0x15c);
  *(undefined4 *)(lVar4 + -0x1c + lVar3) = *(undefined4 *)(lVar2 + 0x164);
  *(undefined8 *)(lVar4 + -0x18 + lVar3) = *(undefined8 *)(lVar2 + 0x140);
  *(undefined4 *)(lVar4 + -0x10 + lVar3) = *(undefined4 *)(lVar2 + 0x150);
  *(undefined4 *)(lVar4 + -0xc + lVar3) = *(undefined4 *)(lVar1 + 0x1598);
  *(bool *)(lVar4 + -6 + lVar3) = *(int *)(lVar1 + 0x157c) != 0;
  *(undefined1 *)(lVar4 + -5 + lVar3) = *(undefined1 *)(lVar2 + 0x158);
  *(undefined1 *)(lVar4 + -8 + lVar3) = *(undefined1 *)(lVar1 + 0x15a5);
  *(undefined1 *)(lVar4 + -7 + lVar3) = *(undefined1 *)(lVar1 + 0x15cd);
  *(undefined1 *)(lVar4 + -4 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x140) = 0;
  fVar5 = (*(float *)(lVar2 + 0x118) - *(float *)(lVar2 + 0x28)) - *(float *)(lVar2 + 0x160);
  *(float *)(lVar2 + 0x164) = fVar5;
  *(float *)(lVar2 + 0x15c) = fVar5;
  *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0x118);
  if (*(char *)(lVar1 + 0x2858) != '\0') {
    *(undefined4 *)(lVar1 + 0x2890) = 0xff7fffff;
  }
  return;
}


