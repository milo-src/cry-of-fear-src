
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018400 <.text+0x17400>:
10018400:	55                   	push   ebp
10018401:	8b ec                	mov    ebp,esp
10018403:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10018406:	57                   	push   edi
10018407:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1001840a:	85 ff                	test   edi,edi
1001840c:	74 1e                	je     0x1001842c
1001840e:	81 38 8c 00 00 00    	cmp    DWORD PTR [eax],0x8c
10018414:	75 16                	jne    0x1001842c
10018416:	56                   	push   esi
10018417:	b9 32 00 00 00       	mov    ecx,0x32
1001841c:	be f8 19 21 10       	mov    esi,0x102119f8
10018421:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10018423:	5e                   	pop    esi
10018424:	b8 01 00 00 00       	mov    eax,0x1
10018429:	5f                   	pop    edi
1001842a:	5d                   	pop    ebp
1001842b:	c3                   	ret
1001842c:	c7 00 8c 00 00 00    	mov    DWORD PTR [eax],0x8c
10018432:	33 c0                	xor    eax,eax
10018434:	5f                   	pop    edi
10018435:	5d                   	pop    ebp
10018436:	c3                   	ret
