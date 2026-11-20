
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100183d0 <.text+0x173d0>:
100183d0:	55                   	push   ebp
100183d1:	8b ec                	mov    ebp,esp
100183d3:	57                   	push   edi
100183d4:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100183d7:	85 ff                	test   edi,edi
100183d9:	74 1f                	je     0x100183fa
100183db:	81 7d 0c 8c 00 00 00 	cmp    DWORD PTR [ebp+0xc],0x8c
100183e2:	75 16                	jne    0x100183fa
100183e4:	56                   	push   esi
100183e5:	b9 32 00 00 00       	mov    ecx,0x32
100183ea:	be f8 19 21 10       	mov    esi,0x102119f8
100183ef:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100183f1:	5e                   	pop    esi
100183f2:	b8 01 00 00 00       	mov    eax,0x1
100183f7:	5f                   	pop    edi
100183f8:	5d                   	pop    ebp
100183f9:	c3                   	ret
100183fa:	33 c0                	xor    eax,eax
100183fc:	5f                   	pop    edi
100183fd:	5d                   	pop    ebp
100183fe:	c3                   	ret
