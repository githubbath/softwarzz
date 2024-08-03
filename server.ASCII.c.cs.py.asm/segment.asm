.org 0x6000
[bits 32]

storage:
  mov ebp, 4
  mov esp, 3
  mov eax,  6
  call
  jmp loopa
loopa:
  and eax, esp
  pop ebp
  pop eax 
  or eax, ebp
  call
  jmp ea

ea:
  nop
  .org 0x7C000
  lods eax 
  xor eax, ebp 
  nop
  lods ebp
  jmp asz

asz:
  nop
  push eax
  pop ebp
  not eax
  nop
  xor eax, ebp
  ret