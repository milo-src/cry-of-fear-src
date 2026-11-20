
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116420 <.text+0x115420>:
10116420:	55                   	push   ebp
10116421:	8b ec                	mov    ebp,esp
10116423:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10116426:	33 c0                	xor    eax,eax
10116428:	85 c9                	test   ecx,ecx
1011642a:	7e 0f                	jle    0x1011643b
1011642c:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1011642f:	90                   	nop
10116430:	80 3c 10 00          	cmp    BYTE PTR [eax+edx*1],0x0
10116434:	75 0e                	jne    0x10116444
10116436:	40                   	inc    eax
10116437:	3b c1                	cmp    eax,ecx
10116439:	7c f5                	jl     0x10116430
1011643b:	b8 01 00 00 00       	mov    eax,0x1
10116440:	5d                   	pop    ebp
10116441:	c2 08 00             	ret    0x8
10116444:	33 c0                	xor    eax,eax
10116446:	5d                   	pop    ebp
10116447:	c2 08 00             	ret    0x8
