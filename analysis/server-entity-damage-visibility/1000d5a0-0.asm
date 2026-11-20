
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d5a0 <.text+0xc5a0>:
1000d5a0:	55                   	push   ebp
1000d5a1:	8b ec                	mov    ebp,esp
1000d5a3:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1000d5a6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000d5a9:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
1000d5b0:	00 
1000d5b1:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
1000d5b6:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1000d5ba:	f3 0f 10 81 7c 01 00 	movss  xmm0,DWORD PTR [ecx+0x17c]
1000d5c1:	00 
1000d5c2:	f3 0f 58 41 0c       	addss  xmm0,DWORD PTR [ecx+0xc]
1000d5c7:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000d5cc:	f3 0f 10 81 80 01 00 	movss  xmm0,DWORD PTR [ecx+0x180]
1000d5d3:	00 
1000d5d4:	f3 0f 58 41 10       	addss  xmm0,DWORD PTR [ecx+0x10]
1000d5d9:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1000d5de:	5d                   	pop    ebp
1000d5df:	c2 04 00             	ret    0x4
