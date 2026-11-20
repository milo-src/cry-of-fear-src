
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100967c0 <.text+0x957c0>:
100967c0:	55                   	push   ebp
100967c1:	8b ec                	mov    ebp,esp
100967c3:	56                   	push   esi
100967c4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100967c7:	ba c0 3c 1c 10       	mov    edx,0x101c3cc0
100967cc:	57                   	push   edi
100967cd:	8b f9                	mov    edi,ecx
100967cf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100967d2:	8a 08                	mov    cl,BYTE PTR [eax]
100967d4:	3a 0a                	cmp    cl,BYTE PTR [edx]
100967d6:	75 1a                	jne    0x100967f2
100967d8:	84 c9                	test   cl,cl
100967da:	74 12                	je     0x100967ee
100967dc:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100967df:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100967e2:	75 0e                	jne    0x100967f2
100967e4:	83 c0 02             	add    eax,0x2
100967e7:	83 c2 02             	add    edx,0x2
100967ea:	84 c9                	test   cl,cl
100967ec:	75 e4                	jne    0x100967d2
100967ee:	33 c0                	xor    eax,eax
100967f0:	eb 05                	jmp    0x100967f7
100967f2:	1b c0                	sbb    eax,eax
100967f4:	83 c8 01             	or     eax,0x1
100967f7:	85 c0                	test   eax,eax
100967f9:	75 1e                	jne    0x10096819
100967fb:	ff 76 08             	push   DWORD PTR [esi+0x8]
100967fe:	e8 5b 4d 0d 00       	call   0x1016b55e
10096803:	83 c4 04             	add    esp,0x4
10096806:	89 87 dc 00 00 00    	mov    DWORD PTR [edi+0xdc],eax
1009680c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10096813:	5f                   	pop    edi
10096814:	5e                   	pop    esi
10096815:	5d                   	pop    ebp
10096816:	c2 04 00             	ret    0x4
10096819:	56                   	push   esi
1009681a:	8b cf                	mov    ecx,edi
1009681c:	e8 7f 73 f7 ff       	call   0x1000dba0
10096821:	5f                   	pop    edi
10096822:	5e                   	pop    esi
10096823:	5d                   	pop    ebp
10096824:	c2 04 00             	ret    0x4
