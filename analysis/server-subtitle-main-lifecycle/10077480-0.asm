
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10077480 <.text+0x76480>:
10077480:	55                   	push   ebp
10077481:	8b ec                	mov    ebp,esp
10077483:	56                   	push   esi
10077484:	57                   	push   edi
10077485:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10077488:	8b f1                	mov    esi,ecx
1007748a:	57                   	push   edi
1007748b:	e8 70 0b fa ff       	call   0x10018000
10077490:	85 c0                	test   eax,eax
10077492:	75 06                	jne    0x1007749a
10077494:	5f                   	pop    edi
10077495:	5e                   	pop    esi
10077496:	5d                   	pop    ebp
10077497:	c2 04 00             	ret    0x4
1007749a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1007749d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100774a2:	6a 01                	push   0x1
100774a4:	68 28 2e 21 10       	push   0x10212e28
100774a9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100774af:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100774b5:	56                   	push   esi
100774b6:	68 90 b2 1b 10       	push   0x101bb290
100774bb:	85 d2                	test   edx,edx
100774bd:	74 10                	je     0x100774cf
100774bf:	03 c2                	add    eax,edx
100774c1:	8b cf                	mov    ecx,edi
100774c3:	50                   	push   eax
100774c4:	e8 f7 38 0a 00       	call   0x1011adc0
100774c9:	5f                   	pop    edi
100774ca:	5e                   	pop    esi
100774cb:	5d                   	pop    ebp
100774cc:	c2 04 00             	ret    0x4
100774cf:	03 01                	add    eax,DWORD PTR [ecx]
100774d1:	8b cf                	mov    ecx,edi
100774d3:	50                   	push   eax
100774d4:	e8 e7 38 0a 00       	call   0x1011adc0
100774d9:	5f                   	pop    edi
100774da:	5e                   	pop    esi
100774db:	5d                   	pop    ebp
100774dc:	c2 04 00             	ret    0x4
