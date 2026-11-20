
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003590 <.text+0x2590>:
10003590:	55                   	push   ebp
10003591:	8b ec                	mov    ebp,esp
10003593:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10003596:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10003599:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000359c:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100035a0:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
100035a4:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100035a8:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
100035ad:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
100035b2:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100035b7:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
100035bc:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100035c1:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100035c6:	5d                   	pop    ebp
100035c7:	c3                   	ret
