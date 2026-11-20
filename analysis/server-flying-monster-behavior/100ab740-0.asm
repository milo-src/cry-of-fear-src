
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab740 <.text+0xaa740>:
100ab740:	55                   	push   ebp
100ab741:	8b ec                	mov    ebp,esp
100ab743:	83 ec 44             	sub    esp,0x44
100ab746:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ab749:	8d 4d bc             	lea    ecx,[ebp-0x44]
100ab74c:	51                   	push   ecx
100ab74d:	6a 00                	push   0x0
100ab74f:	6a 01                	push   0x1
100ab751:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ab755:	8d 4d f4             	lea    ecx,[ebp-0xc]
100ab758:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100ab75d:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100ab762:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100ab767:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100ab76c:	f3 0f 5c 05 d8 fe 1a 	subss  xmm0,DWORD PTR ds:0x101afed8
100ab773:	10 
100ab774:	51                   	push   ecx
100ab775:	50                   	push   eax
100ab776:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100ab77b:	e8 80 f0 06 00       	call   0x1011a800
100ab780:	f3 0f 10 45 cc       	movss  xmm0,DWORD PTR [ebp-0x34]
100ab785:	83 c4 14             	add    esp,0x14
100ab788:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100ab78f:	9f                   	lahf
100ab790:	f6 c4 44             	test   ah,0x44
100ab793:	7b 09                	jnp    0x100ab79e
100ab795:	d9 45 d8             	fld    DWORD PTR [ebp-0x28]
100ab798:	8b e5                	mov    esp,ebp
100ab79a:	5d                   	pop    ebp
100ab79b:	c2 04 00             	ret    0x4
100ab79e:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
100ab7a1:	8b e5                	mov    esp,ebp
100ab7a3:	5d                   	pop    ebp
100ab7a4:	c2 04 00             	ret    0x4
