
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f3e0 <.text+0xe3e0>:
1000f3e0:	55                   	push   ebp
1000f3e1:	8b ec                	mov    ebp,esp
1000f3e3:	56                   	push   esi
1000f3e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000f3e7:	85 f6                	test   esi,esi
1000f3e9:	74 3f                	je     0x1000f42a
1000f3eb:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000f3ee:	56                   	push   esi
1000f3ef:	e8 3c 01 00 00       	call   0x1000f530
1000f3f4:	83 c4 08             	add    esp,0x8
1000f3f7:	83 f8 ff             	cmp    eax,0xffffffff
1000f3fa:	7e 2e                	jle    0x1000f42a
1000f3fc:	69 c8 b0 00 00 00    	imul   ecx,eax,0xb0
1000f402:	03 8e a8 00 00 00    	add    ecx,DWORD PTR [esi+0xa8]
1000f408:	8b 44 31 38          	mov    eax,DWORD PTR [ecx+esi*1+0x38]
1000f40c:	83 f8 01             	cmp    eax,0x1
1000f40f:	7e 19                	jle    0x1000f42a
1000f411:	48                   	dec    eax
1000f412:	66 0f 6e c0          	movd   xmm0,eax
1000f416:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000f419:	f3 0f 5e 44 31 20    	divss  xmm0,DWORD PTR [ecx+esi*1+0x20]
1000f41f:	5e                   	pop    esi
1000f420:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1000f425:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000f428:	5d                   	pop    ebp
1000f429:	c3                   	ret
1000f42a:	d9 ee                	fldz
1000f42c:	5e                   	pop    esi
1000f42d:	5d                   	pop    ebp
1000f42e:	c3                   	ret
