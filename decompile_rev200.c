#include <stdio.h> 

int main(void)

{
  int iVar1;
  int *puVar2;
  int local_84;
  int local_7c [14];
  int local_44 [14];
  
  local_7c[0] = 0x7a;
  local_7c[1] = 0x69;
  local_7c[2] = 0x78;
  local_7c[3] = 0x6e;
  local_7c[4] = 0x62;
  local_7c[5] = 0x6f;
  local_7c[6] = 0x7c;
  local_7c[7] = 0x6b;
  local_7c[8] = 0x77;
  local_7c[9] = 0x78;
  local_7c[10] = 0x74;
  local_7c[11] = 0x38;
  local_7c[12] = 0x38;
  local_7c[13] = 100;
  puVar2 = local_44;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_84 = 0; local_84 < 0xe; local_84 = local_84 + 1) {
    local_44[local_84] = local_7c[local_84] ^ 0x19;
  }

  // local_7cの出力
    printf("local_7c:\n");
    for (local_84 = 0; local_84 < 14; local_84++) {
        printf("0x%02x ", local_7c[local_84]);
    }
    printf("\n");

    // local_44の出力
    printf("local_44:\n");
    for (local_84 = 0; local_84 < 14; local_84++) {
        printf("0x%02x ", local_44[local_84]);
    }
    printf("\n");
  return 0;
}
