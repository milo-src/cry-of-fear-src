
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100035f0 <.text+0x25f0>:
100035f0:	55                   	push   ebp
100035f1:	8b ec                	mov    ebp,esp
100035f3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100035f6:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100035f9:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100035fc:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10003600:	f3 0f 5c 01          	subss  xmm0,DWORD PTR [ecx]
10003604:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10003608:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
1000360d:	f3 0f 5c 41 04       	subss  xmm0,DWORD PTR [ecx+0x4]
10003612:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10003617:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
1000361c:	f3 0f 5c 41 08       	subss  xmm0,DWORD PTR [ecx+0x8]
10003621:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10003626:	5d                   	pop    ebp
10003627:	c3                   	ret
