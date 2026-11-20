
D:/Steam/steamapps/common/Cry of Fear/hw.dll:     file format pei-i386


Disassembly of section .text:

01d483c6 <.text+0x473c6>:
 1d483c6:	55                   	push   ebp
 1d483c7:	8b ec                	mov    ebp,esp
 1d483c9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d483cc:	c7 40 10 00 00 00 00 	mov    DWORD PTR [eax+0x10],0x0
 1d483d3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d483d6:	66 8b 51 04          	mov    dx,WORD PTR [ecx+0x4]
 1d483da:	66 81 e2 fd ff       	and    dx,0xfffd
 1d483df:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d483e2:	66 89 50 04          	mov    WORD PTR [eax+0x4],dx
 1d483e6:	5d                   	pop    ebp
 1d483e7:	c3                   	ret
