
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f390 <.text+0xe390>:
1000f390:	55                   	push   ebp
1000f391:	8b ec                	mov    ebp,esp
1000f393:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f396:	85 c9                	test   ecx,ecx
1000f398:	74 3a                	je     0x1000f3d4
1000f39a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000f39d:	3b 81 a4 00 00 00    	cmp    eax,DWORD PTR [ecx+0xa4]
1000f3a3:	7d 2f                	jge    0x1000f3d4
1000f3a5:	8b 91 a8 00 00 00    	mov    edx,DWORD PTR [ecx+0xa8]
1000f3ab:	69 c0 b0 00 00 00    	imul   eax,eax,0xb0
1000f3b1:	03 d0                	add    edx,eax
1000f3b3:	8b 44 0a 38          	mov    eax,DWORD PTR [edx+ecx*1+0x38]
1000f3b7:	83 f8 01             	cmp    eax,0x1
1000f3ba:	7e 18                	jle    0x1000f3d4
1000f3bc:	48                   	dec    eax
1000f3bd:	66 0f 6e c0          	movd   xmm0,eax
1000f3c1:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000f3c4:	f3 0f 5e 44 0a 20    	divss  xmm0,DWORD PTR [edx+ecx*1+0x20]
1000f3ca:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1000f3cf:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000f3d2:	5d                   	pop    ebp
1000f3d3:	c3                   	ret
1000f3d4:	d9 ee                	fldz
1000f3d6:	5d                   	pop    ebp
1000f3d7:	c3                   	ret
