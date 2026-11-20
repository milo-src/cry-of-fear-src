
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f1d0 <.text+0xe1d0>:
1000f1d0:	55                   	push   ebp
1000f1d1:	8b ec                	mov    ebp,esp
1000f1d3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1000f1d6:	56                   	push   esi
1000f1d7:	85 d2                	test   edx,edx
1000f1d9:	74 4d                	je     0x1000f228
1000f1db:	8b 82 98 00 00 00    	mov    eax,DWORD PTR [edx+0x98]
1000f1e1:	33 c9                	xor    ecx,ecx
1000f1e3:	03 c2                	add    eax,edx
1000f1e5:	8b 92 94 00 00 00    	mov    edx,DWORD PTR [edx+0x94]
1000f1eb:	85 d2                	test   edx,edx
1000f1ed:	7e 10                	jle    0x1000f1ff
1000f1ef:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1000f1f2:	39 70 14             	cmp    DWORD PTR [eax+0x14],esi
1000f1f5:	74 0c                	je     0x1000f203
1000f1f7:	41                   	inc    ecx
1000f1f8:	83 c0 18             	add    eax,0x18
1000f1fb:	3b ca                	cmp    ecx,edx
1000f1fd:	7c f3                	jl     0x1000f1f2
1000f1ff:	3b ca                	cmp    ecx,edx
1000f201:	7d 25                	jge    0x1000f228
1000f203:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
1000f208:	0f 57 c0             	xorps  xmm0,xmm0
1000f20b:	0f 2f c1             	comiss xmm0,xmm1
1000f20e:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
1000f213:	76 0d                	jbe    0x1000f222
1000f215:	f3 0f 59 0d d0 13 1a 	mulss  xmm1,DWORD PTR ds:0x101a13d0
1000f21c:	10 
1000f21d:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
1000f222:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000f225:	5e                   	pop    esi
1000f226:	5d                   	pop    ebp
1000f227:	c3                   	ret
1000f228:	d9 ee                	fldz
1000f22a:	5e                   	pop    esi
1000f22b:	5d                   	pop    ebp
1000f22c:	c3                   	ret
