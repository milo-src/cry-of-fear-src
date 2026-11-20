
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa4b0 <.text+0xf94b0>:
100fa4b0:	57                   	push   edi
100fa4b1:	8b f9                	mov    edi,ecx
100fa4b3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fa4b6:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100fa4bc:	85 c9                	test   ecx,ecx
100fa4be:	75 10                	jne    0x100fa4d0
100fa4c0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100fa4c6:	e8 45 15 00 00       	call   0x100fba10
100fa4cb:	83 c4 04             	add    esp,0x4
100fa4ce:	5f                   	pop    edi
100fa4cf:	c3                   	ret
100fa4d0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa4d5:	56                   	push   esi
100fa4d6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa4dc:	03 c1                	add    eax,ecx
100fa4de:	50                   	push   eax
100fa4df:	6a 00                	push   0x0
100fa4e1:	e8 aa e0 01 00       	call   0x10118590
100fa4e6:	8b f0                	mov    esi,eax
100fa4e8:	83 c4 08             	add    esp,0x8
100fa4eb:	85 f6                	test   esi,esi
100fa4ed:	74 33                	je     0x100fa522
100fa4ef:	90                   	nop
100fa4f0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fa4f3:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100fa4f9:	e8 12 15 00 00       	call   0x100fba10
100fa4fe:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa503:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100fa506:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa50c:	03 81 d0 01 00 00    	add    eax,DWORD PTR [ecx+0x1d0]
100fa512:	50                   	push   eax
100fa513:	56                   	push   esi
100fa514:	e8 77 e0 01 00       	call   0x10118590
100fa519:	8b f0                	mov    esi,eax
100fa51b:	83 c4 0c             	add    esp,0xc
100fa51e:	85 f6                	test   esi,esi
100fa520:	75 ce                	jne    0x100fa4f0
100fa522:	5e                   	pop    esi
100fa523:	5f                   	pop    edi
100fa524:	c3                   	ret
