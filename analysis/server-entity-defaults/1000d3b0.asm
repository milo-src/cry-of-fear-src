
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d3b0 <.text+0xc3b0>:
1000d3b0:	55                   	push   ebp
1000d3b1:	8b ec                	mov    ebp,esp
1000d3b3:	8b 01                	mov    eax,DWORD PTR [ecx]
1000d3b5:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1000d3ba:	6a 00                	push   0x0
1000d3bc:	51                   	push   ecx
1000d3bd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000d3c2:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1000d3c5:	5d                   	pop    ebp
1000d3c6:	c2 04 00             	ret    0x4
