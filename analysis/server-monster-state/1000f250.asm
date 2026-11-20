
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f250 <.text+0xe250>:
1000f250:	55                   	push   ebp
1000f251:	8b ec                	mov    ebp,esp
1000f253:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1000f256:	85 d2                	test   edx,edx
1000f258:	74 23                	je     0x1000f27d
1000f25a:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1000f25d:	8b 81 2c 01 00 00    	mov    eax,DWORD PTR [ecx+0x12c]
1000f263:	3b 82 a4 00 00 00    	cmp    eax,DWORD PTR [edx+0xa4]
1000f269:	7d 12                	jge    0x1000f27d
1000f26b:	69 c0 b0 00 00 00    	imul   eax,eax,0xb0
1000f271:	03 82 a8 00 00 00    	add    eax,DWORD PTR [edx+0xa8]
1000f277:	8b 44 10 24          	mov    eax,DWORD PTR [eax+edx*1+0x24]
1000f27b:	5d                   	pop    ebp
1000f27c:	c3                   	ret
1000f27d:	33 c0                	xor    eax,eax
1000f27f:	5d                   	pop    ebp
1000f280:	c3                   	ret
