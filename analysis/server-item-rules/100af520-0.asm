
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100af520 <.text+0xae520>:
100af520:	55                   	push   ebp
100af521:	8b ec                	mov    ebp,esp
100af523:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100af526:	85 c0                	test   eax,eax
100af528:	74 25                	je     0x100af54f
100af52a:	50                   	push   eax
100af52b:	e8 30 09 03 00       	call   0x100dfe60
100af530:	83 c4 04             	add    esp,0x4
100af533:	83 f8 ff             	cmp    eax,0xffffffff
100af536:	7e 17                	jle    0x100af54f
100af538:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100af53b:	50                   	push   eax
100af53c:	e8 ef bb 02 00       	call   0x100db130
100af541:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
100af544:	7d 09                	jge    0x100af54f
100af546:	b8 01 00 00 00       	mov    eax,0x1
100af54b:	5d                   	pop    ebp
100af54c:	c2 0c 00             	ret    0xc
100af54f:	33 c0                	xor    eax,eax
100af551:	5d                   	pop    ebp
100af552:	c2 0c 00             	ret    0xc
