
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c95f0 <.text+0xc85f0>:
100c95f0:	55                   	push   ebp
100c95f1:	8b ec                	mov    ebp,esp
100c95f3:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
100c95fa:	74 3a                	je     0x100c9636
100c95fc:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100c95ff:	f7 82 b0 22 00 00 27 	test   DWORD PTR [edx+0x22b0],0x827
100c9606:	08 00 00 
100c9609:	74 0a                	je     0x100c9615
100c960b:	c7 81 e0 00 00 00 01 	mov    DWORD PTR [ecx+0xe0],0x1
100c9612:	00 00 00 
100c9615:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100c9618:	c7 82 b0 22 00 00 00 	mov    DWORD PTR [edx+0x22b0],0x0
100c961f:	00 00 00 
100c9622:	c7 80 84 01 00 00 00 	mov    DWORD PTR [eax+0x184],0x0
100c9629:	00 00 00 
100c962c:	c7 82 b4 22 00 00 00 	mov    DWORD PTR [edx+0x22b4],0x0
100c9633:	00 00 00 
100c9636:	5d                   	pop    ebp
100c9637:	c2 04 00             	ret    0x4
