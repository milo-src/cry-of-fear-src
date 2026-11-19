
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

100798d0 <.text+0x788d0>:
100798d0:	56                   	push   esi
100798d1:	be ec 67 14 10       	mov    esi,0x101467ec
100798d6:	ff 15 30 27 1b 10    	call   DWORD PTR ds:0x101b2730
100798dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100798e0:	8a 08                	mov    cl,BYTE PTR [eax]
100798e2:	3a 0e                	cmp    cl,BYTE PTR [esi]
100798e4:	75 1a                	jne    0x10079900
100798e6:	84 c9                	test   cl,cl
100798e8:	74 12                	je     0x100798fc
100798ea:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100798ed:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100798f0:	75 0e                	jne    0x10079900
100798f2:	83 c0 02             	add    eax,0x2
100798f5:	83 c6 02             	add    esi,0x2
100798f8:	84 c9                	test   cl,cl
100798fa:	75 e4                	jne    0x100798e0
100798fc:	33 c0                	xor    eax,eax
100798fe:	eb 05                	jmp    0x10079905
10079900:	1b c0                	sbb    eax,eax
10079902:	83 c8 01             	or     eax,0x1
10079905:	5e                   	pop    esi
10079906:	85 c0                	test   eax,eax
10079908:	74 0b                	je     0x10079915
1007990a:	68 74 34 54 10       	push   0x10543474
1007990f:	e8 6c 0e 00 00       	call   0x1007a780
10079914:	59                   	pop    ecx
10079915:	c3                   	ret
10079916:	cc                   	int3
10079917:	cc                   	int3
10079918:	cc                   	int3
10079919:	cc                   	int3
1007991a:	cc                   	int3
1007991b:	cc                   	int3
1007991c:	cc                   	int3
1007991d:	cc                   	int3
1007991e:	cc                   	int3
1007991f:	cc                   	int3
10079920:	68 74 34 54 10       	push   0x10543474
10079925:	e8 c6 0e 00 00       	call   0x1007a7f0
1007992a:	59                   	pop    ecx
1007992b:	c3                   	ret
1007992c:	cc                   	int3
1007992d:	cc                   	int3
1007992e:	cc                   	int3
1007992f:	cc                   	int3
