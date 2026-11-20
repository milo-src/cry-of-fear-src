
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002e30 <.text+0x1e30>:
10002e30:	55                   	push   ebp
10002e31:	8b ec                	mov    ebp,esp
10002e33:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10002e36:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10002e39:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10002e3c:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
10002e41:	f3 0f 59 41 04       	mulss  xmm0,DWORD PTR [ecx+0x4]
10002e46:	f3 0f 10 49 08       	movss  xmm1,DWORD PTR [ecx+0x8]
10002e4b:	f3 0f 59 4a 04       	mulss  xmm1,DWORD PTR [edx+0x4]
10002e50:	f3 0f 5c c8          	subss  xmm1,xmm0
10002e54:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10002e58:	f3 0f 10 4a 08       	movss  xmm1,DWORD PTR [edx+0x8]
10002e5d:	f3 0f 59 09          	mulss  xmm1,DWORD PTR [ecx]
10002e61:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10002e65:	f3 0f 59 41 08       	mulss  xmm0,DWORD PTR [ecx+0x8]
10002e6a:	f3 0f 5c c8          	subss  xmm1,xmm0
10002e6e:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10002e73:	f3 0f 10 0a          	movss  xmm1,DWORD PTR [edx]
10002e77:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10002e7b:	f3 0f 59 49 04       	mulss  xmm1,DWORD PTR [ecx+0x4]
10002e80:	f3 0f 59 42 04       	mulss  xmm0,DWORD PTR [edx+0x4]
10002e85:	f3 0f 5c c8          	subss  xmm1,xmm0
10002e89:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10002e8e:	5d                   	pop    ebp
10002e8f:	c3                   	ret
