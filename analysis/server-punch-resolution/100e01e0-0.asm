
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e01e0 <.text+0xdf1e0>:
100e01e0:	55                   	push   ebp
100e01e1:	8b ec                	mov    ebp,esp
100e01e3:	83 ec 0c             	sub    esp,0xc
100e01e6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100e01e9:	f3 0f 10 90 78 01 00 	movss  xmm2,DWORD PTR [eax+0x178]
100e01f0:	00 
100e01f1:	f3 0f 10 88 7c 01 00 	movss  xmm1,DWORD PTR [eax+0x17c]
100e01f8:	00 
100e01f9:	f3 0f 10 80 80 01 00 	movss  xmm0,DWORD PTR [eax+0x180]
100e0200:	00 
100e0201:	f3 0f 58 50 08       	addss  xmm2,DWORD PTR [eax+0x8]
100e0206:	f3 0f 58 48 0c       	addss  xmm1,DWORD PTR [eax+0xc]
100e020b:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
100e0210:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100e0213:	0f 14 d1             	unpcklps xmm2,xmm1
100e0216:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100e021b:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e021e:	66 0f d6 10          	movq   QWORD PTR [eax],xmm2
100e0222:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
100e0225:	8b e5                	mov    esp,ebp
100e0227:	5d                   	pop    ebp
100e0228:	c2 04 00             	ret    0x4
