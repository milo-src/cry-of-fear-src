
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2760 <.text+0xc1760>:
100c2760:	55                   	push   ebp
100c2761:	8b ec                	mov    ebp,esp
100c2763:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100c2768:	0f 57 c9             	xorps  xmm1,xmm1
100c276b:	0f 2e c1             	ucomiss xmm0,xmm1
100c276e:	9f                   	lahf
100c276f:	f6 c4 44             	test   ah,0x44
100c2772:	7a 26                	jp     0x100c279a
100c2774:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c2779:	0f 2e c1             	ucomiss xmm0,xmm1
100c277c:	9f                   	lahf
100c277d:	f6 c4 44             	test   ah,0x44
100c2780:	7a 18                	jp     0x100c279a
100c2782:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c2787:	0f 2e c1             	ucomiss xmm0,xmm1
100c278a:	9f                   	lahf
100c278b:	f6 c4 44             	test   ah,0x44
100c278e:	7a 0a                	jp     0x100c279a
100c2790:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100c2793:	d9 40 54             	fld    DWORD PTR [eax+0x54]
100c2796:	5d                   	pop    ebp
100c2797:	c2 0c 00             	ret    0xc
100c279a:	8d 45 08             	lea    eax,[ebp+0x8]
100c279d:	50                   	push   eax
100c279e:	e8 8d 81 05 00       	call   0x1011a930
100c27a3:	83 c4 04             	add    esp,0x4
100c27a6:	5d                   	pop    ebp
100c27a7:	c2 0c 00             	ret    0xc
