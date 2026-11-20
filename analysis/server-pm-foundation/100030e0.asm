
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100030e0 <.text+0x20e0>:
100030e0:	55                   	push   ebp
100030e1:	8b ec                	mov    ebp,esp
100030e3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100030e6:	33 c0                	xor    eax,eax
100030e8:	d1 f9                	sar    ecx,1
100030ea:	74 09                	je     0x100030f5
100030ec:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100030f0:	40                   	inc    eax
100030f1:	d1 f9                	sar    ecx,1
100030f3:	75 fb                	jne    0x100030f0
100030f5:	5d                   	pop    ebp
100030f6:	c3                   	ret
