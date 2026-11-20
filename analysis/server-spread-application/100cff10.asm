
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cff10 <.text+0xcef10>:
100cff10:	55                   	push   ebp
100cff11:	8b ec                	mov    ebp,esp
100cff13:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
100cff16:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
100cff1b:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100cff1e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cff21:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100cff25:	f3 0f 59 c1          	mulss  xmm0,xmm1
100cff29:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
100cff2d:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100cff31:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
100cff36:	f3 0f 59 c1          	mulss  xmm0,xmm1
100cff3a:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
100cff3f:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100cff44:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
100cff49:	f3 0f 59 c1          	mulss  xmm0,xmm1
100cff4d:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100cff52:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100cff57:	5d                   	pop    ebp
100cff58:	c3                   	ret
