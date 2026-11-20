
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce8c0 <.text+0xcd8c0>:
100ce8c0:	55                   	push   ebp
100ce8c1:	8b ec                	mov    ebp,esp
100ce8c3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ce8c6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ce8c9:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
100ce8d0:	75 24                	jne    0x100ce8f6
100ce8d2:	83 b8 c4 01 00 00 00 	cmp    DWORD PTR [eax+0x1c4],0x0
100ce8d9:	74 12                	je     0x100ce8ed
100ce8db:	83 b8 c8 01 00 00 ed 	cmp    DWORD PTR [eax+0x1c8],0xffffffed
100ce8e2:	74 09                	je     0x100ce8ed
100ce8e4:	b8 04 00 00 00       	mov    eax,0x4
100ce8e9:	5d                   	pop    ebp
100ce8ea:	c2 04 00             	ret    0x4
100ce8ed:	b8 02 00 00 00       	mov    eax,0x2
100ce8f2:	5d                   	pop    ebp
100ce8f3:	c2 04 00             	ret    0x4
100ce8f6:	b8 01 00 00 00       	mov    eax,0x1
100ce8fb:	5d                   	pop    ebp
100ce8fc:	c2 04 00             	ret    0x4
