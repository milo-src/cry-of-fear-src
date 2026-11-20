
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017740 <.text+0x16740>:
10017740:	55                   	push   ebp
10017741:	8b ec                	mov    ebp,esp
10017743:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10017746:	56                   	push   esi
10017747:	8b f1                	mov    esi,ecx
10017749:	85 c0                	test   eax,eax
1001774b:	74 1a                	je     0x10017767
1001774d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10017750:	8b 8a 0c 02 00 00    	mov    ecx,DWORD PTR [edx+0x20c]
10017756:	89 0e                	mov    DWORD PTR [esi],ecx
10017758:	85 c9                	test   ecx,ecx
1001775a:	74 18                	je     0x10017774
1001775c:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1001775f:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
10017762:	5e                   	pop    esi
10017763:	5d                   	pop    ebp
10017764:	c2 04 00             	ret    0x4
10017767:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1001776d:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
10017774:	5e                   	pop    esi
10017775:	5d                   	pop    ebp
10017776:	c2 04 00             	ret    0x4
10017779:	cc                   	int3
1001777a:	cc                   	int3
1001777b:	cc                   	int3
1001777c:	cc                   	int3
1001777d:	cc                   	int3
1001777e:	cc                   	int3
1001777f:	cc                   	int3
10017780:	e8 1b 04 00 00       	call   0x10017ba0
10017785:	f7 d8                	neg    eax
10017787:	1b c0                	sbb    eax,eax
10017789:	f7 d8                	neg    eax
1001778b:	c3                   	ret
1001778c:	cc                   	int3
1001778d:	cc                   	int3
1001778e:	cc                   	int3
1001778f:	cc                   	int3
10017790:	e8 0b 04 00 00       	call   0x10017ba0
10017795:	85 c0                	test   eax,eax
10017797:	74 04                	je     0x1001779d
10017799:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
1001779c:	c3                   	ret
1001779d:	33 c0                	xor    eax,eax
1001779f:	c3                   	ret
100177a0:	e8 fb 03 00 00       	call   0x10017ba0
100177a5:	85 c0                	test   eax,eax
100177a7:	74 04                	je     0x100177ad
100177a9:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
100177ac:	c3                   	ret
100177ad:	33 c0                	xor    eax,eax
100177af:	c3                   	ret
