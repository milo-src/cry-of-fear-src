
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c8520 <.text+0xc7520>:
100c8520:	55                   	push   ebp
100c8521:	8b ec                	mov    ebp,esp
100c8523:	53                   	push   ebx
100c8524:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c8527:	57                   	push   edi
100c8528:	8b 3b                	mov    edi,DWORD PTR [ebx]
100c852a:	85 ff                	test   edi,edi
100c852c:	74 2e                	je     0x100c855c
100c852e:	8b 07                	mov    eax,DWORD PTR [edi]
100c8530:	3b c7                	cmp    eax,edi
100c8532:	74 1a                	je     0x100c854e
100c8534:	56                   	push   esi
100c8535:	8b 30                	mov    esi,DWORD PTR [eax]
100c8537:	68 2c 04 00 00       	push   0x42c
100c853c:	50                   	push   eax
100c853d:	e8 63 56 07 00       	call   0x1013dba5
100c8542:	83 c4 08             	add    esp,0x8
100c8545:	8b c6                	mov    eax,esi
100c8547:	3b f7                	cmp    esi,edi
100c8549:	75 ea                	jne    0x100c8535
100c854b:	8b 3b                	mov    edi,DWORD PTR [ebx]
100c854d:	5e                   	pop    esi
100c854e:	68 2c 04 00 00       	push   0x42c
100c8553:	57                   	push   edi
100c8554:	e8 4c 56 07 00       	call   0x1013dba5
100c8559:	83 c4 08             	add    esp,0x8
100c855c:	5f                   	pop    edi
100c855d:	c7 43 04 00 00 00 00 	mov    DWORD PTR [ebx+0x4],0x0
100c8564:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
100c856a:	5b                   	pop    ebx
100c856b:	5d                   	pop    ebp
100c856c:	c3                   	ret
