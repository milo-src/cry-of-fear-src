
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
