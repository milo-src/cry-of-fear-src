
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101170 <.text+0x100170>:
10101170:	55                   	push   ebp
10101171:	8b ec                	mov    ebp,esp
10101173:	56                   	push   esi
10101174:	57                   	push   edi
10101175:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10101178:	8b f1                	mov    esi,ecx
1010117a:	57                   	push   edi
1010117b:	e8 40 0d fc ff       	call   0x100c1ec0
10101180:	85 c0                	test   eax,eax
10101182:	75 06                	jne    0x1010118a
10101184:	5f                   	pop    edi
10101185:	5e                   	pop    esi
10101186:	5d                   	pop    ebp
10101187:	c2 04 00             	ret    0x4
1010118a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1010118d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10101192:	6a 05                	push   0x5
10101194:	68 18 9a 21 10       	push   0x10219a18
10101199:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1010119f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
101011a5:	56                   	push   esi
101011a6:	68 44 f0 1d 10       	push   0x101df044
101011ab:	85 d2                	test   edx,edx
101011ad:	74 10                	je     0x101011bf
101011af:	03 c2                	add    eax,edx
101011b1:	8b cf                	mov    ecx,edi
101011b3:	50                   	push   eax
101011b4:	e8 07 9c 01 00       	call   0x1011adc0
101011b9:	5f                   	pop    edi
101011ba:	5e                   	pop    esi
101011bb:	5d                   	pop    ebp
101011bc:	c2 04 00             	ret    0x4
101011bf:	03 01                	add    eax,DWORD PTR [ecx]
101011c1:	8b cf                	mov    ecx,edi
101011c3:	50                   	push   eax
101011c4:	e8 f7 9b 01 00       	call   0x1011adc0
101011c9:	5f                   	pop    edi
101011ca:	5e                   	pop    esi
101011cb:	5d                   	pop    ebp
101011cc:	c2 04 00             	ret    0x4
