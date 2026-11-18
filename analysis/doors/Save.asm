
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048990 <.text+0x47990>:
10048990:	55                   	push   ebp
10048991:	8b ec                	mov    ebp,esp
10048993:	56                   	push   esi
10048994:	57                   	push   edi
10048995:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10048998:	8b f1                	mov    esi,ecx
1004899a:	57                   	push   edi
1004899b:	e8 80 a1 0b 00       	call   0x10102b20
100489a0:	85 c0                	test   eax,eax
100489a2:	75 06                	jne    0x100489aa
100489a4:	5f                   	pop    edi
100489a5:	5e                   	pop    esi
100489a6:	5d                   	pop    ebp
100489a7:	c2 04 00             	ret    0x4
100489aa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100489ad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100489b2:	6a 0c                	push   0xc
100489b4:	68 80 24 21 10       	push   0x10212480
100489b9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100489bf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100489c5:	56                   	push   esi
100489c6:	68 d8 0b 1b 10       	push   0x101b0bd8
100489cb:	85 d2                	test   edx,edx
100489cd:	74 10                	je     0x100489df
100489cf:	03 c2                	add    eax,edx
100489d1:	8b cf                	mov    ecx,edi
100489d3:	50                   	push   eax
100489d4:	e8 e7 23 0d 00       	call   0x1011adc0
100489d9:	5f                   	pop    edi
100489da:	5e                   	pop    esi
100489db:	5d                   	pop    ebp
100489dc:	c2 04 00             	ret    0x4
100489df:	03 01                	add    eax,DWORD PTR [ecx]
100489e1:	8b cf                	mov    ecx,edi
100489e3:	50                   	push   eax
100489e4:	e8 d7 23 0d 00       	call   0x1011adc0
100489e9:	5f                   	pop    edi
100489ea:	5e                   	pop    esi
100489eb:	5d                   	pop    ebp
100489ec:	c2 04 00             	ret    0x4
100489ef:	cc                   	int3
