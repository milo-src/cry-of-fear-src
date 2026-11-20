
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10027770 <.text+0x26770>:
10027770:	55                   	push   ebp
10027771:	8b ec                	mov    ebp,esp
10027773:	56                   	push   esi
10027774:	8b f1                	mov    esi,ecx
10027776:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10027779:	85 c9                	test   ecx,ecx
1002777b:	74 37                	je     0x100277b4
1002777d:	80 be bc 01 00 00 00 	cmp    BYTE PTR [esi+0x1bc],0x0
10027784:	75 2e                	jne    0x100277b4
10027786:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10027789:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10027790:	74 22                	je     0x100277b4
10027792:	6a 00                	push   0x0
10027794:	6a 00                	push   0x0
10027796:	68 00 00 10 00       	push   0x100000
1002779b:	c6 86 bc 01 00 00 01 	mov    BYTE PTR [esi+0x1bc],0x1
100277a2:	e8 59 58 0b 00       	call   0x100dd000
100277a7:	84 c0                	test   al,al
100277a9:	75 09                	jne    0x100277b4
100277ab:	56                   	push   esi
100277ac:	e8 4f 21 0f 00       	call   0x10119900
100277b1:	83 c4 04             	add    esp,0x4
100277b4:	5e                   	pop    esi
100277b5:	5d                   	pop    ebp
100277b6:	c2 04 00             	ret    0x4
