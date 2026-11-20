
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ba490 <.text+0xb9490>:
100ba490:	55                   	push   ebp
100ba491:	8b ec                	mov    ebp,esp
100ba493:	51                   	push   ecx
100ba494:	56                   	push   esi
100ba495:	8b f1                	mov    esi,ecx
100ba497:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100ba49a:	8b 01                	mov    eax,DWORD PTR [ecx]
100ba49c:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100ba4a2:	85 c0                	test   eax,eax
100ba4a4:	74 4c                	je     0x100ba4f2
100ba4a6:	53                   	push   ebx
100ba4a7:	33 db                	xor    ebx,ebx
100ba4a9:	81 c6 60 01 00 00    	add    esi,0x160
100ba4af:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100ba4b2:	57                   	push   edi
100ba4b3:	83 7e 80 00          	cmp    DWORD PTR [esi-0x80],0x0
100ba4b7:	74 37                	je     0x100ba4f0
100ba4b9:	33 ff                	xor    edi,edi
100ba4bb:	39 3e                	cmp    DWORD PTR [esi],edi
100ba4bd:	7e 25                	jle    0x100ba4e4
100ba4bf:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100ba4c2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ba4c7:	8b cb                	mov    ecx,ebx
100ba4c9:	6a 00                	push   0x0
100ba4cb:	6a 00                	push   0x0
100ba4cd:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100ba4d3:	03 46 80             	add    eax,DWORD PTR [esi-0x80]
100ba4d6:	50                   	push   eax
100ba4d7:	e8 a4 65 02 00       	call   0x100e0a80
100ba4dc:	47                   	inc    edi
100ba4dd:	3b 3e                	cmp    edi,DWORD PTR [esi]
100ba4df:	7c e1                	jl     0x100ba4c2
100ba4e1:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100ba4e4:	43                   	inc    ebx
100ba4e5:	83 c6 04             	add    esi,0x4
100ba4e8:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100ba4eb:	83 fb 20             	cmp    ebx,0x20
100ba4ee:	7c c3                	jl     0x100ba4b3
100ba4f0:	5f                   	pop    edi
100ba4f1:	5b                   	pop    ebx
100ba4f2:	5e                   	pop    esi
100ba4f3:	8b e5                	mov    esp,ebp
100ba4f5:	5d                   	pop    ebp
100ba4f6:	c2 04 00             	ret    0x4
